#include <iostream>
using namespace std;

//deklarasi class BangunDatar
class BangunDatar;

class PersegiPanjang{
    public:
        void inputData(BangunDatar &bd);
        void outputData(BangunDatar &bd);
};

class BangunDatar{
    private:
        float panjang;
        float lebar;
        float hitungLuas(){
            return 2 * (panjang + lebar);
        };
        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };

    public:
        //untuk mengakses panjang dan lebar
        friend void PersegiPanjang::inputData(BangunDatar &bd);
        //untuk mengakses fungsi
        friend void PersegiPanjang::inputData(BangunDatar &bd);
};

void PersegiPanjang::inputData(BangunDatar &bd){
    cout << "Masukkan Panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan lebar : ";
    cin >> bd.lebar;
}

void PersegiPanjang::outputData(BangunDatar &bd){
    cout << "Luas : " << bd.hitungLuas() << endl;
    cout << "Keliling : " << bd.hitungKeliling
}