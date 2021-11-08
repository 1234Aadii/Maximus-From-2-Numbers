#include<stdio.h>
#include<conio.h>

int main()
{
   int Num1 = 0, Num2 = 0;
   
   printf("\n Enter 2 integer Numbers =");
   scanf("%d%d",&Num1,&Num2);
   
   (Num1 == Num2) ? printf("\n Both are given Number is equal"):(Num1 > Num2) ? printf ("\n Number is maximum ",Num2):
   
   printf("\n Thanks !!!");
   
   getch ();
   return 0;
}