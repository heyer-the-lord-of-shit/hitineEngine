# hitine engine v0.3

# REQUIREMENTS: V0.3{VULKAN SDK AND SDL2(SDL3 IN THE FUTURE) SDK}

# API:
files need to be included in main

## windowShenanigans:
### `initShit()` - initializes SDL2 
### `createWindow(const char* name,bool fullscreen,bool use3D)` - creates a window,name is title of the window,fullscreen is self explanatory,use3D makes window support Vulkan context
### `create2DScene(SDL_Window* window)` - creates 2D renderer
### `cleanScreen(SDL_Renderer* renderer)` - cleans the screen
### `CleanupShit(SDL_Window* window)` - cleans shit up after everything is finished
