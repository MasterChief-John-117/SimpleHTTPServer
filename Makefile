CC = gcc
CFLAGS  = -g -Wall -Werror

TARGET = httpserv


all: $(TARGET)

test: $(TARGET)
	./httpserv

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) parse.c strings.c main.c  
clean: 
	rm httpserv 2>/dev/null
