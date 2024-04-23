#include "Game.h" // Incluye el archivo de encabezado de la clase Game
#include <tchar.h> // Incluye la biblioteca de caracteres de Windows

using namespace sf; // Espacio de nombres para la biblioteca SFML

int main() {

	Game myGame(800, 600, "titulo cualquiera");
	myGame.Loop();


	return 0;
}
