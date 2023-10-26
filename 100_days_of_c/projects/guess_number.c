#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int l_bound, int u_bound)
{
	int num;

	srand(time(NULL));
	num = (rand() % (u_bound - l_bound + 1) + l_bound);
	return (num);
}

int check_guess(int guess, int random_num)
{
	if (guess == random_num)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void start_game()
{
	int random_num, guess, chances = 0, flag = 0;

	random_num = random_number(0, 100);
	printf("\tWelcome to the number guessing game\n");
	printf("\tI have generated a random number between 1 and 100\n");
	printf("\tCan you guess what the number is?\n");

	do 
	{
		printf("\nEnter your guess: ");
		scanf("%d", &guess);
		if (check_guess(guess, random_num))
		{
			printf("You guessed correctly!\n");
			chances++;
			flag = 1;
			break;
		}
		else
		{
			printf("You guessed incorrectly!\n");
			if (guess < random_num)
			{
				printf("Your guess is lower - try again!\n");

			}
			else
			{
				printf("Your guess is higher - try again\n");
			}
			chances++;
		}
	} while (guess != random_num && chances < 10);

	if (flag == 1)
	{
		printf("\nCongratulations, You guessed it right!\n");
		printf("You used %d chances\n", chances);
	}
	else
	{
		printf("Sorry! You are out of chances.\n");
	}
}

int main(void)
{
	start_game();

	return (0);
}
