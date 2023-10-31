// Programmer: Amna Asim
// Assignment 02
// Question 04
// Description: finds a path from the start to the end of a maze


#include <stdio.h>
const char marked = 'V';

int create_path(char maze[5][5], int s_i, int s_j)  {
    if (maze[s_i][s_j] == 'E') {
    	maze[s_i][s_j] = marked;
    	return 1;
	}
    maze[s_i][s_j] = marked;
    if (s_j + 1 < 5 && maze[s_i][s_j + 1] != 'W' && maze[s_i][s_j + 1] != marked) {
        if (create_path(maze, s_i, s_j + 1)) {
			return 1;
		}
	}
    if (s_i + 1 < 5 && maze[s_i + 1][s_j] != 'W' && maze[s_i + 1][s_j] != marked) {
        if (create_path(maze, s_i + 1, s_j)) {
			return 1;
		}
	}
    maze[s_i][s_j] = 'O';
    return 0;
}

void show_path(char maze[5][5]) {
	int i;
	for (i = 0; i < 5; i++) {
		int j;
		for (j = 0; j < 5; j++) {
			if (maze[i][j] == marked) {
				printf("%d,%d  ", i, j);
			}
		}
	}
}

void show_maze(char maze[5][5]) {
    int i, start[2], end[2];
	for (i = 0; i < 5; i++) {
		int j;
		for (j = 0; j < 5; j++) {
			printf("%c ", maze[i][j]);
			if (maze[i][j] == 'S') {
				start[0] = i; 
				start[1] = j;
			}
			if (maze[i][j] == 'E') {
				end[0] = i; 
				end[1] = j;
			}
		}
		printf("\n");
	}
	printf("start at: %d,%d\nend at: %d,%d\n", start[0], start[1], end[0], end[1]);
}

int main() {
	int s_i, s_j;
	char maze[5][5];
	int i;
	for (i = 0; i < 5; i++) {
		int j;
		for (j = 0; j < 5; j++) {
			printf("Enter maze element at (%d, %d): ", i, j);
			scanf(" %c", &maze[i][j]);
			if (maze[i][j] == 'S') {
				s_i = i;
				s_j = j;
			}
		}
	}
	printf("\n");
	show_maze(maze);
	printf("\nPath to complete maze:\n");
	create_path(maze, s_i, s_j);
	show_path(maze);
	
	return 0;
}
