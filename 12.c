#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int dice = 5;
	int roll = 0;
	for(int i = 0; i < dice; i++) {
		roll = rand() % 6 + 1;
		printf("Dice %d: %d\n", i, roll);
	}
	return 0;
}
// YouTube Lesson: https://www.youtube.com/watch?v=4FCxXG44SFM
// YouTube 12 dars
// 
