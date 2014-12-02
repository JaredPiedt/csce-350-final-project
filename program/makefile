GPP = g++ -O3 -Ofast -ffast-math -Wall

UTILS = ../Utilities
SCANNER = ../Utilities
SCANLINE = ../Utilities

M = Main.o
P = ParseData.o
C = Compare.o
SL = ScanLine.o
S = Scanner.o
U = Utils.o

Aprog: $(M) $(P) $(C) $(SL) $(S) $(U)
	$(GPP) -o Aprog $(M) $(P) $(C) $(SL) $(S) $(U) $(TAIL)

Main.o: Main.h Main.cpp
	$(GPP) -o Main.o -c Main.cpp

ParseData.o: ParseData.h ParseData.cpp
	$(GPP) -o ParseData.o -c ParseData.cpp
	
Compare.o: Compare.h Compare.cpp
	$(GPP) -o Compare.o -c Compare.cpp

ScanLine.o: $(SCANLINE)/ScanLine.h $(SCANLINE)/ScanLine.cpp
	$(GPP) -o ScanLine.o -c $(SCANLINE)/ScanLine.cpp

Scanner.o: $(SCANNER)/Scanner.h $(SCANNER)/Scanner.cpp
	$(GPP) -o Scanner.o -c $(SCANNER)/Scanner.cpp

Utils.o: $(UTILS)/Utils.h $(UTILS)/Utils.cpp
	$(GPP) -o Utils.o -c $(UTILS)/Utils.cpp

clean:
	rm Aprog
	rm *.o