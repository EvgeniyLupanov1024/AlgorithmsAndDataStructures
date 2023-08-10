OUT_NAME = test.out

all: ${OUT_NAME}
	./${OUT_NAME}

${OUT_NAME}: test.cpp sorter.o utility.o
	g++ test.cpp sorter.o utility.o -o ${OUT_NAME} -Wall

sorter.o: sorter.cpp
	g++ -c sorter.cpp

utility.o: utility.cpp
	g++ -c utility.cpp
