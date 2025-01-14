#include "raylib.h"

// TODO hello triangle
// TODO Pong
// TODO RayGui

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "raylib basic window");
    SetTargetFPS(60);

    int offset = 0;
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("It works!", 20, 20, 20, BLACK);

        // Frame-based movement
        Vector2 v1 = (Vector2){100+offset, 100};
        Vector2 v2 = (Vector2){100+offset, 130};
        Vector2 v3 = (Vector2){140+offset, 100};

        
        DrawTriangle(v1, v2, v3, GREEN);

        offset++;
        
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
