#include <iostream>
#include "rpcz/rpcz.hpp"
#include "calculator.pb.h"
#include "calculator.rpcz.h"

using namespace std;

namespace calculator 
{

  class CalculatorImpl : public CalculatorService 
  {
    
    virtual void Add(const ::Numbers& request,
		     ::rpcz::reply< ::Numbers> reply)
    {
      Numbers response;
      cout << "Got request " << request.i() << endl;
      int sum = request.i();
      int count = request.j_size();
      for (int i = 0; i < count; i++)
	{
	  sum += request.j(i);
	}
      response.set_i(sum);
      reply.send(response);
    }

  };
}

int main() 
{
  rpcz::application application;
  rpcz::server server(application);
  calculator::CalculatorImpl cal_svc;
  server.register_service(&cal_svc);
  server.bind("tcp://*:5555");
  application.run();
}
