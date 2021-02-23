CC=g++
CFLAGS=-g
DEPS = automate.h etat.h etat0.h etat1.h etat2.h etat3.h etat4.h etat5.h etat6.h etat7.h etat8.h etat9.h symbole.h lexer.h
OBJ = automate.o etat0.o etat1.o etat2.o etat3.o etat4.o etat5.o etat6.o etat7.o etat8.o etat9.o symbole.o lexer.o main.o
# etat.o
%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)