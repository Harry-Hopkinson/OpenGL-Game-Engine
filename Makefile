CC = g++
CXXFLAGS = -std=c++20 -Wall
LDFLAGS = 

APPNAME = engine
OUT = bin/engine.exe

files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./Dependencies -I. -I./src
libraries = -L./Dependencies/lib
linker = -lglfw3 -lglfw3 -lopengl32 -lgdi32 -lwinmm

${APPNAME}:
	${CC} -o ${OUT} ${include} ${libraries} ${files} ${linker}
	cd bin && engine.exe

clean:
	cd bin && del engine.exe
