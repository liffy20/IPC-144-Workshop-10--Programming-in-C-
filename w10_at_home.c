

#include <stdio.h>
#include <string.h>

int trim(char name[]) {
	char pos;
	pos = strlen(name);
	name[pos - 1] = '\0';
	return 0;
}



int main (void) {

	
	
	char name[9];
	char guess[9];
	int  i,  x;
	char password[9];



	printf("Password Game\n");
	printf("=============\n");
	printf("Enter your name (up to 8 characters): ");
	scanf("%s", name);
	
	printf("WELCOME THRILLHO\n");
	
	for (i = 0; i < 8; i++)
	{
		x = name[i] - 1;
		password[i] = x;

	}

	

	printf("Guess the password (up to 8 characters) THRILLHO: ");
	scanf("%s", guess);

	do {

		if (strcmp(password, guess) < 0) {
			trim(name);
			//d == name;
			printf("FALSE: Guess the password (up to 8 characters) %s: ", name);
			scanf("%s", guess);

		}

		else {

			printf("You got it, THRILLHO!!!\nGame Over!\n");
			break;

		}

		

	} while (strlen(name) > 1);

	if (strlen(name) == 1) {

		printf("Thou has failed.\nGame Over!\n");
	}




	return 0;

}
