#include <stdio.h>
#include <ports.h>


int main(){
    print_str("Hello World!");

    /*
    while(1){
        char c[] = {'\0', '\0'};
        c[1] = getchar() + 16;
        qemu_putstring("APP:[");
        qemu_putstring(c[0]);
        qemu_putstring("]");
        print_str(c[0]);
    }*/
    return 0;
}