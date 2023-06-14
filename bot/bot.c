#include <stdio.h>

int main()
{
	printf("I'm a bot. What's your name?\n");
	char name[20];
	scanf("%s", name);
	printf("Hello %s! How old are you?\n", name);
	int age;
	scanf("%d", &age);
	printf("You are looking younger! "
		   "I thought you are %d!", age - 3);
	return 0;
}
