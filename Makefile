CC = gcc
CFLAGS = -Wall

SOURCES = main.c utils.c io/csv.c io/json.c
# Add more source files as needed

all: planetae_converter

planetae_converter: $(SOURCES)
	$(CC) $(CFLAGS) -o planetae_converter $(SOURCES)