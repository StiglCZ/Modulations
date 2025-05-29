CC=clang++
BIN=bin
build:
	mkdir -p $(BIN)
	$(CC) -c am.cc -o $(BIN)/am.o
	$(CC) -c fm.cc -o $(BIN)/fm.o
	$(CC) -c pm.cc -o $(BIN)/pm.o
	$(CC) -shared -fPIC $(BIN)/am.o $(BIN)/fm.o $(BIN)/pm.o -o $(BIN)/modulations.so
clean:
	rm $(BIN)/*.o $(BIN)/*.so -rf
	rmdir $(BIN) --ignore-fail-on-non-empty
