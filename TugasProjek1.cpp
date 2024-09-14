#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char tipeRumah, jenisPembayaran;
    int hargaTunai, angsuranPerBulan;

    // Input tipe rumah dan jenis pembayaran
    cout << "Masukkan Tipe Rumah (A/B/C/D): ";
    cin >> tipeRumah;
    cout << "Masukkan Jenis Pembayaran (T = Tunai, K = Kredit): ";
    cin >> jenisPembayaran;

    // Tentukan harga sesuai tipe rumah
    if (tipeRumah == 'A' || tipeRumah == 'a') {
        hargaTunai = 50000000;
        angsuranPerBulan = 500000;
    } else if (tipeRumah == 'B') {
        hargaTunai = 75000000;
        angsuranPerBulan = 750000;
    } else if (tipeRumah == 'C') {
        hargaTunai = 85000000;
        angsuranPerBulan = 850000;
    } else if (tipeRumah == 'D') {
        hargaTunai = 100000000;
        angsuranPerBulan = 1000000;
    } else {
        cout << "Tipe rumah tidak valid." << endl;
       
        return 1;
     }
        
}
