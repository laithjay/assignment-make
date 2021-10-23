all: hello

hello: main.o version.o trimmer.o parser.o
	g++ main.o version.o trimmer.o parser.o -o hello

main.o: main.cpp
	g++ -c main.cpp

version.o: version.cpp
	g++ -c version.cpp

trimmer.o: trimmer.cpp
	g++ -c trimmer.cpp

parser.o: parser.cpp
	g++ -c parser.cpp

clean:
	rm -rf *o hello
