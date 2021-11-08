#include<stdio.h>
#include<conio.h>

int main()
{
   int Num1 = 0, Num2 = 0;
   up:
   printf("\n Enter 2 integer Numbers =");
   scanf("%d%d",&Num1,&Num2);
   
   if(Num1 == Num2)
   {
      printf ("\n Both  Given Numbers is Equal \n Please Enter Diffrent Numbers, \n"); 
      goto up;
   }
  
  (Num1 > Num2) ? printf ("\n Number %d is Maximum.",Num1):printf ("\n Number %d is Maximum.",Num2);          
  
   printf("\n Thanks !!!");
   
   getch ();
   return 0;
 }