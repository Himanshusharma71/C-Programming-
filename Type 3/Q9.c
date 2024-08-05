#include <stdio.h> 

int main() 
{
  int number=0;
  printf("\n Enter any number to find the absolute value for - ");
  scanf("\n %d",&number);
  if(number<0)
{
  number=(-1)*number;
  printf("\n Absolute value is =%d",number);
}
  return (0);
}