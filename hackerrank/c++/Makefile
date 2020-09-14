# Hackerrank C++ Solutions Makefile

.DEFAULT_GOAL=all
SHELL:=/bin/bash

CC=g++
CPPFLAGS=-v -Wall -g

SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp, %, $(SOURCES))

all:
	for cppfile in $(SOURCES); \
	do \
	  EXE=$${cppfile%.cpp}; \
	  $(CC) $(CPPFLAGS) $$cppfile -o $$EXE; \
	  chmod +x $$EXE; \
	done

clean:
	rm -fv $(OBJECTS)

.PHONY: clean all

