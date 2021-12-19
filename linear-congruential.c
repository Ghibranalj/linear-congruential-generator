

#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


int myrand(int, int, int, int);
// my implementation of the linear congruential Generator algorithm
int main(int argc, char **argv){

	char *seedString = "1234512";

	if (argc > 1){
		seedString = argv[1];
	}

	int a = 1103515245;
	int b = 0;
	int m = INT_MAX;
	int seed = atoi(seedString);

	b = myrand(a,b,m,seed);
	int curr = seed;

	for (int i = 0; i < 10; i++){

		curr = myrand(a, b, m, curr);
		printf("%d\n", curr);
	}
}

int myrand(int a, int b, int m, int curr){
	return a * curr + b % m;
}
