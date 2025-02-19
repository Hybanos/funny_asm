C = g++
OFLAGS = -march=native -mtune=native -Ofast -ffast-math

all: build run

build: asm.o
	$(C) $(OFLAGS) main.cpp $^ -o out 

asm.o:
	as add.S -o asm.o

run:
	./out