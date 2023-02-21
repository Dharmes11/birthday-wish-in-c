#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
char i[26],j;
clrscr();
textcolor(RED);
textbackground(WHITE);
printf("\n enter the name :");
scanf("%s",&i);
for(j=1;j<=25;j++)
{
cprintf("\n HAPPY BIRTHDAY %s \3",i);
delay(200);
}
getch();
}
