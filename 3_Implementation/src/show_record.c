/*include header files*/
#include<header.h>

/*Derive definition of show_record function from header.h*/
int show_record()
{
	/*Define local Variable*/
	char name[200000];
	int scr=0,sc=0;

	/*Define file operation for reading file data*/
	FILE *f;
	f=fopen("/Users/divyangyadav/Documents/src/score.txt","r");

	/*Print data to the console*/
	printf("\n____ _______\n");
	printf("Name   Score\n");

	/*Get all data*/
	while(fgets(name,20,f)!=NULL)
	{
		printf("%s",name);
	}
	printf("\n____ _______\n");
	
	/*close the file to perform opertion*/
	fclose(f);
	return 0;
}