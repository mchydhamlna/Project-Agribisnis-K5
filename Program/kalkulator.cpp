#include <iostream>

using namespace std;
int main()
{    double num1, num2;
    char operation;

    cout << "===== Program Kalkulator =====\n";
    cout << "Masukan angka pertama: ";
    cin >> num1;

    cout << "Masukan angka kedua: ";
    cin >> num2;

    cout << "===== Pilihan Operasi =====\n";
    cout << "1. Penjumlahan\n" ;
    cout << "2. Pengurangan\n" ;
    cout << "3. Perkalian\n" ;
    cout << "4. Pembagian\n" ;
    cout << "Masukan operasi bilangan: \n";
    cin >> operation;

    switch (operation)
    {
        case '1':
            cout << "Hasilnya adalah: " << num1 + num2 << endl;
            break;
        case '2':
            cout << "Hasilnya adalah: " << num1 - num2 << endl;
            break;
        case '3':
            cout << "Hasilnya adalah: " << num1 * num2 << endl;
            break;
        case '4':
            if (num2 == 0)
            {
                cout << "Error: angka 0 tidak diizinkan." << endl;
            }
            else
            {
                cout << "Hasilnya adalah: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Error: Operasi tidak diketahui." << endl;
            break;
    }

    return 0;
}
