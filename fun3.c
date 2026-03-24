#include <stdio.h>

int getNumber() {
    return 10;
}

int main() {
    int num = getNumber();
    printf("%d", num);
    return 0;
}