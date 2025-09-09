#include <stdio.h>
#include <math.h>

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
        //case 13: task13(); break;
        //case 14: task14(); break;
        //case 15: task15(); break;
        //case 16: task16(); break;
        //case 17: task17(); break;
        //case 18: task18(); break;
        //case 19: task19(); break;
        //case 20: task20(); break;
        //case 21: task21(); break;
        //case 22: task22(); break;
        //case 23: task23(); break;
        //case 24: task24(); break;
        //case 25: task25(); break;
        //case 0: printf("Выход...\n"); break;
        default: printf("Wrong choice!\n");
    }
    
    return 0;
}