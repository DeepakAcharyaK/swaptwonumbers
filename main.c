//program to swap two numbers 
#include <stdio.h>

int main(void) {
  int var1,var2,temp;
  printf("Enter the value for num1,num2");
  scanf( "%d%d",&var1,&var2);
  printf("Before  swapping num1=%d,num2=%d",var1,var2);
  printf("\n");
  temp=var1;
  var1=var2;
  var2=temp;
  printf("After swapping num1=%d,num2=%d",var1,var2);
  
}
