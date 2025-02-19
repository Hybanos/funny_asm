C = g++
OFLAGS = -march=native -mtune=native -Ofast -ffast-math

all: build run

build asm.o:
	$(C) $(OFLAGS) main.cpp asm.o -O3 -o out 

asm.o:
	as add.S -felf -o asm.o

run:
	./out