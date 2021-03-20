#include "Game.h"
#include "headers.h"
#include "Interpreter.h"

int main(int argc, char *argv[])
{
	Game game;
	game.run();
	std::cout << eval("");
}
