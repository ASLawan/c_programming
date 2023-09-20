#include <stdlib.h>
#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = malloc(sizeof(struct User));
	if (user == NULL)
	{
		return (NULL);
	}
	else
	{
		user->name = name;
		user->email = email;
		user->age = age;
	}

	return (user);
}

int main(void)
{
	struct User *user;

	user = new_user("Lawan", "Lawan@alx.com", 30);
	if (user == NULL)
	{
		return (1);
	}
	else
	{
		printf("User %s created sucessfully!\n", user->name);
		printf("%s's email is: %s\n", user->name, user->email);
		printf("And he is %d years old\n", user->age);
	}

	return (0);
}
