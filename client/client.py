import calculator_pb2
import calculator_rpcz
import rpcz
import sys

def main(argv):
    if len(argv) < 2:
        print "{0} {1}".format(argv[0], "numbers")
        sys.exit(0)

    app = rpcz.Application()
    stub = calculator_rpcz.CalculatorService_Stub(app.create_rpc_channel("tcp://127.0.0.1:5555"))
    numbers = calculator_pb2.Numbers()
    
    numbers.i = int(argv[1])
    if len(argv) > 2:
        for j in argv[2::]:
            numbers.j.append(int(j))

    print stub.Add(numbers, deadline_ms=1000)

if __name__ == "__main__":
    main(sys.argv)
