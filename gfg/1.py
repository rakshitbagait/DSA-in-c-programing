import pygame
import sys

# Initialize Pygame
pygame.init()

# Set up the display
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Infinite Rectangle")

# Define colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)

# Initial rectangle parameters
x = 200
y = 150
width = 400
height = 300
shrink = True

clock = pygame.time.Clock()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
    
    # Fill the screen with black color
    screen.fill(BLACK)
    
    # Draw the rectangle
    pygame.draw.rect(screen, WHITE, (x, y, width, height), 1)
    
    # Update the display
    pygame.display.flip()
    
    # Delay to control speed
    clock.tick(30)
    
    # Change the size of the rectangle
    if shrink:
        width -= 2
        height -= 2
        x += 1
        y += 1
        if width < 50 or height < 50:
            shrink = False
    else:
        width += 2
        height += 2
        x -= 1
        y -= 1
        if width >= 400 or height >= 300:
            shrink = True
