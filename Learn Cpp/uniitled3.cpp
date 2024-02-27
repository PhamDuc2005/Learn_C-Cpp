#include<iostream>

using namespace std;

void Nhap(int a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void Xuat(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int Max(int a[], int n){
    int max = a[0];
    for(int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int a[100], n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    cout << "Nhap phan tu: " << endl;
    Nhap(a, n);
    cout << "Phan tu da nhap la: " << endl;
    Xuat(a, n);
    cout << endl;
    cout << "So lon nhat cua mang la: " << Max(a, n) << endl;
    system("pause");
    return 0;
}