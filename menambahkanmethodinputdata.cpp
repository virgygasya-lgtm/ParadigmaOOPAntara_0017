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