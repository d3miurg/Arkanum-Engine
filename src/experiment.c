#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int main(void) {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Test");
    SetTargetFPS(60);

    bool showMessageBox = 0;

    while(!WindowShouldClose()) {
        BeginDrawing();
            if (GuiButton((Rectangle){ 24, 24, 120, 30 }, "Show Message")) showMessageBox = 1;

            if (showMessageBox)
            {
                int result = GuiMessageBox((Rectangle){ 85, 70, 250, 100 },
                    "Message Box", "Hi! This is a message!", "Nice;Cool");

                if (result >= 0) showMessageBox = 0;
            }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}