/***********************************
* Program code for count()
***********************************/
#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int count(int argc,char *argv[])
{
	/* Write Your Code HERE! */
	
FILE *fp;
char ch;
int line, word, character,count;
line=0;
word=0;
character=0;
count=0;
fp = fopen(argv[1],"r");
if(argc==2)
{
	if(fp)
	{
		while((ch=getc(fp))!=EOF){
			character++;
			if ((ch == ' ' || ch == '\n') && count==0) { ++word;count=1;}		
			if(ch != ' ' && ch != '\n'){count=0;}		
			if (ch == '\n') { ++line; }
			

		}	

	
	printf("%d %d %d %s\n",line,word,character,argv[1]);
	

	}	
	else
	printf("Cannot open the file!\n");


}
else
printf("Wrong Number of Argument!\n");


}

