#include <stdio.h>

#define SCREEN_Y 10
#define SCREEN_X 35
const char ALIVE = 'X';
const char DEAD = ' ';

void printScreen(const char screen[SCREEN_Y][SCREEN_X])
{
    for (int y = 0; y < SCREEN_Y; y++)
    {
        for (int x = 0; x < SCREEN_X; x++)
        {
            printf("%c", screen[y][x]);
        }
        printf("\n");
    }
}

int main()
{
    char screen[SCREEN_Y][SCREEN_X];

    // Fill screen with dead cells
    for (int y = 0; y < SCREEN_Y; y++)
    {
        for (int x = 0; x < SCREEN_X; x++)
        {
            screen[y][x] = DEAD;
        }
    }

    // Main Loop
    while (1)
    {
        printScreen(screen);
    }
    return 0;
}