import calculator_pb2
import calculator_rpcz
import rpcz
import sys

def main(argv):
    if len(argv) < 3:
        print "{0} add/sub {1}".format(argv[0], "numbers")
        sys.exit(0)

    app = rpcz.Application()
    stub = calculator_rpcz.CalculatorService_Stub(app.create_rpc_channel("tcp://127.0.0.1:5555"))
    numbers = calculator_pb2.Numbers()
    
    numbers.i = int(argv[2])
    if len(argv) > 3:
        for j in argv[3::]:
            numbers.j.append(int(j))

    if argv[1] == "add":
        print stub.Add(numbers, deadline_ms=1000)
    elif argv[1] == "sub":
        print stub.Subtract(numbers, deadline_ms=1000)

if __name__ == "__main__":
    main(sys.argv)
