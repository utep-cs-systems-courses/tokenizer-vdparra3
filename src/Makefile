# compiler flags. -g for debugging -03 for compiler optimization

OBJS = tokenize.o uimain.o

CFLAGS=-g #-03 

#Default Target
all: tokenize

#Need to write file dependencies

tokenize: $(OBJS)
	gcc -o tokenize $(CFLAGS) $(OBJS)

$(OBJS): history.h

#Removes generated files created by compilation
clean:
	rm -f *.o *.c~ *.c# *.h~ *# *~ tokenize

run:tokenize
	./tokenize
