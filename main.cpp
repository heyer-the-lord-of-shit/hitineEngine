#include "windowShenanigans.cpp"

int main() {
    initShit();
    SDL_Window* window = createWindow("the red planet",false,true);
    SDL_Renderer* renderer = create2DScene(window);

    bool running = true;
    SDL_Event event;

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
            

            SDL_RenderClear(renderer);
            SDL_RenderPresent(renderer);
        }
    }

    CleanupShit(window);
    return 0;
}
