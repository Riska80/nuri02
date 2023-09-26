#include <iostream>
using namespace std;
int main() {
    int  harga_barang, total = 0;
    char lanjut;
    cout << "=== Program Kasir ===" << endl;

    do {
        cout << "Masukkan harga barang: $";
        cin >> harga_barang;
        total += harga_barang;
        cout << "Ingin menambah barang lagi? (iya/tidak): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');
    cout << "Total pembelian: $" << total << endl;
    cout << "Terima kasih telah berbelanja!" << endl;

    return 0;
}
