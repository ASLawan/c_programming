#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}

char *random_choice(int l_bound, int u_bound)
{
	int random_num;
	char *choice;

	srand(time(NULL));
	random_num = (rand() % (u_bound - l_bound + 1) + l_bound);
	if (random_num == 0)
		choice = "ROCK";
	else if (random_num == 1)
		choice = "PAPER";
	else
		choice = "SCISSORS";
	return (choice);
}

int determine_winner(char *p_choice, char *c_choice)
{

	int result = 3;
	
	if (strncmp(p_choice, "ROCK", 4) == 0 && strncmp(c_choice, "SCISSORS", 8) == 0)
	{
		result = 1;
	}
	if (strncmp(p_choice, "SCISSORS", 8) == 0 && strncmp(c_choice, "PAPER", 5) == 0)
	{
		result = 1;
	}
	if (strncmp(p_choice, "PAPER", 5) == 0 && strncmp(c_choice, "ROCK", 4) == 0)
	{
		result = 1;
	}
	if (strncmp(c_choice, "ROCK", 4) == 0 && strncmp(p_choice, "SCISSORS", 8) == 0)
	{
		result = 2;
	}
	if (strncmp(c_choice, "SCISSORS", 8) == 0 && strncmp(p_choice, "PAPER", 5) == 0)
	{
		result = 2;
	}
	if (strncmp(c_choice, "PAPER", 5) == 0 && strncmp(p_choice, "ROCK", 4) == 0)
	{
		result = 2;
	}

	return (result);
}


void start_game()
{
	char *p_choice, choice[10];
	char *c_choice;
	int p_count = 0, c_count = 0, d_count = 0, chances = 10, ans, win = 0;

	printf("\n\n\tWelcome to the ROCK_PAPER_SCISSORS game.\n");
	printf("\tWould you like to play?: (1 - to play/0 - to quit)\n");
	scanf("%d", &ans);
	if (ans == 1)
	{
		printf("\n\tAwesome Choice....Let's goooo...\n\n");
		while (chances != 0)
		{
			printf("Enter your choice (rock - paper - scissors): \n");
			scanf("%s", choice);
			
			p_choice = to_upper(choice);
			c_choice = random_choice(0, 2);
			 
			printf("Your choice: %s\n", p_choice);
			printf("Computer's choice: %s\n", c_choice);
	
			win = determine_winner(p_choice, c_choice);
	
			if (win == 1)
			{
				c_count++;
			}
			if (win == 2)
			{
				p_count++;
			}
			if (win == 3)
			{
				d_count++;
			}
			chances--;
		}
	
		printf("\t\nHere is how you performed: \n\n");
		printf("YOU: \t\t%d\n", p_count);
		printf("COMPUTER: \t%d\n", c_count);
		printf("DRAW: \t\t%d\n", d_count);

		if (p_count > c_count)
			printf("\nYou won! - Congratulations.\n");
		else if (p_count < c_count)
			printf("The Computer won!\n");
		else if (p_count == c_count)
			printf("It was a tie!\n");	
	}
	else
	{
		printf("Oopse....no problem!\n");
	}
}

int main(void)
{
	start_game();

	return(0);
}
