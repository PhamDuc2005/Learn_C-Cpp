#include <iostream>

using namespace std;
void HoanVi(int *a, int *b){
    int hoan;
    hoan = *a;
    *a = *b;
    *b = hoan;
} 
int main(){
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    HoanVi(&a, &b);
    cout << a << " " << b << endl;
    system("pause");
    return 0;
}