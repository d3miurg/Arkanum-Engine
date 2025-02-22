#include "raylib.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int main(void) {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Test");

    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
            ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}