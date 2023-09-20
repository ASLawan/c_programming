#include <stdio.h>
#include <string.h>

char *to_upper(char *s);

/*define struct template*/
/*
 * struct Score - player name and score
 * @username: player name
 * @score: player's score
 */

struct Score
{
	char username[20];
	int score;
};

int main(void)
{
	/*declare questions*/
	char q0[30], q1[30], q2[30], q3[30], q4[30], q5[30], q6[30], q7[30], q8[30], q9[30], res[10];


	printf("\n\tWelcome! How well do know African Countries and theie Capital cities\n");
	printf("\nTest your knowledge by answering this quiz\n");
	printf("\nWould you like to answer the quiz(yes/no)?\n");
	scanf("%s", res);

	to_upper(res);

	if (strcmp(res, "YES") == 0)
	{
		printf("\nLet's Get Started");
	
	/*declare a struct*/
	struct Score player1;

	/*get players name*/
	printf("\nWhat's your username: \n");
	scanf("%s", player1.username);
	player1.score = 0;

	/*questions*/
	printf("Q0: What is the capital of Cameroon?\n");
	scanf("%s", q0);
	to_upper(q0);
	printf("Q1: What is the capital of Angola?\n");
	scanf("%s", q1);
	to_upper(q1);
	printf("Q2: What is the capital of Niger?\n");
	scanf("%s", q2);
	to_upper(q2);
	printf("Q3: What is the capital of Kenya?\n");
	scanf("%s", q3);
	to_upper(q3);
	printf("Q4: What is the capital of Libya?\n");
	scanf("%s", q4);
	to_upper(q4);
	printf("Q5: What is the capital of Morocco?\n");
	scanf("%s", q5);
	to_upper(q5);
	printf("Q6: What is the capital of Senegal?\n");
	scanf("%s", q6);
	to_upper(q6);
	printf("Q7: What is the capital of Uganda?\n");
	scanf("%s", q7);
	to_upper(q7);
	printf("Q8: What is the capital of Mali?\n");
	scanf("%s", q8);
	to_upper(q8);
	printf("Q9: What is the capital of Rwanda?\n");
	scanf("%s", q9);
	to_upper(q9);

	/*results*/
	printf("\n\tHere is how you performed in the quiz\n");

	/*determine scores*/
	if (strcmp(q0, "YAOUNDE") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong. The capital of Cameroon is Yaounde\n");
	}
	if (strcmp(q1, "LUANDA") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Angola is Luanda\n");
	}
	if (strcmp(q2, "NIAMEY") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Niger is Niamey\n");
	}
	if (strcmp(q3, "NAIROBI") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Kenya is Nairobi\n");
	}	
	if (strcmp(q4, "TRIPOLI") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Libya is Tripoli\n");
	}	
	if (strcmp(q5, "CASABLANCA") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Morocco is Casablanca\n");
	}	
	if (strcmp(q6, "DAKAR") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Senegal is Dakar\n");
	}	
	if (strcmp(q7, "KAMPALA") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Uganda is Kampala\n");
	}	
	if (strcmp(q8, "BAMAKO") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Mali is Bamako\n");
	}
	if (strcmp(q9, "KIGALI") == 0)
	{
		player1.score += 1;
	}
	else
	{
		printf("You got that wrong!. The capital of Rwanda is Kigali");
	}

	/*Display results*/
	
	printf("\n\tYou scored %d out of 10 questions\n", player1.score);
	if (player1.score >= 8)
	{
		printf("\nYou definitely know Africa!. Congratulations %s\n", player1.username);
	}
	else if (player1.score >= 5)
	{
		printf("\nYou have some knowledge about Africa!. You can do better %s.\n", player1.username);
	}
	else if (player1.score < 5)
	{
		printf("\nYou barely know Africa! You need to step up %s\n", player1.username);
	}
	}
	else
	{
		printf("\nThat's Okay! See you then.\n");
	}

}

/**
 * *to_upper - converst string to uppercase
 * @s: string to convert
 *
 * Return: string in uppercase
 */

char *to_upper(char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
