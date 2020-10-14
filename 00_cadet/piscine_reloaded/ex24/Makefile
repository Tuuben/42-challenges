CC := gcc
CFLAGS := -g -Wall -Werror
NAME := libft.a

SOURCES := $(shell find ./ -regex ".*/srcs/ft_.*.c" )
DEPS := $(shell find ./ -regex ".*/includes/ft_.*.h" )

all: compileCFiles ${NAME} clean

compileCFiles: ${SOURCES}
	${CC} ${CFLAGS} -fPIC -c ${SOURCES}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -shared -o ${NAME} ${shell find ./ -regex ".*/ft_.*.o"}

clean:
	find ./ -regex ".*/ft_.*.o" -delete

fclean: clean
	rm -f ${NAME}

re:
	fclean all