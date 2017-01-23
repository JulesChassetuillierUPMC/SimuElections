EXEC=election
SOURCES=$(wildcard *.cc)
OBJECTS=$(SOURCES:.cc=.o)
CCFLAGS=-Wall -Werror `sdl-config --cflags` 
CC=g++
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) `sdl-config --libs` -lSDL -lSDL_image -lSDL_ttf -o $(EXEC)
%.o: %.cc
	$(CC) $(CCFLAGS) -c $< -o $@
clean:
	rm -f $(OBJECTS) $(EXEC)

