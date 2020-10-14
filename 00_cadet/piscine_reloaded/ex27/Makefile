CC := gcc
CFLAGS := -g -Wall -Werror
NAME = ft_display_file

SOURCES := $(shell find ./ -regex ".*/ft_.*.c" )

all: compileCFiles compileObjects clean

compileCFiles: ${SOURCES}
	${CC} ${CFLAGS} -fPIC -c ${SOURCES}

compileObjects:
	${CC} ${CFLAGS} -o $(NAME) ${shell find ./ -regex ".*/ft_.*.o"}

clean:
	find ./ -regex ".*/ft_.*.o" -delete

fclean: clean
	rm -f $(NAME)

re:
	fclean all