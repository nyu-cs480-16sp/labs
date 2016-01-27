# NYU CS 480-008 | Spring 2016 | Lab 1

CC = gcc
CFLAGS = -g -W -Wall -Werror -Wno-unused
V = @

all: cs480

cs480:
	@echo "Please use a specific target..."

client: client.c
	@echo + cc client.c
	$(V)$(CC) $(CFLAGS) client.c -o client

server: server.c
	@echo + cc server.c
	$(V)$(CC) $(CFLAGS)  server.c -o server

echo: server.c
	@( stat echo.c &> /dev/null && echo "echo.c already exists!" ) || \
	( cp server.c echo.c && echo + cp server.c echo.c )

clean:
	@echo + clean
	$(V)rm -rf *.o *~ *.core server client

always:
	@:

.PHONY: always clean
