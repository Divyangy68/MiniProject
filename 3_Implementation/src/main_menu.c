/*include header files*/
#include<header.h>

/*Derive definition of main_menu function from header.h*/
int main_menu()
{
	/*defining variable for stroing choice*/
	char choice;

	/*Start of goto mainhome Lable*/
	mainhome:

	/*Information about the use of keys to play games*/
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

	/*Start of goto mainhome Lable*/
	house:
	
	/*Get the choice from Candidate*/
	printf("\nEnter Choice : ");
	choice = getchar();
	
	/*If choice is 's' or 'S' then send contorl to start_quiz()*/
	if(toupper(choice)=='S')
   	{
		start_quiz();
		goto mainhome;
	}
	/*If choice is 'v' or 'V' then send contorl to show_record()*/
	else if(toupper(choice)=='V')
	{
		show_record();
		goto mainhome;
	}
	/*If choice is 'h' or 'H' then send contorl to help()*/
	else if(toupper(choice)=='H')
	{
		help();
		goto mainhome;
	}
	/*If choice is 'q' or 'Q' then Quit the quiz with return value 0*/
	else if (toupper(choice)=='Q')
	{
		exit(0);
	}
	/*If entered key is not from given key set*/
	else
	{
		printf("Wrong choice\n");
		
		/*Again Ask the key to start quiz*/
		goto house;
	}
	return 0;
}