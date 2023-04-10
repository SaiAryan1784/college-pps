// Example 3: Pass two-dimensional arrays
#include <stdio.h>

void displayNumbers(int num[][2], int m)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",num[i][j]);
        }
    }
}

int main()
{
  int num[2][2];
  printf("Enter 4 numbers:\n");
  for (int i = 0; i < 2; ++i) 
  {
    for (int j = 0; j < 2; ++j) 
    {
      scanf("%d", &num[i][j]);
    }
  }
  // pass multi-dimensional array to a function
  displayNumbers(num, 2);
  return 0;
}