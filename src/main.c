// Copyright (c) 2025 SRB2EventZ
// main.c
// Game startup and loop

#include "macros.h"
#include "window.h"
#include <SDL2/SDL.h>

boolean running = false;

void Main_HandleEvents(SDL_Event env) {
	switch (env.type) {
		case SDL_QUIT:
			running = false;
			break;
		default:
			break;
	}
}

void Main_Loop() {
	SDL_Event env;

	while (running) {
		while (SDL_PollEvent(&env))
			Main_HandleEvents(env);
        Window_DrawBackground();
	}
}

int main() {
	
    Window_CreateWindow("SRB2EventZ The Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    Window_SetIcon();
	
	running = true;
	Main_Loop();
}

