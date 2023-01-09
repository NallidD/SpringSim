all:
	g++ -std=gnu++2a -O3 main.cpp spring.cpp Timer.cpp -o spring
optasm:
	g++ -std=gnu++2a -O3 -S main.cpp
	g++ -std=gnu++2a -O3 -S Timer.cpp
	g++ -std=gnu++2a -O3 -S spring.cpp
asm:
	g++ -std=gnu++2a -S main.cpp
	g++ -std=gnu++2a -S Timer.cpp
	g++ -std=gnu++2a -S spring.cpp
