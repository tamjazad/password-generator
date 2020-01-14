CC = g++
CXX = g++ -O0

INCLUDES = 

CFLAGS = -g -Wall $(INCLUDES)
CXXFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = -g
LDLIBS =

executables = passgen
objects = passgen.o password.o

.PHONY: default
default: $(executables)

$(executables): password.o

$(objects): password.h

.PHONY: clean
clean:
	rm -f *.o passgen

.PHONY: all
all: clean passgen
