#include<stdio.h>
int main()
{
  int no;
  printf("Enter a Number:");
  scanf("%d",&no);
  if(no>0)
  {
    printf("%d is positive.\n", no);
  }
  elseif(no<0)
  {
    printf("%d is negative.\n", no);
  }
  else
  {
    printf("The number is zero"\n);
  }
return 0;
}
  
