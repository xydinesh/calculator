// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: calculator.proto

#ifndef RPCZ_calculator_2eproto__INCLUDED
#define RPCZ_calculator_2eproto__INCLUDED

#include <string>
#include <rpcz/service.hpp>

namespace google {
namespace protobuf {
class ServiceDescriptor;
class MethodDescriptor;
}  // namespace protobuf
}  // namespace google
namespace rpcz {
class rpc;
class closure;
class rpc_channel;
}  //namesacpe rpcz
#include "calculator.pb.h"
void rpcz_protobuf_AssignDesc_calculator_2eproto();
void rpcz_protobuf_ShutdownFile_calculator_2eproto();

class CalculatorService_Stub;

class CalculatorService : public rpcz::service {
 protected:
  // This class should be treated as an abstract interface.
  inline CalculatorService() {};
 public:
  virtual ~CalculatorService();

  typedef CalculatorService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void Add(const ::Numbers& request,
                       ::rpcz::reply< ::Numbers> response);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void call_method(const ::google::protobuf::MethodDescriptor* method,
                  const ::google::protobuf::Message& request,
                  ::rpcz::server_channel* channel);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(CalculatorService);
};

class CalculatorService_Stub {
 public:
  CalculatorService_Stub(::rpcz::rpc_channel* channel, 
                   bool owns_channel=false);
  CalculatorService_Stub(::rpcz::rpc_channel* channel, 
                   const ::std::string& service_name,
                   bool owns_channel=false);
  ~CalculatorService_Stub();

  inline ::rpcz::rpc_channel* channel() { return channel_; }


  void Add(const ::Numbers& request,
                       ::Numbers* response,
                       ::rpcz::rpc* rpc,                     ::rpcz::closure* done);
  void Add(const ::Numbers& request,
                       ::Numbers* response,
                       long deadline_ms = -1);
 private:
  ::rpcz::rpc_channel* channel_;
  ::std::string service_name_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(CalculatorService_Stub);
};

#endif  // RPCZ_calculator_2eproto__INCLUDED