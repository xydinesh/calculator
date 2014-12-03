g++ *.cc -o calculatorsvc -Wl,--allow-shlib-undefined -I . -I ../../../../rpcz/include/ -I ../../../../rpcz/build/src/ -L /usr/local/lib -l protobuf  -l rpcz -lboost_system
