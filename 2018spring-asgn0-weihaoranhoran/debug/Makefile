#############################################
# Makefile for the buggy program.
# Please modify and fill up the space for
# compliation. : )
#############################################

CC = gcc
CFLAGS = 
TARGET = mycode

all: mycode.c doMath.c doStr.c
	$(CC) -o $(TARGET) $? $(CFLAGS) -lm
test: doMath.c doStr.c tester.c
	$(CC) -DTESTING -o tester $? $(CFLAGS) -lm -lcunit
clean:
	rm -rf $(TARGET) tester
