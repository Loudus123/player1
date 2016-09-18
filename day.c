#include<stdio.h>
#include<conio.h>
void main()
{
 char day[1000];
 printf("enter the  day in aweek");
 gets(day);
 if(day=="sunday")
 {
 printf("%s is a holyday=false");
 else
 printf("%s is a working day =true");
 }
 getch();
 }
