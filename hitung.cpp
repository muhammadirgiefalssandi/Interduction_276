#include <iostream>

using namespace std;

int main()
{//begin
    //numeric nPanjang, nLebar, nLuas
    float Panjang, Lebar, Luas;
    //display 'Masukan panjangnya = '
    cout << "Masukan panjangny = ";
    //accept nPanjang
    cin >> Panjang;
    //display 'Masukkan Lebarnya = '
    cout << "Masukkan Lebarnya = ";
    //accept nLebar
    cin >> Lebar;
    //compute nLuas = nPanjang * nLebar
    Luas = Panjang * Lebar;
    //display 'Luas persegi panjang = ' + nLuas
    cout << "Luas persegi pajang = " << Luas;
}//end