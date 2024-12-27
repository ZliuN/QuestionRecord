#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define WIDTH 40
#define HEIGHT 20

typedef struct SnakeSegment {
    int x, y;
    struct SnakeSegment *next;
    int type; // 0 for head, 1 for body
} SnakeSegment;

SnakeSegment *snake;
int foodX, foodY;
int score = 0;
int gameOver = 0;
char direction = 'd'; // Initial direction: right

void setCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void placeFood() {
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
}

void growSnake() {
    SnakeSegment *newSegment = (SnakeSegment *)malloc(sizeof(SnakeSegment));
    newSegment->x = snake->x;
    newSegment->y = snake->y;
    newSegment->next = snake;
    newSegment->type = 1; // body
    snake = newSegment;
    score++;
}

void moveSnake() {
    SnakeSegment *current = snake;
    int prevX = current->x, prevY = current->y;
    int tempX, tempY;

    switch (direction) {
        case 'w': current->y--; break;
        case 's': current->y++; break;
        case 'a': current->x--; break;
        case 'd': current->x++; break;
    }

    current = current->next;
    while (current != NULL) {
        tempX = current->x;
        tempY = current->y;
        current->x = prevX;
        current->y = prevY;
        prevX = tempX;
        prevY = tempY;
        current = current->next;
    }
}

int checkCollision() {
    SnakeSegment *current = snake->next;
    while (current != NULL) {
        if (snake->x == current->x && snake->y == current->y) {
            return 1;
        }
        current = current->next;
    }
    if (snake->x < 0 || snake->x >= WIDTH || snake->y < 0 || snake->y >= HEIGHT) {
        return 1;
    }
    return 0;
}

void draw() {
    setCursorPosition(0, 0);
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int isSnake = 0;
            SnakeSegment *current = snake;
            while (current != NULL) {
                if (current->x == x && current->y == y) {
                    isSnake = 1;
                    break;
                }
                current = current->next;
            }
            if (isSnake) {
                printf("O");
            } else if (x == foodX && y == foodY) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("Score: %d\n", score);
}

void initGame() {
    srand(time(NULL));
    snake = (SnakeSegment *)malloc(sizeof(SnakeSegment));
    snake->x = WIDTH / 2;
    snake->y = HEIGHT / 2;
    snake->next = NULL;
    snake->type = 0; // head
    placeFood();
}

int main() {
    initGame();
    while (!gameOver) {
        if (_kbhit()) {
            switch (_getch()) {
                case 'w': if (direction != 's') direction = 'w'; break;
                case 's': if (direction != 'w') direction = 's'; break;
                case 'a': if (direction != 'd') direction = 'a'; break;
                case 'd': if (direction != 'a') direction = 'd'; break;
            }
        }
        moveSnake();
        if (snake->x == foodX && snake->y == foodY) {
            growSnake();
            placeFood();
        }
        gameOver = checkCollision();
        draw();
        Sleep(100); // Control game speed
    }
    printf("Game Over! Final Score: %d\n", score);
    return 0;
}