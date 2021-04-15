/*include header files*/
#include<header.h>

/*Derive definition of edit_score function from header.h*/
int edit_score(int score, char playernm[20])
{
	/*Define local Variable*/
	int sc;
	char nm[20];

	/*Define file operation for reading file data*/
	FILE *f;
	f=fopen("/Users/divyangyadav/Documents/src/score.txt","r");
	fscanf(f,"%s %d",nm,&sc);

	/*Check if name is present in file and previous score is smaller than New_score then update data accordingly*/
	if (score>=sc && nm == playernm)
	{ 
		sc=score;
		fclose(f);

		/*Update data to file*/
		f=fopen("/Users/divyangyadav/Documents/src/score.txt","w");
		fprintf(f,"%s    %d",playernm,sc);

		/*close the file to perform opertion*/
		fclose(f);
	}
	/*if name is not present in file then write it in file*/
	else
	{
		sc=score;
		fclose(f);

		/*writing new data to the file*/
		f=fopen("/Users/divyangyadav/Documents/src/score.txt","w");
		fprintf(f,"%s %d",playernm,sc);
		
		/*close the file to perform opertion*/
		fclose(f);
	}
	return 0;
}