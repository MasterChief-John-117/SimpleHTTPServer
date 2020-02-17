CC = gcc
CFLAGS  = -g -Wall -Werror

TARGET = httpserv


all: clean $(TARGET)

test: clean
	$(CC) $(CFLAGS) -o run_tests tests/strings.c strings.c tests/tests.c
	./run_tests 

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) parse.c strings.c main.c  

clean: 
	rm -f ./httpserv
	rm -f ./run_tests
