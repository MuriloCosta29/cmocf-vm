CC     = gcc
CFLAGS = -Wall -Wextra -std=c11 -pthread
TARGET = vm
OBJS   = vm.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c vm.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean
