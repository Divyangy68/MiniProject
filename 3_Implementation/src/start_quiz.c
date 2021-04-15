/*include header files*/
#include<header.h>

/*Derive definition of start_quiz function from header.h*/
int start_quiz()
{
	/*Define local Variable*/
	int countr,r,r1,count,i,n;
	int score;
	char choice;
	char playername[20];
	char ch;

	/*Register a name of candidate*/
	printf("\nResister your name : ");
	scanf("%s",playername);

	/*Defining terms and condition*/
	printf("\n\n ~~~~~~~~~~ Welcome %s to C Program Quiz Game ~~~~~~~~~~",playername);
	printf("\n\n Here are some tips you might wanna know before playing:");
	printf("\n --------------------------------------------------------------------------------");
	printf("\n 1. There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
	printf("\n\n 2. In warmup round you will be asked a total of 3 questions to test your");
	printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
	printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
	printf("\n\n 3. Your game starts with CHALLANGE ROUND. In this round you will be asked a");
	printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
	printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
	printf("\n\n 4. You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option.");
	printf("\n\n 5. You will be asked questions continuously, till right answers are given");
	printf("\n\n 6. No negative marking for wrong answers!");
	printf("\n\n\n\t ~~~~~~~~~~ ALL THE BEST ~~~~~~~~~~");
	printf("\n\n Press Y to start the game or Press any key to return to the main menu : ");
	
	/*Get the choice of Candidate*/
	choice = getchar();

	/*If choice is 'y' or 'Y' then game start*/
	if (toupper(getchar())=='Y')
	{
		goto home; //call the home lable to procced furthur.
	}
	/*If any key press instead of 'y' or 'Y' then game stops and return to main menu.*/
	else
	{
		goto mainhome; // call the mainhome lable to return to the main menu.
	}

	/*Start of goto mainhome Lable*/
	mainhome:
		return 0;
		main_menu();

	/*Start of goto home Lable*/
	home:
	    count=0;	//Initialize count with zero.
     
	/*First Three question starts*/
    printf("\n\nQuestions are given below...");
    for(i=1;i<=3;i++)
    {
        r1=i;
        switch(r1)
        {			/*Question 1*/
			case 1: printf("\n\n1. Which of the following is not a valid variable name declaration?");
					printf("\n\nA.int __a3;\t\tB.int __3a;\n\nC.None of the mentioned\t\tD.int __A3;");
					
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();

					/*If choice is 'c' or 'C' then if statements execute*/
					if (toupper(getchar())=='C')
					{
						printf("\nCorrect!!!\n");
						count++; //increment counter of correct answer
						break;
					}
					/*If any key choice instead of 'c' or 'C' then else execute.*/
			        else
				    {
			            printf("\nWrong!!! The correct answer is C\n");
				        break;
			  	   	}
					
					/*Question 2*/
            case 2: printf("\n\n2. Which data type is most suitable for storing a number 65000 in a 32-bit system?");
					printf("\n\nA.signed short\t\tB.long\n\nC.unsigned short\t\tD.int");
										
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					
					/*If choice is 'c' or 'C' then if statements execute*/
					if (toupper(getchar())=='C')
					{
						printf("\nCorrect!!!\n");
						count++; //increment counter of correct answer
						break;
					}
					/*If any key choice instead of 'c' or 'C' then else execute.*/
			        else
				    {
			            printf("\nWrong!!! The correct answer is C\n");
				        break;
			  	   	}

					/*Question 3*/
        	case 3: printf("\n\n3. What is the size of an int data type?");
					printf("\n\nA.4 Bytes\t\tB.Depends on the system/compiler\n\nC.8 Bytes\t\tD.Cannot be determined");
					
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();

					/*If choice is 'b' or 'B' then if statements execute*/
			        if (toupper(getchar())=='B')
					{
			            printf("\nCorrect!!!\n");
			            count++; //increment counter of correct answer
			            break;
			        }
					/*If any key choice instead of 'b' or 'B' then else execute.*/
			        else
			        {
			               printf("\nWrong!!! The correct answer is B\n");
			               break;
			        }
      	}
  	}

	/*check the availiblity of candidate to precess furthure*/
  	if(count>=2)
	{
        goto test; //call the test lable to procced furthure.
    }
	
    else
	{
    	printf("\n\nSORRY!!! YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME\n\n");
    	return 0;
    	exit(0);
	}
	
	/*Start of goto test Lable*/
	test:
	printf("\n\n~~~~~~~~~~ CONGRATULATION... %s you are eligible to play the Game ~~~~~~~~~~",playername);
	printf("\n\n\nPress C to Continue the Game : ");
	
	/*Check availiblity of candidate*/
	ch = getchar();
	if(toupper(getchar())=='C')
	{	
	    goto game; //call the game lable to procced furthure.
	}
	else
	{
		printf("Wrong choice : Press C to continue...");
		goto test; //call the test lable to again verify availiblity.
	}
     
	/*Start of game lable*/
	game:
	countr=0; // countr initialize with zero
	for(i=1;i<=10;i++)
	{
		r=i;

		switch(r)
		{			
					/*Question 4*/
			case 1: printf("\n\n4. What is short int in C programming?");
					printf("\n\nA.The basic data type of C\t\tB.Qualifier\n\nC.Short is the qualifier and int is the basic data type\t\tD.All of the mentioned");
					
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();

					/*If choice is 'c' or 'C' then if statements execute*/
					if (toupper(getchar())=='C')
					{
						printf("\nCorrect!!!\n");
						countr++; //increment counter of correct answer
						break;
					}
					/*If any key choice instead of 'c' or 'C' then else execute.*/
					else
					{
						printf("\nWrong!!! The correct answer is C\n");
						goto score; //call the score lable to get the score.
						break;
					}

					/*Question 5*/
			case 2: printf("\n\n5. Which of the following declaration is not supported by C?");
					printf("\n\nA.String str; \t\tB.char *str;\n\nC.float str = 3e2;\t\tD.Both String str; & float str = 3e2;");
					
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();

					/*If choice is 'a' or 'A' then if statements execute*/
					if (toupper(getchar())=='A')
					{
			            printf("\nCorrect!!!\n");
			            countr++; //increment counter of correct answer
				        break;
					}
					/*If any key choice instead of 'a' or 'A' then else execute.*/
					else
					{
			            printf("\nWrong!!! The correct answer is A\n");
			            goto score; //call the score lable to get the score.
			            break;
					}

					/*Question 6*/
			case 3: printf("\n\n6. Which among the following is NOT a logical or relational operator? ");
					printf("\n\nA.!=\t\tB.==\n\nC.||\t\tD.=");
					
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					
					/*If choice is 'd' or 'D' then if statements execute*/
					if (toupper(getchar())=='D')
					{
		             	printf("\nCorrect!!!\n");
		             	countr++; //increment counter of correct answer
			         	break;
		            }
					/*If any key choice instead of 'd' or 'D' then else execute.*/
					else
					{
			            printf("\nWrong!!! The correct answer is D\n");
			            goto score; //call the score lable to get the score.
			            break;
			        }

					/*Question 7*/
			case 4: printf("\n\n7. Relational operators cannot be used on ____________");
					printf("\n\nA.structure\tB.long\n\nC.strings\t\tD.float");

					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();

					/*If choice is 'a' or 'A' then if statements execute*/
					if (toupper(getchar())=='A')
					{
                      	printf("\nCorrect!!!\n");
                      	countr++; //increment counter of correct answer
                      	break;
                    }
					/*If any key choice instead of 'a' or 'A' then else execute.*/
					else
					{
				        printf("\nWrong!!! The correct answer is A\n");
					    goto score; //call the score lable to get the score.
				        break;
			        }

					/*Question 8*/
			case 5: printf("\n\n8. Can function definition be present in header files?");
					printf("\n\nA.No\tB.Yes\n\nC.Depends on the compiler\t\tD.Depends on the standard");

					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();

					/*If choice is 'b' or 'B' then if statements execute*/
					if(toupper(getchar())=='B')
					{
                        printf("\nCorrect!!!\n");
                        countr++; //increment counter of correct answer
                        break;
                    }
					/*If any key choice instead of 'b' or 'B' then else execute.*/
					else
					{
				        printf("\nWrong!!! The correct answer is B\n");
				        goto score; //call the score lable to get the score.
				        break;
				    }

					/*Question 9*/
			case 6: printf("\n\n9. What is the advantage of #define over const?");
					printf("\n\nA.Data type is flexible \t\tB.Can have a pointer\n\nC.Reduction in the size of the program\t\tD.None of the mentioned");
					
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();

					/*If choice is 'a' or 'A' then if statements execute*/
					if (toupper(getchar())=='A')
					{
                        printf("\nCorrect!!!\n");
                        countr++; //increment counter of correct answer
                        break;
                    }
					/*If any key choice instead of 'a' or 'A' then else execute.*/
					else
					{
				        printf("\nWrong!!! The correct answer is A\n");
				        goto score; //call the score lable to get the score.
				        break;
				    }

					/*Question 10*/
			case 7: printf("\n\n10. _____ is an optional argument that gives the maximum number of characters to be read.");
					printf("\n\nA.length\t\tB.precision\n\nC.modifiers\t\tD.width");
					
					/*Get the answer from candidate*/
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					
					/*If choice is 'd' or 'D' then if statements execute*/
					if(toupper(getchar())=='D')
					{
                        printf("\nCorrect!!!\n");
                        countr++; //increment counter of correct answer
                        break;
                    }
					/*If any key choice instead of 'd' or 'D' then else execute.*/
					else
					{
				        printf("\nWrong!!! The correct answer is D\n");
				        goto score; //call the score lable to get the score.
				        break;
				    }
		}
    }

	/*Start of score lable*/
    score:
	score = (countr+count)*10; //Generate the Score in multiple of 10

	/*Divide the category of candidate based on score*/
	/*if score between 0 to 50 then Candidate has an Average knowledge about C*/
	if(score>0 && score<=50)
	{
	    printf("\n\n**************** CONGRATULATION *****************");
		printf("\nYou are Average in C!!!!!!!!!");
        printf("\nYour score is : %d",score);
		printf("\n\nThank You !!");
        goto go; //call the go lable to get the score.
    }
	/*if score between 50 to 75 then Candidate has an Good knowledge about C*/
	if(score>50 && score<=75)
	{
	    printf("\n\n**************** CONGRATULATION *****************");
	    printf("\nYou are Good in C!!!!!!!!!");
        printf("\nYour score is : %d",score);
		printf("\n\nThank You !!");
        goto go; //call the go lable to get the score.
    }
	/*if score between 75 to 100 then Candidate has an Excellent knowledge about C*/
	else if(score>75 && score<=100)
	{
	    printf("\n\n\n**************** CONGRATULATION ****************");
	    printf("\nYou are Excellent in C!!!!!!!!!");
	    printf("\nYour score is %d",score);
	    printf("\n\nThank You !!");
		goto go; //call the go lable to get the score.
	}
	/*if score is less then 0 then Candidate need to re-attempt the test */
	else
    {
	    printf("\n\nThanks for your participation");
	    printf("\nTRY AGAIN");
        goto go; //call the go lable to get the score.
    }

	/*Start of go lable*/
	go:
	printf("\n\n\nPress Y if you want to play next game OR Press N if you want to submit the score : ");
	ch = getchar(); // get the choice of candidate to process again of submit the score

	/*if Press 'y or 'Y' then they take quiz again*/
	if (toupper(getchar())=='Y')
	{
		goto home; //call the home lable to get the score.
    }
	/*if Press any key instead of 'y or 'Y' then they submit the score*/
    else 
    {
		/*call the edit_score function*/
     	edit_score(score,playername);
     	return 0;
	    goto mainhome; //call the mainhome lable to get the score.
    }
}