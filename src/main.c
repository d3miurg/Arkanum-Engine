#include <stdio.h>
#include <stdlib.h>
#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include "style_dark.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

int findArgument(int argc, char *argv[], const char *arg) {
    printf("total args = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        if (!strcmp(argv[i], arg)) {
            printf("found %s\n", argv[i]);
            return i;
        }
    }
    return 0;
}

int main(int argc, char *argv[]) {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Test");
    int index = findArgument(argc, argv, "-fps");
    int fps = atoi(argv[index+1]);
    printf("fps = %d\n", fps);
    if (index > 0) {
        SetTargetFPS(fps);
    }
    GuiLoadStyleDark();

    int showMenu = 0;
    int result = 0;
    char *showMenuEmitter = "";
    char *resultEmitter = "";

    while(!WindowShouldClose()) {
        BeginDrawing();
            showMenu = GuiButton((Rectangle){ 0, 0, 20, 20}, "#96#");
            //sprintf(showMenuEmitter, "%d", showMenu);
            //DrawText(showMenuEmitter, 20, 0, 10, WHITE);
            //sprintf(resultEmitter, "%d", result);
            //DrawText(resultEmitter, 40, 0, 10, WHITE);
            if (showMenu) {
                result = GuiMessageBox((Rectangle){ 85, 70, 250, 100 },
                    "#191#Menu Test", "Menu", "OK!!!!");

                if (result >= 0) {
                    showMenu = 0;
                    result = 0;
                }
            }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}