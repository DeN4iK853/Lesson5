#include <iostream>


void Foo() {
    const int n = 4;
    int a[n] {1, 2, 3, 4};
    int t;
    t = a[n-3];
        for (int i = n-1; i>=0; i-- ) {
            a[i+1]=a[i];
        }
        a[0]=t;
        for (int i=0; i<n; i++) {
            std::cout <<a[i]<< "  \n";
        }
}    

int main() {
    Foo();
    return 0;
}