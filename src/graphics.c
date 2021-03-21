#include <stdio.h>
#include "graphics.h"

int GRAPHICS_init(Graphics *graphics){
	graphics -> window = SDL_CreateWindow(
			"Welcome to the real world",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			800,
			600,
			SDL_WINDOW_SHOWN
			);
	if (graphics -> window == NULL) {
		SDL_Log("Unable to create window: %s", SDL_Get_Error());
	return 1;
	}

	return 0;
}

void GRAPHICS_free(Graphics *graphics){
	SDL_DestroyWindow(graphics -> window);
}
