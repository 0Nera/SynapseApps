#include <stdio.h>
#include <learntask.h>

int main(){
    int test[] = { 32, 4, 8, 0};
    popsort_int(test);
    

    for (int i = 0; i != 4; i++){
        printf("%d: %d", i, test[i]);
    }

    return 0;
}