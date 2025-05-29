CC=clang++
build:
	mkdir -p bin
	$(CC) -c am.cc -o bin/am.o
	$(CC) -c fm.cc -o bin/fm.o
	$(CC) -c pm.cc -o bin/pm.o
	$(CC) -shared -fPIC bin/am.o bin/fm.o bin/pm.o -o bin/modulations.so
clean:
	rm bin/*.o bin/*.so -rf
	rmdir bin --ignore-fail-on-non-empty
