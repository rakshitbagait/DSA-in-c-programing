#include <stdio.h>

#define DELAY 50000 // Delay in microseconds

void clear_screen() {
    printf("\033[2J"); // Clear the screen
    printf("\033[H");  // Move the cursor to the top-left corner
}

void draw_rectangle(int start_x, int start_y, int width, int height) {
    for (int i = 0; i < start_y; i++) {
        printf("\n"); // Move to the starting y position
    }
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < start_x; j++) {
            printf(" "); // Create padding for the starting x position
        }
        for (int j = 0; j < width; j++) {
            printf("*"); // Draw the rectangle
        }
        printf("\n");
    }
}

void delay() {
    for (long i = 0; i < 10000000; i++) {
        // Simple busy-wait loop for delay
    }
}

int main() {
    int max_width = 40, max_height = 20; // Maximum dimensions
    int min_width = 5, min_height = 3;  // Minimum dimensions
    int width = min_width, height = min_height;
    int growing = 1; // Flag for growing or shrinking

    while (1) {
        clear_screen();

        // Calculate top-left position for centering (assumes terminal size of 80x24)
        int start_x = (80 - width) / 2;
        int start_y = (24 - height) / 2;

        // Draw the rectangle
        draw_rectangle(start_x, start_y, width, height);

        // Adjust the dimensions
        if (growing) {
            width++;
            height++;
            if (width >= max_width || height >= max_height) {
                growing = 0; // Start shrinking
            }
        } else {
            width--;
            height--;
            if (width <= min_width || height <= min_height) {
                growing = 1; // Start growing
            }
        }

        // Delay for animation
        delay();
    }

    return 0;
}
