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
    barang brg1(5748699, "Laptop");
     barang brg2(537939, "PC");
      barang brg3(574842, "Tablet");
    return 0;
}