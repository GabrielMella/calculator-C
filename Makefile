CC     = gcc
CFLAGS = -Wall -Wextra -std=c11

calculadora: main.c
	$(CC) $(CFLAGS) -o calculadora main.c

clean:
	rm -f calculadora
