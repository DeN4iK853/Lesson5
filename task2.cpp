#include <iostream>



    void Foo(){    
        for (int i = 0, a[8]; i < 8 ; i++)
        std::cout << (a[i] = i*3+1) << std::endl;   
    } 

    int main () {
       int a[8];
       Foo();
       return 0;
    
    }