#pragma once

int fibonacci(int N) {
    if (N == 1 || N == 2)
        return 1; // первые 2 числа равны 1
    return fibonacci(N - 1) + fibonacci(N - 2); // складываем предыдущие 2 числа
} 
void popsort_int(int a[]) {
    // считываем количество чисел n
    int n = sizeof(a) / sizeof(int);

    for(int i = 0 ; i < n - 1; i++) { 
       // сравниваем два соседних элемента.
       for(int j = 0 ; j < n - i - 1 ; j++) {  
           if(a[j] > a[j+1]) {           
              // если они идут в неправильном порядке, то  
              //  меняем их местами. 
              int tmp = a[j];
              a[j] = a[j+1] ;
              a[j+1] = tmp; 
           }
        }
    }
 }