#include <iostream>
#include <stdio.h>

    void print_msg(void){
        printf("x[10] {1, 1, 0, 0, 1, 1, 0, 0, 0, 0}\n");
    }
    
    int main () {
        int x[10] {0, 0, 1, 1, 0, 1, 0, 0, 1, 1};
        print_msg();
    return 0;
}