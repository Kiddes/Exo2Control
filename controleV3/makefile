#changer le nom des deux lignes suivantes si nécessaire
SOURCES = main2.c WT.c LC.c
OUTPUT = resultat
LIB = -lm 
OPT = -Wall
OBJ = $(SOURCES:.c=.o)



all: $(OUTPUT)

clean: 
	rm $(OUTPUT) *.o ../lib/*.o

$(OUTPUT): $(OBJ)
	@gcc $^  -o $(OUTPUT)  $(LIB)



%.o: %.c
	@gcc $(OPT) -c $<  -o $@






