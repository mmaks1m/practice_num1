#include <stdio.h>


//task_1
//int main(void) {
//  int num;
//  scanf("%d", &num);
//  printf("%d", num);
//  return 0;
//}

//task2
//int main(void){
//  int num, num2, sum, raz, pr, del;
//  scanf("%d%d", &num, &num2);
//  sum = num + num2;
//  raz = num - num2;
//  pr = num * num2;
//  del = num / num2;
//  printf("sum = %d; difference = %d; multpl = %d; div = %d", sum, raz, pr, del);
//  return 0;
//}

//task3
//int main(void){
//  int num1, num2, num3;
//  scanf("%d %d %d", &num1, &num2, &num3);
//  double avg = (num1+num2+num3) /3.;
//  printf("%f", avg);
//  return 0;
//}

//task4
//int main(void){
//  char *name[20];
//  scanf("%s", &name);
//  printf("Hello %s", name);
//  return 0;
//}

//task5
int main() {
  int year;
  printf("Year of birth: ");
  scanf("%d", &year);
  printf("ur age - %d", 2025-year);
  return 0;
}