#include "../../include/states/MainState.h"

MainState::MainState() {
	fieldTexture.load("resources/field.png");

}

void MainState::Init(SDL_Renderer *screen) {
	totalTicks = 0;
	fieldSheet.init(&fieldTexture,640,480,640,480);
}
void MainState::Cleanup() {
}

void MainState::Pause() {}
void MainState::Resume() {}

void MainState::Event(StateManager* game, SDL_Event event) {

}

void MainState::Update(StateManager* game, int ticks) {
	totalTicks += ticks;
}

void MainState::Draw(SDL_Renderer* screen) {
	SDL_SetRenderDrawColor(screen, 0, 0, 0, 255);
	SDL_RenderClear(screen);
	SDL_Rect dst;
	dst.x = 0;
	dst.y = 0;
	dst.w = 640;
	dst.h = 480;
	SDL_Rect src = fieldSheet.getSprite(0);
	SDL_RenderCopy(screen,fieldTexture,&src,&dst);
	SDL_RenderPresent(screen);

}
