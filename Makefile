CC = g++
CCFLAGS =

LOCFLAGS =

all: $(OBJECTS)
%.o: %.cc
	$(CC) $(CCFLAGS) $(LOCFLAGS) -c $< -o $@

%.bin: %.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $< -o $@

clean:
	rm -rf *.o core *.stackdump

clobber: clean
	rm -rf *.bin
