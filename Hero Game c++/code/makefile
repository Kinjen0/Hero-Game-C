CC = g++
CFLAGS = -Wall -std=c++11
SFML_INCLUDE = -I/path/to/SFML/include
SFML_LIBS = -L/path/to/SFML/lib -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

SRCS = run.cpp hero.cpp enemy.cpp maps.cpp cricket.cpp frog.cpp plant.cpp plant2.cpp plant 3.cpp squirrel.cpp tomatoPlant.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = game

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(SFML_INCLUDE) -o $@ $^ $(SFML_LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(SFML_INCLUDE) -c $<

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean