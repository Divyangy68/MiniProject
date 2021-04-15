#include<header.h>

void show_record()
{
	char name[200000];
	int scr=0,sc=0;
	FILE *f;
	f=fopen("/Users/divyangyadav/Documents/src/score.txt","r");
	printf("\n____ _______\n");
	printf("Name   Score\n");
	while(fgets(name,20,f)!=NULL)
	{
		printf("%s",name);
	}
	printf("\n____ _______\n");
	fclose(f);
}