# Copyright (c) 2025 SRB2EventZ
# Main Makefile to compile the game

CC=gcc
CFLAGS=
LIBS=-lSDL2

OBJDIR = ../objs
OBJS = main.o window.o

BINDIR = ../bin
EXENAME = srb2eventzthegame

$(BINDIR)/$(EXENAME): $(OBJDIR)/$(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

$(OBJDIR)/main.o: main.c window.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJDIR)/window.o: window.c window.h
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJDIR)/*
	rm -f $(BINDIR)/*

$(OBJDIR):
	mkdir $(OBJDIR)

$(BINDIR):
	mkdir $(BINDIR)
