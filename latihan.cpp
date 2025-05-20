//Buatlah program c++ dengan class barang yang memiliki atribut: namaBarang,
//kodeBarang
//program memiliki constructor berparameter untuk mengisi
//nilai namaBarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;

class barang {
public:
    // Constructor dengan parameter
    barang(int namaBarang, string kodeBarang);
};

// Definisi constructor dengan parameter
barang::barang(int kodeBarang, string namaBarang) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NamaBarang  : " << namaBarang << endl;
    cout << "KodeBarang  : " << kodeBarang << endl;
}

int main() {
    // Memanggil constructor dengan parameter
    barang brg(5748699, "Laptop");
    return 0;
}