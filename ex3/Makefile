##
 # @file Makefile
 # @brief Makefile to build ex3
 #
 # @date Agust 03, 2018
 # 
 ##
##**********************************************************************#
 # $@ contains name of target in a rule
 # $^ contains name of first prerequisit of target

 CFLAG = -Wall -Werror -O0 -std=c99 -g 
 CC = gcc
 OBJCS = ex3.out \
         ex3.i \
         ex3.d \
         ex3.o \
         ex3.asm

# Preprocessor output
%.i: %.c
	$(CC) $(CFLAGS) -E -o $@ $^ 

# Assembly file output
%.asm: %.c
	$(CC) $(CFLAGS) -S -o $@ $^ 
# Dependancy File output
%.d: %.c
	$(CC) $(CFLAGS) -M -o $@ $^

# Object File output
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^
# excutable file
%.out: %.c
	$(CC) $(CFLAGS) -o $@ $^
# compile all
.PHONY:all
all: ex3.i \
     ex3.d \
     ex3.o \
     ex3.asm \
     ex3.out 
# clean directory
.PHONY:clean
clean:
	rm -f $(OBJCS)
