// gcc main.c -o main `pkg-config --libs --cflags sdl2`
#include <stdio.h>
#include <SDL2/SDL.h>

void main()
{
    printf("Hello world!");
}