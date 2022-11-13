files = ${wildcard src/*.cpp} ${wildcard src/*.hpp}
include = -I./Dependencies -I.
libraries = -L./Dependencies/lib
linker = -lglfw3dll -lglfw3 -lvulkan-1 -lgdi32 -lglfw3 -lopengl32 -lgdi32 -lwinmm
version = -std=c++20

run:
	g++ -o bin/engine.exe ${version} ${include} ${libraries} ${files} ${linker}
	cd bin && engine.exe