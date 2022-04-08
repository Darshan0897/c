#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	for(ch=0;ch<26;ch++)
	{
		if(ch%2==0)
		{
			printf("%c \t",ch+65,ch+65);
		}
		else
		{
			printf("%c \t",ch+97,ch+97);
		}
	}
	getch();
}