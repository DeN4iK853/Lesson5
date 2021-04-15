#include <iostream>


void Foo() { 
    int a[5] {1, 2, 3, 4, 5}; 
        if (a[0]+a[1]+a[2]==a[3]+a[4]) {
         std::cout << "This is true\n";
        } 
        else (a[0]+a[1]+a[2]!=a[3]+a[4]); {
         std::cout << "This is false\n";
        }
}
void Full() {
    int b[6] {1, 1, 1, 0, 2, 1};
        if (b[0]+b[1]+b[2]!=b[3]+b[4]+b[5]) {
            std::cout << "This is false\n";
        }
        else (b[0]+b[1]+b[2]==b[3]+b[4]+b[5]); {
            std::cout << "This is true\n";
        }
}

int main() {
    Foo();
    Full();
    return 0;
}