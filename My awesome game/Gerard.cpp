#include <iostream>
#include "SDL/include/SDL.h"
#pragma comment (lib, "SDL/SDL2main.lib")
#pragma comment (lib, "SDL/SDL2.lib")

//screen dimensions (need to be constant)
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;
//
//#if 0
//int main(int argc, char *arv[]) {
//
//	//Creating the window we will be rendering to
//	SDL_Window* window = NULL;
//
//	//Creatimg the 2d surface inside the window
//	SDL_Surface* screenSurface = NULL;
//
//	//Initialize SDL (errors returns -1)
//	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
//
//		std::cout << "We could not initialize! SDL_Error: " << "%s" << SDL_GetError() << std::endl;
//	}
//
//	else {
//
//		//Create a window(1. Name of the window, 2. & 3. The x and y values, 4. & 5. The height and weidth, 6. Flag make sure that the window is created)
//		window = SDL_CreateWindow("Exercise 1 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
//		//If there is an error, it return NULL
//		if (window == NULL) {
//
//			std::cout << "We could not initialize! SDL_Error: " << "%s" << SDL_GetError() << std::endl;
//		}
//
//		else {
//			
//			//Get window surface
//			screenSurface = SDL_GetWindowSurface(window);
//
//			//Fill the surface (red)
//			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
//
//			//Updates the window to see what you are drawing
//			SDL_UpdateWindowSurface(window);
//
//			//Wait a time(2 seconds in this case)
//			SDL_Delay(5000);
//		}
//	}
//
//	//Free memory
//	SDL_DestroyWindow(window);
//
//	//Quit SDL subsystems
//	SDL_Quit();
//
//	return 0;
//
//}
//#endif
//
//int main(int argc, char *arv[]){
//
//SDL_Window* window = NULL;
//window = SDL_CreateWindow("Exercise 2 Rectangle", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
//
////Setup renderer
//SDL_Renderer* renderer = NULL;
//renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//
//// Set render color to blue ( background will be rendered in this color )
//SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
//
//// Clear winow
//SDL_RenderClear(renderer);
//
//// Creat a rect at pos ( 50, 50 ) that's 50 pixels wide and 50 pixels high.
//SDL_Rect r;
//r.x = 50;
//r.y = 50;
//r.w = 50;
//r.h = 50;
//
//// Set render color to blue ( rect will be rendered in this color )
//SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
//
//// Render rect
//SDL_RenderFillRect(renderer, &r);
//
//// Render the rect to the screen
//SDL_RenderPresent(renderer);
//
//// Wait for 5 sec
//SDL_Delay(5000);
//
//SDL_DestroyWindow(window);
//SDL_Quit();
//
//return 0;
//
//}
