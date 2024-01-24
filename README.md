## PROJECT AGRIBISNIS KELOMPOK 5
## Membuat Program Kalkulator
Anggota :
Moch Yudha Maulana - 2C1230001,
Fanita Anggraeni - 2C1230003

## Flowchart

<img width="374" alt="Screenshot 2024-01-24 231925" src="https://github.com/mchydhamlna/Project-Agribisnis-K5/assets/144500877/5c6ec14a-bb78-45dc-a12f-096d4bc69b2a">

## Pseudocode

<img width="232" alt="Screenshot 2024-01-24 232905" src="https://github.com/mchydhamlna/Project-Agribisnis-K5/assets/144500877/6dc0f24f-3fe5-41ee-963e-1c43f3430358">

## Program
```c++
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
```
## Capture hasil running program

<img width="209" alt="Screenshot 2024-01-24 233242" src="https://github.com/mchydhamlna/Project-Agribisnis-K5/assets/144500877/cf6d593d-9994-4971-89aa-f5749b4ea608">





