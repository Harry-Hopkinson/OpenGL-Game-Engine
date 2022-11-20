CC = g++
CXXFLAGS = -std=c++20 -Wall
LDFLAGS = 

# main engine variables
APPNAME = engine
OUT = bin/engine.exe

files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./Dependencies -I. -I./src
libraries = -L./Dependencies/lib
linker = -lglfw3 -lglfw3 -lopengl32 -lgdi32 -lwinmm

# test variables
TESTNAME = test
TESTOUT = bin/test.exe
TESTInclude = -I./src

testfiles = ${wildcard src/tests/*.cpp} ${wildcard src/tests/*.hpp}

${APPNAME}:
	${CC} -o ${OUT} ${include} ${libraries} ${files} ${linker}
	cd bin && engine.exe

${TESTNAME}:
	${CC} -o ${TESTOUT} ${testfiles} ${TESTInclude}
	cd bin && test.exe

clean:
	cd bin && del engine.exe
