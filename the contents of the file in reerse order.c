#include<stdio.h>
#include<stdlib.h>
int main ()
	{
		FILE *fp
		int ft,i=0;
		fp = fopen ("my captain .txt","r");
		if(fp==NULL)
		{
		printf("ERROR");
RETURN O;
{
FSEEK(FP,O,SEEK_END);
FT=FTELL(FP);
WHILE(I<FT)
{
I++;
FSEEK(FP,-I,SEEK_END);
PRINTF("%C",FGETC(FP));
{
FCLOSE(FP);
RETURN 0;
}
				
		
