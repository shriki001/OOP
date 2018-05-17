#ifdef _DEBUG
#pragma comment(lib, "sfml-main-d.lib")
#elif defined(NDEBUG)
#pragma comment(lib, "sfml-main.lib")
#else
#error "Unrecognized configuration!"
#endif

#include "Game.h"

int main()
{
	Game tetrisGame;
	tetrisGame.run();

	return EXIT_SUCCESS;
}

