
#include "raylib.h"
int main(){
	float screenWidth = 800;
	float screenHeight = 450;
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(screenWidth,screenHeight,"Example input keys");
	Vector2 ballPosition = {screenWidth/2,screenHeight/2};

	SetTargetFPS(60);
	while (!WindowShouldClose()){
		if (IsWindowResized()){
			screenWidth = GetScreenWidth();
			screenHeight = GetScreenHeight();
			ballPosition.x = screenWidth/2;
			ballPosition.y = screenHeight/2;
		}
		// Update 
		if(IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
		if(IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
		if(IsKeyDown(KEY_UP)) ballPosition.y -= 2.0f;
		if(IsKeyDown(KEY_DOWN)) ballPosition.y += 2.0f;

		// Render
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawText("Move tthe ball with arrow keys",10,10,20,DARKGRAY);
			DrawCircleV(ballPosition,50,MAROON);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}