#include<stdio.h>

void hello() {
    printf("HEEEELLLLOO!!!\n");
}
int square(int x) {
    return x*x;
}
int main(){
    hello();
    int result = square(5);
    printf("Sqaure of 5 is : %d\n", result);
    return 0;
}