include = -I./Dependencies -I.
libraries = -L./Dependencies/lib
files = ${wildcard src/core/*.cpp} ${wildcard src/core/*.hpp} ${wildcard src/*.cpp} ${wildcard src/*.hpp} ${wildcard src/*.c} ${wildcard src/*.h}

run:
	g++ -g -std=c++17 ${include} ${libraries} ${files} -lglfw3dll -lglfw3 -lvulkan-1 -lgdi32 -lglfw3 -o bin/engine.exe
	./bin/engine.exe