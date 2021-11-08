//Maximus from 2 Number

#include<stdio.h>
#include<conio.h>

int main()
{
  int Num1 = 0,  Num2 = 0;
  
  printf("\n Enter 2 integers Numbers = ");
  scanf("%d%d", &Num1,&Num2);
  
  if(Num1 > Num2)
  { 
     printf ("\n Number %d is Maximum.",Num1);
     
  }
  
  else
  {
    
    printf ("\n Number %d is Maximum.",Num2);
  }
  
  getch();
  return 0;
  
 
}