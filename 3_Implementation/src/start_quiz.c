#include<header.h>

void start_quiz()
{
	int countr,r,r1,count,i,n;
	int score;
	char choice;
	char playername[20];
	char ch;

	printf("\nResister your name : ");
	scanf("%s",playername);

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
	choice = getchar();

	if (toupper(getchar())=='Y')
	{
		goto home;
	}

	else
	{
		goto mainhome;
	}

	mainhome:
		main_menu();

	home:
	    count=0;
     
    printf("\n\nQuestions are given below...");
    for(i=1;i<=3;i++)
    {
        r1=i;
        switch(r1)
        {
			case 1: printf("\n\n1. A collecion of 8 bits are called?");
					printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if (toupper(getchar())=='C')
					{
						printf("\nCorrect!!!\n");
						count++;
						break;
					}
			        else
				    {
			            printf("\nWrong!!! The correct answer is C\n");
				        break;
			  	   	}

            case 2: printf("\n\n2. Which of the following is a Palindrome number?");
					printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if (toupper(getchar())=='C')
					{
						printf("\nCorrect!!!\n");
						count++;
						break;
					}
			        else
				    {
			            printf("\nWrong!!! The correct answer is C\n");
				        break;
			  	   	}
                
        	case 3: printf("\n\n3. Which of the following is most oriented toward scientific programming?");
					printf("\n\nA.Cobol\t\tB.Fortran\n\nC.c++\t\tD.Basic");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
			        if (toupper(getchar())=='B')
					{
			            printf("\nCorrect!!!\n");
			            count++;
			            break;
			        }
			        else
			        {
			               printf("\nWrong!!! The correct answer is B\n");
			               break;
			        }
      	}
  	}

  	if(count>=2)
	{
        goto test;
    }
	
    else
	{
    	printf("\n\nSORRY!!! YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME\n\n");
    	exit(1);
	}

	test:
	printf("\n\n~~~~~~~~~~ CONGRATULATION... %s you are eligible to play the Game ~~~~~~~~~~",playername);
	printf("\n\n\n!Press C to Continue the Game : ");
	ch = getchar();
	if(toupper(getchar())=='C')
	{
	    goto game;
	}
	else
	{
		printf("Wrong choice : Press C to continue...");
		goto test;
	}
     
	game:
	countr=0;
	for(i=1;i<=10;i++)
	{
		r=i;

		switch(r)
		{
			case 1: printf("\n\n4. All are the example of input devices Except a:");
					printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if (toupper(getchar())=='C')
					{
						printf("\nCorrect!!!\n");
						countr++;
						break;
					}
					else
					{
						printf("\nWrong!!! The correct answer is C\n");
						goto score;
						break;
					}

			case 2: printf("\n\n5. What kind of file extension .mpg?");
					printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if (toupper(getchar())=='A')
					{
			            printf("\nCorrect!!!\n");
			            countr++;
				        break;
					}
					else
					{
			            printf("\nWrong!!! The correct answer is A\n");
			            goto score;
			            break;
					}

			case 3: printf("\n\n6. A DVD is an example of a/an.. ");
					printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if (toupper(getchar())=='D')
					{
		             	printf("\nCorrect!!!\n");
		             	countr++;
			         	break;
		            }
					else
					{
			            printf("\nWrong!!! The correct answer is D\n");
			            goto score;
			            break;
			        }

			case 4: printf("\n\n7. Who is he founder of facebook?");
					printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if (toupper(getchar())=='A')
					{
                      	printf("\nCorrect!!!\n");
                      	countr++;
                      	break;
                    }
					else
					{
				        printf("\nWrong!!! The correct answer is A\n");
					    goto score;
				        break;
			        }


			case 5: printf("\n\n8. Which of he following is a web browser?");
					printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if(toupper(getchar())=='B')
					{
                        printf("\nCorrect!!!\n");
                        countr++;
                        break;
                    }
					else
					{
				        printf("\nWrong!!! The correct answer is B\n");
				        goto score;
				        break;
				    }

			case 6: printf("\n\n9. What kind of file extension .bak?,");
					printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if (toupper(getchar())=='A')
					{
                        printf("\nCorrect!!!\n");
                        countr++;
                        break;
                    }
					else
					{
				        printf("\nWrong!!! The correct answer is A\n");
				        goto score;
				        break;
				    }

			case 7: printf("\n\n10. Which of he following is a read only memory storage device ");
					printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
					printf("\n\nEnter your answer choice : ");
					ch = getchar();
					if(toupper(getchar())=='D')
					{
                        printf("\nCorrect!!!\n");
                        countr++;
                        break;
                    }
					else
					{
				        printf("\nWrong!!! The correct answer is D\n");
				        goto score;
				        break;
				    }
		}
    }

    score:
	score = (countr+count)*10;

	if(score>0 && score<=50)
	{
	    printf("\n\n**************** CONGRATULATION *****************");
		printf("\nYou are Average in C!!!!!!!!!");
        printf("\nYour score is : %d",score);
		printf("\n\nThank You !!");
        goto go;
    }
	if(score>50 && score<=75)
	{
	    printf("\n\n**************** CONGRATULATION *****************");
	    printf("\nYou are Good in C!!!!!!!!!");
        printf("\nYour score is : %d",score);
		printf("\n\nThank You !!");
        goto go;
    }
	else if(score>75 && score<=100)
	{
	    printf("\n\n\n**************** CONGRATULATION ****************");
	    printf("\nYou are Excellent in C!!!!!!!!!");
	    printf("\nYour score is %d",score);
	    printf("\n\nThank You !!");
		goto go;
	}
	else
    {
	    printf("\n\nThanks for your participation");
	    printf("\nTRY AGAIN");
        goto go;
    }

	go:
	printf("\n\n\nPress Y if you want to play next game OR Press N if you want to submit the score : ");
	ch = getchar();
	if (toupper(getchar())=='Y')
	{
		goto home;
    }
    else if (toupper(getchar())=='N')
    {
     	edit_score(score,playername);
	    goto mainhome;
    }
	else
	{
		printf("Wrong Choice!!!");
		goto go;
	}
}