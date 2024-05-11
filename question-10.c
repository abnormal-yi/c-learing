#include <stdio.h>

int main()
{
  int x, y;

  printf("check big number A  ");
  scanf("  %d ", &x);

  
  printf("check big number B ");
  scanf("%d ", &y);

  if (x > y)
  {
    printf("the bigger number is %d",x);
  }
  else if (x == y)
  {
    printf("all are equal ");
  }
  else
  {
    printf("the biggest number  %d",y);
  }

  return 0;
}