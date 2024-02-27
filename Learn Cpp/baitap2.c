#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Nhap a, b");
    scanf("%d%d", &a, &b);
    int c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d", a, b);
    system("pause");
}