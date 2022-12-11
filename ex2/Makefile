OBJS	= ./lib/tree.o ./src/main.o 
SOURCE	= ./lib/tree.c ./src/main.c
OUT	= ./bin/a.out 
CC	 = gcc
FLAGS	 = -g  -c -Wall

all: $(OBJS)
	@$(CC) -g $(OBJS) -o $(OUT) -lm
	$(OUT)
/lib/tree.o: ./lib/tree.c
	@$(CC) $(FLAGS) ./lib/tree.c -lm
/src/main.o: ./src/main.c
	@$(CC) $(FLAGS) ./src/main.c 