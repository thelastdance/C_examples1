
// https://www.hackerrank.com/challenges/too-high-boxes/problem

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

/*
the #define directive allows the definition of macros within your source code. These macro definitions allow constant values to be declared for use throughout your code.
*/
#define maxheight 41

typedef struct {
    int length;
    int width;
    int height;
}box;

//typedef struct box box;

int get_volume(box b){
    return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b){
    return (b.height < maxheight ? 1 : 0);
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
