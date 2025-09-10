#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int Factorial(int num)
{
  int factorial = 1;
  for (int i = 1; i < num + 1; i++)
  {
    factorial *= i;
  }
  return factorial;
}


bool Prime(int num)
{
  bool isPrime = true;
  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

void Division(int num){
  for (int i = 1; i <= num; i++){
    if (num % i == 0){
      printf("%d ", i);
    }
  }
}

void Between(int num1, int num2){
  for (int i = num1 + 1; i < num2; i++){
    printf("%d, ", i);
  }
}

int SumDividers(int num)
{
  int sum = 0;
  int divider = num - 1;
  while (divider != 0)
  {
    if (num % divider == 0)
    {
      sum += divider;
    }
    divider--;
  }
  return sum;
}

void task1(){
  int num;
  printf("enter number:");
  scanf("%d", &num);
  printf("ur number = %d", num);
}

void task2(){
  int num1, num2, sum, dif, multpl, div;
  scanf("%d %d", &num1, &num2);
  printf("sum = %d\ndifference = %d\nmultpl = %d\ndivision = %d", num1 + num2, num1 - num2, num1 * num2, num1 / num2);
}

void task3(){
  int num1, num2, num3;
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("avg = %f", (num1 + num2 + num3)/3.);
}

void task4(){
  char *name[20];
  printf("enter ur name\n");
  scanf("%s", &name);
  printf("hello %s", name);
}

void task5(){
  int year;
  printf("Enter year of birth: ");
  scanf("%d", &year);
  printf("Age: %d", 2025-year);
}

void task6(){
  int num;
  printf("enter ur number: ");
  scanf("%d", &num);
  if ((num % 2) == 0){
    printf("This number is even");
  }
  else{
    printf("This number is odd");
  }
}

void task7(){
  float num;
  printf("Enter ur number: ");
  scanf("%f", &num);
  if (num > 0){
    printf("%f > 0", num);
  }
  else if (num < 0){
    printf("%f < 0", num);
  }
  else{
    printf("%f = 0", num);
  }
}

void task8(){
  int num;
  printf("Enter ur number: ");
  scanf("%d", &num);
  if ((num % 3) == 0){
    printf("yes");
  }
  else{
    printf("No");
  }
}

void task9(){
  int num1, num2;
  printf("Enter ur numbers: ");
  scanf("%d %d", &num1, &num2);
  if (num1 >= num2){
    printf("%d is bigger", num1);
  }
  else{
    printf("%d is bigger", num2);
  }
}

void task10 (){
  int num1, num2;
  printf("Enter ur numbers: ");
  scanf("%d %d", &num1, &num2);
  if (num1 == num2){
    printf("Yes");
  }
  else{
    printf("No");
  }
}

void task11(){
  for(int i = 1; i < 11; i++){
    printf("%d ", i);
  }
}

void task12(){
  for(int i = 1; i != 10; i++){
    printf("%d * 5 = %d\n", i, i*5);
  }
}

void task13(){
  int sum = 0;
  for(int i = 1; i != 100; i++){
    sum += i;
  }
  printf("sum = %d", sum);
}

void task14(){
  for (int i = 1; i != 100; i++){
    if (i % 3 == 0 || i % 5 ==0){
      printf("%d ", i);
    }
  }
}

void task15(){
  int num = 0;
  printf("Enter ur number: ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++){
    if (num % i == 0){
      printf("%d ", i);
    }
    
  }
}

void task16(){
  int numbers[10];
  printf("List: ");
  for (int i = 1; i < 11; i++){
    numbers[i] = i;
    printf("%d, ", numbers[i]);
  }
}

void task17(){
  int numbers[10];
  printf("List: ");
  for (int i = 0; i < 10; i++)
  {
    numbers[i] = (rand() % (100 - (-100) + 1)) - 100;
    printf("%d ", numbers[i]);
  }
}

void task18(){
  int numbers[10];
  printf("Fill list: \n");
  for (int i = 0; i < 10; i++)
  {
    printf("Enter %d element of list: ", i + 1);
    scanf("%d", &numbers[i]);
  }
  printf("List: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", numbers[i]);
  }
}

void task19(){
  int numbers[10];
  int sum = 0;
  printf("List: ");
  for (int i = 0; i < 10; i++)
  {
    numbers[i] = (rand() % (100 - (-100) + 1)) - 100;
    printf("%d, ", numbers[i]);
    sum += numbers[i];
  }
  printf("\nSum of list numbers: %d", sum);
}

void task20 (){
  int numbers[10], numbers2[10], numbers3[10];
  printf("general list: ");
  for (int i = 0; i < 10; i++)
  {
    numbers[i] = (rand() % (100 - (-100) + 1)) - 100;
    numbers2[i] = (rand() % (100 - (-100) + 1)) - 100;
    numbers3[i] = numbers[i] + numbers2[i];
    printf("%d ", numbers3[i]);
  }
}

void task21(){
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  printf("Factorial = %d", Factorial(num));
}

void task22(){
  int num;
  printf("Enter number: ");
  scanf("%d", &num);
  if (Prime(num))
  {
    printf("number %d is prime", num);
  }
  else
  {
    printf("number %d not prime", num);
  }
}

void task23(){
  int num;
  printf("Enter ur num: ");
  scanf("%d", &num);
  Division(num);
}

void task24(){
  int num1, num2;
  printf("Enter 2 numbers: ");
  scanf("%d %d", &num1, &num2);
  Between(num1, num2);
}

void task25(){
  int num, num2;
  printf("Enter 2 numbers: ");
  scanf("%d%d", &num, &num2);
  if (SumDividers(num) == num2 && SumDividers(num2) == num)
  {
    printf("Numbers %d and %d are friendly", num, num2);
  }
  else
  {
    printf("Numbers %d and %d are not friendly", num, num2);
  }
}

int main() {
    int choice;
    
    printf("Choose number of exersize (1-25) or 0 to leave: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        case 8: task8(); break;
        case 9: task9(); break;
        case 10: task10(); break;
        case 11: task11(); break;
        case 12: task12(); break;
        case 13: task13(); break;
        case 14: task14(); break;
        case 15: task15(); break;
        case 16: task16(); break;
        case 17: task17(); break;
        case 18: task18(); break;
        case 19: task19(); break;
        case 20: task20(); break;
        case 21: task21(); break;
        case 22: task22(); break;
        case 23: task23(); break;
        case 24: task24(); break;
        case 25: task25(); break;
        case 0: printf("Bye\n"); break;
        default: printf("Wrong choice!\n");
    }
    
    return 0;
}