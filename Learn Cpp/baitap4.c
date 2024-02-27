#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    do{
        printf("Nhap n(co 3 chu so): ");
        scanf("%d", &n);
    }while(n < 100 || n > 999);
    int n1 = n / 100;
    int n2 = (n % 100) / 10;
    int n3 = (n % 100) % 10;
    switch(n1){
        case 1:
            printf("mot tram ");
            break;
        case 2: 
            printf("hai tram ");
            break;
        case 3:
            printf("ba tram ");
            break;
        case 4:
            printf("bon tram ");
            break;
        case 5:
            printf("nam tram ");
            break;
        case 6:
            printf("sau tram ");
            break;
        case 7:
            printf("bay tram ");
            break;
        case 8:
            printf("tam tram ");
            break;
        case 9:
            printf("chin tram ");
            break;
    }
    switch(n2){
        case 1:
            printf("muoi ");
            break;
        case 2: 
            printf("hai muoi ");
            break;
        case 3:
            printf("ba muoi ");
            break;
        case 4:
            printf("bon muoi ");
            break;
        case 5:
            printf("nam muoi ");
            break;
        case 6:
            printf("sau muoi ");
            break;
        case 7:
            printf("bay muoi ");
            break;
        case 8:
            printf("tam muoi ");
            break;
        case 9:
            printf("chin muoi ");
            break;
        case 0:
             if(n2 == 0 && n3 == 0){
                break;
             }
             else{
                printf("le ");
             }
            break;
    }
    switch(n3){
        case 1:
            if(n2 >= 2){
                printf("mots\n");
            }
            else{
                printf("mot\n");
            }
            break;
        case 2: 
            printf("hai\n");
            break;
        case 3:
            printf("ba\n");
            break;
        case 4:
            printf("bon\n");
            break;
        case 5:
            if( n2 == 0){
                printf("nam\n");
            }else{
                printf("lam\n");
            }
            break;
        case 6:
            printf("sau\n");
            break;
        case 7:
            printf("bay\n");
            break;
        case 8:
            printf("tam\n");
            break;
        case 9:
            printf("chin\n");
            break;
        case 0:
             if(n2 == 0 && n3 == 0){
                break;
             }
            break;
    }
    system("pause");
}