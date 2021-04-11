#Compiler variable
#Option:			\
		gcc			\
		clang	
CXX := gcc

#Program sourec File 
SRC_FILE := ./EX_7.c
#SRC_FILE += ./(file).c

#Program executable file
EXC_NAME := exc.run

#Optimization level \
Options: - 0,1,2,3	\
		 - s (size)	\
		 - g (debugging)
CXXFLAGS := -O0

build:
	@ $(CXX) $(CXXFLAGS) $(SRC_FILE) -o $(EXC_NAME)

clean:
	@ echo "--------- Remove old executable file ---------"
	@ rm $(EXC_NAME)

run: build
	@ echo "--------- Build And Run ---------"
	@ ./$(EXC_NAME)
	@ echo "\n--------- Program Size ---------"
	@ size $(EXC_NAME)


size :
	@ size $(EXC_NAME)
