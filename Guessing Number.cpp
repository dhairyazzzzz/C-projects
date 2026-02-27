#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int random, guess;
	int guesses=0;
	srand(time(NULL));
	printf("Welcome to Guessing the number game:\n");
	random= rand() % 100 + 1;
	// You can check whether random numbers are generating or not by using 'printf("%d",random);'
	do{
		printf("Guess a number between 1 to 100!!\n");
		scanf("%d", &guess);
		guesses++;
		if(guess>random)
		printf("Guessed Number is larger than the Number!!\n ");
		else if (guess<random)
		printf("Guessed Number is less than the Number!!\n ");
		else
		printf("Congratulations! You guessed the number correctly in %d tries.\n",guesses);
	}
	while(guess!=random);
	printf("Bye bye!\n");
    return 0;
}

