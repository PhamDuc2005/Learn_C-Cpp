#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);
    printf("tich: %d\n", a * b);
    printf("tong: %d\n", a + b);
    printf("hieu: %d\n", a - b);
    if(b == 0){
        printf("Khong the chia!\n");
    }else
        printf("Thuong: %.2f\n", (float)a / b);
    system("pause");
}