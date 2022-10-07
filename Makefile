include = -I./Dependencies -I.
libraries = -L./Dependencies/lib
files = src/core/main.cpp src/glad.c

run:
	g++ -g -std=c++17 ${include} ${libraries} ${files} -lglfw3dll -lglfw3 -lvulkan-1 -lgdi32 -lglfw3 -o bin/engine.exe
	./bin/engine.exe