#include "raylib.h"
#include "../inc/mole.hpp"

const char* title = "Carrot Mole";
const char* backgroundImg = "assets/background.png";
const char* moleImg = "assets/mole.png";

const int screenHeight = 600;
const int screenWidth = 1200;

int main()
{
    InitWindow(screenWidth, screenHeight, title);

    Texture2D background = LoadTexture(backgroundImg);

    Mole mole({600, 300}, moleImg, 2, 2, 0.025f);


    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);
        DrawTexture(background, 0, 0, WHITE);

        mole.Draw();
        mole.Update();

        EndDrawing();
    }
    

    UnloadTexture(background);
    CloseWindow();
    return 0;
}
