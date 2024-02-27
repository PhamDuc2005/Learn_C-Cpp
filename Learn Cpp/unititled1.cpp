#include <iostream>

using namespace std;

void Nhap(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

void Xuat(int a[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void TichHangSo(int a[][100], int n, int m, int k){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] *= k;
        }
    }
    Xuat(a, n, m);
} 
int main() {
    int a[100][100], n, m, k;
    cout << "Nhap so hang ma tran: ";
    cin >> n;
    cout << "Nhap so cot ma tran: ";
    cin >> m;
    Nhap(a, n, m);
    cout << endl;
    Xuat(a, n, m);
    cout << "Nhap so nhan vao ma tran: "; cin >> k;
    TichHangSo(a, n, m, k);
    system("pause");
    return 0;
}
