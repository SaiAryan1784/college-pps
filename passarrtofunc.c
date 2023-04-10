// Example 1: Pass Individual Array Elements
#include<stdio.h>

void display(int age1, int age2) 
{
  printf("%d\n", age1);
  printf("%d\n", age2);
}

int main() 
{
 int ageArray[] = {2, 8, 4, 12};
  // pass second and third elements to display()
  printf("%d\n",ageArray[5]);
  display(ageArray[0], ageArray[5]); 
  return 0;
}

