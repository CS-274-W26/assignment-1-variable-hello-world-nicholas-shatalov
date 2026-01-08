#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int myrand = rand() % 11;
	// printf("%d\n", myrand);

	if(myrand >= 0 && myrand < 5) {
		printf("Eat more beef, kick less cats\n");
	}
	else if(myrand > 4 && myrand < 10) {
		printf("FRODO LIVES\n");
	}
	else if(myrand == 10) {
		printf("Larn is the best roguelike\n");
	}
}
