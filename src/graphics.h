#ifndef ENGINE_GRAPHICS_H
#define ENGINE_GRAPHICS_H

#include <stdio.h>

typedef struct {
	int width;
	int height;
	SDL_Window *window;
} Graphics;

int GRAPHICS_init(Graphics *graphics);
void GRAPHICS_free(Graphics *graphics);

#endif

