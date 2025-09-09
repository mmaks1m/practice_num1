#include <stdio.h>

void task1(){
  int num;
  scanf("%d", &num);
  printf("%d", num);
}

int main() {
    int choice;
    
    printf("Выберите задачу (1-25) или 0 для выхода: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1: task1(); break;
        //case 2: task2(); break;
        //case 3: task3(); break;
        //case 4: task4(); break;
        //case 5: task5(); break;
        //case 6: task6(); break;
        //case 7: task7(); break;
        //case 8: task8(); break;
        //case 9: task9(); break;
        //case 10: task10(); break;
        //case 11: task11(); break;
        //case 12: task12(); break;
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
        default: printf("Неверный выбор!\n");
    }
    
    return 0;
}