#include <iostream>
using namespace std;

float LuasPersegiPanjang(float a, float b){
  return a * b;
}

float LuasSegitiga(float a, float b){
  return 0.5 * a * b;
}

int main(){
  int pilihan;
  float panjang, lebar;
  float alas, tinggi;


    cout << "Menu\n";
    cout << "1. Luas Persegi Panjang" << endl;
    cout << "2. Luas Persegi Panjang" << endl;
    cout << "3. Keluar" << endl;

    cout << "Pilihan (1/2/3) = ";
    cin >> pilihan;

    switch(pilihan){
    case 1:
      cout << "Hitung luas persegi panjang" << endl;
      cout << "Masukkan panjang = ";
      cin >> panjang;
      cout << "Masukkan lebar = ";
      cin >> lebar;
      cout << "Luas Persegi Panjang = " << LuasPersegiPanjang(panjang, lebar) << endl;
      break;
    case 2:
      cout << "Hitung luas Segitiga" << endl;
      cout << "Masukkan alas = ";
      cin >> alas;
      cout << "Masukkan tinggi = ";
      cin >> tinggi;
      cout << "Luas Segitiga = " <<LuasSegitiga(alas, tinggi) << endl;
      break;
    case 3:
      break;
    default:
      cout << "Wrong Choice!!!!!!";
    }

}