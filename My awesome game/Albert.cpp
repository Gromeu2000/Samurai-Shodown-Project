//#include "SDL/include/SDL.h"
//#include <iostream>
//#pragma comment(lib, "SDL/SDL2main.lib")
//#pragma comment(lib, "SDL/SDL2.lib")
//
//int main(int argc, char*argv[])
//{
//	//screen dimension constants
//	const int SCREEN_WIDTH = 640;
//	const int SCREEN_HEIGTH = 480;
//
//	//The window we'll be rendering to
//	SDL_Window* window = NULL;
//
//	//The surface containes by the window
//	SDL_Surface* screenSurface = NULL;
//
//	//The renderer we need to set the colour
//	SDL_Renderer* renderer = NULL;
//
//	//Initialize SDL
//	if (SDL_Init(SDL_INIT_VIDEO) < 0)
//	{
//		std::cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
//	}
//	else
//	{
//		//create window
//		window = SDL_CreateWindow("SDL Exercise", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGTH, SDL_WINDOW_SHOWN);
//		if (window == NULL)
//		{
//			std::cout << "Window could not be created! SLD_Error: " << SDL_GetError() << std::endl;
//		}
//
//		//Get window surface
//		screenSurface = SDL_GetWindowSurface(window);
//
//		// We must call SDL_CreateRenderer in order for draw calls to affect this window.
//		/*How to use SDL_Renderer function: 
//		SDL_Renderer* SDL_CreateRenderer(SDL_Window* window, int index, Uint32 flags)*/
//		renderer = SDL_CreateRenderer(window, -1, 0);
//
//		// Select the color for drawing. It is set to red here.
//		SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
//
//		// Clear the entire screen to our selected color.
//		SDL_RenderClear(renderer);
//
//		// Up until now everything was drawn behind the scenes.
//		// This will show the new, red contents of the window.
//		SDL_RenderPresent(renderer);
//		
//		
//	}
//}
