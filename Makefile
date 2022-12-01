CC = g++
CXXFLAGS = -std=c++20 -Wall
LDFLAGS = 

# main engine variables
APPNAME = engine
OUT = bin/engine.exe

files = ${wildcard src/*.cpp} ${wildcard src/*.hpp} ${wildcard src/*.c}
include = -I./vendors -I. -I./src
libraries = -L./vendors/lib
linker = -lglfw3 -lglfw3 -lopengl32 -lgdi32 -lwinmm -lglu32 -lfreeglut

# test variables
TESTNAME = test
TESTOUT = bin/test.exe
TESTInclude = -I./vendors -I. -I./src
testFiles = ${wildcard tests/*.cpp} ${wildcard tests/*.hpp}

${APPNAME}:
	${CC} -o ${OUT} ${include} ${libraries} ${files} ${linker}
	cd bin && engine.exe

build:
	${CC} -o ${OUT} ${include} ${libraries} ${files} ${linker}

testBuild:
	${CC} -o ${TESTOUT} ${TESTInclude} ${libraries} ${testFiles} ${linker}

${TESTNAME}:
	${CC} -o ${TESTOUT} ${TESTInclude} ${libraries} ${testFiles}
	cd bin && test.exe

clean:
	cd bin && del engine.exe && del test.exe
