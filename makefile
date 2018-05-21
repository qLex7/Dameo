-Dameo: obj/main.o obj/plateau.o obj/player.o obj/game.o
	g++ -std=c++11 -o Dameo obj/main.o obj/plateau.o obj/player.o obj/pawn.o obj/game.o

obj/main.o: main.cpp 
	g++ -std=c++11 -c main.cpp -o obj/main.o

obj/plateau.o: src/plateau.h src/plateau.cpp
	g++ -std=c++11 -c src/plateau.cpp -o obj/plateau.o

obj/joueur.o: src/player.h src/player.cpp
	g++ -std=c++11 -c src/player.cpp -o obj/player.o

obj/pawn.o: src/pawn.h src/pawn.cpp
	g++ -std=c++11 -c src/pawn.cpp -o obj/pawn.o

obj/game.o: src/game.h src/game.cpp
	g++ -std=c++11 -c src/game.cpp -o obj/game.o

clean:
	rm obj/*.o

clear: clean
	rm -f Dameo

re: clear Dameo

	
