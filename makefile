(CFLAGS)=" -Wall -ansi -pedantic"

all: game 

game: object.o player.o command.o game.o game_loop.o graphic_engine.o screen.o space.o game_reader.o 
	gcc -g command.o game.o game_loop.o graphic_engine.o screen.o space.o game_reader.o player.o object.o -o game

object.o: object.c object.h
	gcc $(CFLAGS) -c object.c

player.o: player.c player.h
	gcc $(CFLAGS) -c player.c

command.o: command.c command.h
	gcc $(CFLAGS) -c command.c

game.o: game.c game.h
	gcc $(CFLAGS) -c game.c

game_loop.o: game_loop.c
	gcc $(CFLAGS) -c game_loop.c

graphic_engine.o: graphic_engine.c graphic_engine.h
	gcc  $(CFLAGS) -c graphic_engine.c

screen.o: screen.c screen.h
	gcc  $(CFLAGS) -c screen.c

space.o: space.c space.h
	gcc $(CFLAGS) -c space.c

game_reader.o: game_reader.c game_reader.h

clean:
	rm *.o
