#include<header.h>

void edit_score(int score, char playernm[20])
{
	int sc;
	char nm[20];
	FILE *f;
	f=fopen("/Users/divyangyadav/Documents/src/score.txt","r");
	fscanf(f,"%s %d",nm,&sc);

	if (score>=sc && nm == playernm)
	{ 
		sc=score;
		fclose(f);
		f=fopen("/Users/divyangyadav/Documents/src/score.txt","w");
		fprintf(f,"%s    %d",playernm,sc);
		fclose(f);
	}
	else
	{
		sc=score;
		fclose(f);
		f=fopen("/Users/divyangyadav/Documents/src/score.txt","w");
		fprintf(f,"%s %d",playernm,sc);
		fclose(f);
	}
}