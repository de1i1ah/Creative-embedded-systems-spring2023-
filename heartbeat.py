import serial
import pygame

ser = serial.Serial('/dev/cu.wchusbserial54D80055691', 115200)

pygame.init()
screen = pygame.display.set_mode((800, 600))
clock = pygame.time.Clock()

heart_image = pygame.image.load('heart.png')
heart_rect = heart_image.get_rect()

def map_range(value, from_min, from_max, to_min, to_max):
    return (value - from_min) * (to_max - to_min) / (from_max - from_min) + to_min

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Read the values from the serial port
   # x = int(ser.readline().strip())
   # y = int(ser.readline().strip())
  
    # Read the values from the serial port
    line = ser.readline().strip().decode()
    x_str, y_str = line.split(', ')
    x = int(x_str.split(':')[1])
    y = int(y_str.split(':')[1])

    # Map the values to the heartbeat rate
    heart_size = map_range(x, 0, 1023, 50, 200)
    heart_color = (255, map_range(y, 0, 1023, 0, 255), map_range(y, 0, 1023, 0, 255))

    # Draw the heartbeat animation
    heart_img = pygame.image.load("heart.png")
    screen.fill((0, 0, 0))
    heart_image = pygame.transform.scale(heart_img, (heart_size, heart_size))
    heart_image.set_colorkey((0, 0, 0))
    heart_image.fill(heart_color, special_flags=pygame.BLEND_RGBA_MULT)
    screen.blit(heart_image, heart_rect)
    pygame.display.flip()

    clock.tick(60)

