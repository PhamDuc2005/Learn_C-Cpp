#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Nhap n(co 5 chu so): ");
    scanf("%d", &n);
    n = (n % 10000) / 10;
    printf("%d\n", n);
    system("pause");
}

