a.out: main.o time.dylib sub_main.dylib
	g++ main.o time.dylib sub_main.dylib

LIB=-dynamiclib

main.o: main.cc
	g++ -c main.cc

time.dylib: time.cc time.h
	g++ $(LIB) time.cc -o time.dylib

sub_main.dylib: sub_main.cc sub_main.h time.dylib
	g++ $(LIB) sub_main.cc -o sub_main.dylib time.dylib

clean:
	rm *.o *.dylib a.out
