#include <stdio.h>

int main(){
  
  int limit[10];
  int num, positive = 0, negative = 0, zero = 0, sum1, sum2, sum3;
  float average1, average2;

  for(int i = 0 ; i < 10 ; ++i){
    printf("Enter the number :");
    scanf("%d", &limit[i]);
    if(limit[i] > 0){
      sum1 += sum1;
        positive++;
        average1 = sum1 / positive;
    }
    else if(limit[i] < 0){
      sum2 += sum2;
        negative++;
        average2 = sum2 / negative;
    }
    else{
      sum3 += sum3;
        zero++;
    }
    limit[i]--;
  }

  printf("\nPositive Numbers : %d\n", positive);
  printf("Negative Numbers : %d\n", negative);
  printf("Number of zero : %d\n", zero);
  printf("The average of positive is : %.2f\n", average1);
  printf("The average of negative is : %.2f\n", average2);
  return 0;
}