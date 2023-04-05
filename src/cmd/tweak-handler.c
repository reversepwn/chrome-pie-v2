
#include<stdio.h>
#include<stdlib.h>

int main() {
FILE *frplus = fopen("../../tweaks/transparent-dock.c", "r+");

char ch;

if(frplus==NULL)
{
        printf("can not open target file\n");
        exit(1);
}

while(1)
{
	ch = fgetc(frplus);
	if(ch=='Z')
	{
		printf("%c", ch); 
		fseek(frplus, -1, SEEK_CUR);
		fputc('e', frplus);
		fseek(frplus, 0, SEEK_CUR);	
	}
	if(ch == EOF)
		break;
}
fclose(frplus);

return 0;
}
