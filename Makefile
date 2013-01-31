CC=g++

all: zombie clean

zombie: main.o Zombie.o Land.o Civilian.o
	g++ -o zombie main.o Zombie.o Land.o Civilian.o 


clean:
	rm *.o
