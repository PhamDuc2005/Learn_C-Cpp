#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Phan tu thu " << i + 1 << " da nhap la : " << a[i] << endl;
    }
}

int TongHam(int a[], int n)
{
    int Sum = 0;
    for (int i = 0; i < n; i++)
    {
        Sum += a[i];
    }
    return Sum;
}

int TichHam(int a[], int n)
{
    int tich = 1;
    for (int i = 0; i < n; i++)
    {
        tich *= a[i];
    }
    return tich;
}

int Max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int Min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    return min;
}

int Max2(int a[], int n)
{
    int max = Max(a, n);
    int max2 = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < max && max2 < a[i])
        {
            max2 = a[i];
        }
    }
    return max2;
}

int Min2(int a[], int n)
{
    int min = Min(a, n);
    int min2;
    if(a[0] == min){
        min2 = a[1];
    }
    else{
        min2 = a[0];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] != min && min2 > a[i])
        {
            min2 = a[i];
        }
    }
    return min2;
}

void SapXepTang(int a[], int n)
{
    cout << "Mang sau khi sap xep tang dan: " << endl;
    for (int i = 0; i < n; i++) // Điều chỉnh điều kiện vòng lặp
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        cout << a[i] << " ";
    }
    cout << endl;
}

void SapXepGiam(int a[], int n)
{
     cout << "Mang sau khi sap xep giam dan: " << endl;
    for (int i = 0; i < n; i++) // Điều chỉnh điều kiện vòng lặp
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        cout << a[i] << " ";
    }
    cout << endl;
}

void TimVitri(int a[], int n, int x)
{
    cout << "Nhap vi tri can tim: ";
    cin >> x;
    if (x > 0 && x <= n)
    {
        cout << "Gia tri can tim la: " << a[x - 1] << endl;
    }
    else
    {
        cout << "Vi tri khong hop le!" << endl;
    }
}

void ChangeValue(int a[], int n, int x)
{
    int k;
    cout << "Nhap vi tri ban can doi: ";
    cin >> x;
    cout << endl;
    cout << "Nhap gia tri doi: ";
    cin >> k;
    cout << endl;
    if (x > 0 && x <= n)
    {
        a[x - 1] = k;
        cout << "Mang da doi la: ";
        xuat(a, n);
    }
    else
    {
        cout << "Vi tri khong hop le!" << endl;
    }
}

void DaoMang(int a[], int n)
{
    cout << "Mang dao nguoc la: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
}
int DemDuong(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            dem++;
        }
    }
    return dem;
}

int DemAm(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            dem++;
        }
    }
    return dem;
}


int main()
{
    int a[100], n, i, x = 0; // Khởi tạo x = 0
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhap(a, n);
    xuat(a, n);
    cout << "------------------MENU---------------------" << endl;
    cout << "0: Thoat MENU" << endl;
    cout << "1: Tinh tong mang." << endl;
    cout << "2: Tim so lon nhat cua mang." << endl;
    cout << "3: Tim so nho nhat cua mang." << endl;
    cout << "4: Tim so lon thu 2 cua mang." << endl;
    cout << "5: Tim so be thu 2 cua mang." << endl;
    cout << "6: Sap xep mang tang dan." << endl;
    cout << "7: Sap xep mang giam dan." << endl;
    cout << "8: Tinh tich mang." << endl;
    cout << "9: Dem so duong cua mang." << endl;
    cout << "10: Dem so am cua mang." << endl;
    cout << "11: Tim gia tri cua vi tri duoc nhap." << endl;
    cout << "12: Thay doi gia tri tai vi tri duoc nhap." << endl;
    cout << "13: Dao mang." << endl;
    cout << "Nhap lua chon cua ban: ";
    cin >> i;
    switch (i)
    {
    case 0:
        cout << "Ban da thoat MENU!" << endl;
        cout << "HAVE A GOOD DAY!" << endl;
        return EXIT_SUCCESS;
    case 1:
        cout << "Tong mang la : " << TongHam(a, n) << endl;
        break;
    case 2:
        cout << "So lon nhat cua mang la: " << Max(a, n) << endl;
    case 3:
        cout << "So nho nhat cua mang la: " << Min(a, n) << endl;
        break;
    case 4:
        cout << "So lon thu 2 cua mang la: " << Max2(a, n) << endl;
        break;
    case 5:
        cout << "So be thu 2 cua mang la: " << Min2(a, n) << endl;
        break;
    case 6:
        SapXepTang(a, n);
        break;
    case 7:
        SapXepGiam(a, n);
        break;
    case 8:
        cout << "Tich cua mang la: " << TichHam(a, n) << endl;
        break;
    case 9:
        cout << "So so duong cua mang la: " << DemDuong(a, n) << endl;
        break;
    case 10:
        cout << "So so am cua mang la: " << DemAm(a, n) << endl;
        break;
    case 11:
        TimVitri(a, n, x);
        break;
    case 12:
        ChangeValue(a, n, x);
        break;
    case 13:
        DaoMang(a, n);
        break;
    default:
        cout << "Ban nhap sai lua chon!";
    }
    system("pause");
    return 0;
}
