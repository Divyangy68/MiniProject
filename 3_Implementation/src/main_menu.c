#include<header.h>

void main_menu()
{
	char choice,ch,ch1,ch2,ch3;

	mainhome:
	printf("\n\n\n\t~~~~~~~ QUIZ GAME ~~~~~~~\n");
	printf("\n****************************************");

	printf("\n\t      WELCOME\n ");
	printf("\n\t        to\n ");
	printf("\n\t    THE QUIZ GAME ");
	printf("\n");
	printf("\nPress S : To start the game");
	printf("\nPress V : To view the candidate score");
	printf("\nPress H : For help            ");
	printf("\nPress Q : To Quit the GAME    ");
	printf("\n________________________________________\n");
	house:
	printf("\nEnter Choice : ");
	choice = getchar();
	if(toupper(choice)=='S')
   	{
		start_quiz();
		goto mainhome;
	}

	else if(toupper(choice)=='V')
	{
		show_record();
		goto mainhome;
	}

	else if(toupper(choice)=='H')
	{
		help();
		goto mainhome;
	}

	else if (toupper(choice)=='Q')
	{
		exit(1);
	}

	else
	{
		printf("Wrong choice\n");
		goto house;
	}
}