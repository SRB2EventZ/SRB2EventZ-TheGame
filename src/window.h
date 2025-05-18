// Copyright (c) 2025 SRB2EventZ
// window.h
// Window creation stuff for the game

#include <SDL2/SDL.h>

extern SDL_Window   *window;
extern SDL_Surface *icon; 
extern SDL_Renderer* renderer;

boolean Window_CreateWindow(const char *title, int x, int y, int w, int h, uint32 flags);
void Window_SetIcon(void);
void Window_DrawBackground(void);

