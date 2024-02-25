#include <stdio.h>
#include <stdlib.h>

int main() {
	/*	
	This code is the converted version of the 3rd question of the 2018 IMO (International Mathematical Olympiad) about Anti-Pascal triangle.
	Let's explain the code: As you can see, the value 'n' here represents the largest number needed to create the Anti-Pascal triangle.
	We start this value from 10 because we know that with a simple operation we can generate the Anti-Pascal triangle with the number 10.
	Our 'i' value represents the pattern of numbers needed to create this triangle. 
	If we see the number "2018" in the output we obtain, 
	the answer to the question will be "yes, its possible"; if we cannot see it, the answer will be "no, its not possible."
	You can change the "n" value in the for-loop as you want. (Please enter a valid number)
	*/
	int i=5, n=10;
	for (i=5; n < 2018; i++){
    	printf("%d\n",n);
    	n = n + i;
	} 
	return 0;
}

