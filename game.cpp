#pragma once
#include <SDL2/SDL.h>
#include <iostream>


struct SCREEN //encapsulation of drawing operations
{
   SDL_Window * window = nullptr;
   SDL_Renderer * renderer = nullptr;
};

//uses app since display is being initialized
void init_Game(SCREEN &app, const char title[], const int width, const int height)
{ 



////
    if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS | SDL_INIT_TIMER) < 0)
    {
        std::cerr << "Failed to initialize the SDL2 library\n";
    }

    
    app.window = SDL_CreateWindow(title,
                                      SDL_WINDOWPOS_CENTERED,
                                      SDL_WINDOWPOS_CENTERED, 
                                      width, 
                                      height,
                                      SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_GRABBED
                                      );
    //Defining renderer
    app.renderer = SDL_CreateRenderer(app.window,
                                        -1,
                                        SDL_RENDERER_TARGETTEXTURE | SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC
                      
                                        );
                            
    if(!app.window)//checks if window is created
    {
        std::cerr << "Failed to create window\n";
    }
}

void Game_Loop(SCREEN &display){

}

void run(){

const char title[] = "Window";
const int width = 1280;
const int height = 720; 
SCREEN display;

init_Game(display, title, width, height); // mainly window setup and subsystems

Game_Loop(display);

    
}