Print Even and odd numbers
#include <stdio.h>
int main()
{
  int no;
  print("Enter Any number:");
  scanf("%d",&no);

  if(no%2==0)
  {
     printf("%d is even.\n", no);
  }
  else
  {
    printf("%d is odd.\n",no);
  }
return 0;
