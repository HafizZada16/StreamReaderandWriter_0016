#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    ofstream outfile;
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis file, \'q\' untuk keluar" << endl;
    
}