  ##===============##
 ##     FILES     ##
##===============##

NAME = skyscraper-solver

INC_DIR = ./inc/

SRC_DIR = ./src/

BIN_DIR = ./bin/

SOURCES = $(foreach D, $(SRC_DIR), $(wildcard $(D)*.c))

OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

DEPFILES = $(patsubst %.c, %.d, $(SOURCES))

  ##==================##
 ##     SOFTWARE     ##
##==================##

CC = clang

DEPFLAGS = -MP -MD

CFLAGS += -Wall -Wextra -Werror $(foreach D, $(INC_DIR), -I$(D)) $(DEPFLAGS)

  ##===============##
 ##     RULES     ##
##===============##

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $(BIN_DIR)$@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(DEPFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

test:
	echo $(SOURCES)

.PHONY: all clean flcean re test
