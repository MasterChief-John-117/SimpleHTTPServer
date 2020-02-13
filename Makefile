CC = gcc
CFLAGS  = -g -Wall -Werror

TARGET = httpserv


all: clean $(TARGET)

test: $(TARGET)
	./httpserv

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) parse.c strings.c main.c  

clean: 
	rm -f ./httpserv 
