#include <iostream>
using namespace std; 

int arr[20]; // membuat array dengan panjang data 20
int n; // membuat variable inputan n

void input()
{ // procedure input 
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : "; // membuat inputan jumlah array
        cin >> n; // memanggil variable inputan n 
    }
}