// Copyright (c) 2025 SRB2EventZ
// window.c
// Window creation stuff for the game

#include "macros.h"
#include "../srb2eventz.xpm"
#include <SDL2/SDL.h>
#include "IMG_xpm.c"


SDL_Window   *window;
SDL_Surface *icon = NULL; 
SDL_Renderer* renderer;

boolean Window_CreateWindow(const char *title, int x, int y, int w, int h, uint32 flags)
{
    window = SDL_CreateWindow(title, x, y, w, h, flags);
    renderer = SDL_CreateRenderer(window, -1, 0);
     
    if(window == NULL)
    {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
			"SRB2EventZ The Game Error",
			SDL_GetError(), NULL);
        return false;
    }
    return true;
}

void Window_DrawBackground(void)
{
    int i;
    for(i = 0; i < 255; i++)
    {
        SDL_SetRenderDrawColor(renderer, i-10, i-20, i-30, 255); 
        SDL_RenderClear(renderer);                      
        SDL_RenderPresent(renderer);    
    }
}

void Window_SetIcon(void)
{
    icon = IMG_ReadXPMFromArray(srb2eventz);

    if(window && icon)
        SDL_SetWindowIcon(window, icon);

    SDL_FreeSurface(icon);
    icon = NULL;
}