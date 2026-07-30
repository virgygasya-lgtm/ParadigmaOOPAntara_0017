#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tahunProduksi;

    void inputData(){
        cout << "====================Input Data====================" << endl;

        cout << "Masukkan Nama Barang : ";
        cin >> nama;

        cout << "Masukkan Jumlah Barang : ";
        cin >> jumlah;

        cout << "Masukkan Kategori Barang : ";
        cin >> kategori;

        cout << "Masukkan Tanggal Produksi Barang : ";
        cin >> tahunProduksi;
    }

   void tampilSpek(){
    cout << "====================Tampil Data====================" << endl;
    cout << "Nama Barang : " << nama << endl;
    cout << "Jumlah Barang : " << jumlah << endl;
    cout << "Kategori Barang : " << kategori << endl;
    cout << "Tanggal Produksi : " << tahunProduksi << endl;
    cout << "==================================================" << endl;
}
};

int main(){

    Barang elektronik;
    Barang nonElectronik;
    elektronik.inputData();
    elektronik.tampilSpek();