#include <iostream>
#include <string>

using namespace std;

int main(){
    string inputTeks;
    
    cout << "masukkan teks: " << endl;
    cin >> inputTeks;
    
    for (int i = 0; i < inputTeks.length(); i++) {
        cout << inputTeks[i] << " ";
    }

    int len = inputTeks.length();
    cout << "\nPanjang: " << len << endl;
    
    int jumlahvokal = 0;
    for (int i = 0; i < inputTeks.length(); i++) {
        char c = tolower(inputTeks[i]);
        if (c == 'a' || c == 'i' || c == 'u' || 
            c == 'e' || c == 'o') {
            jumlahvokal++;
        }
    }
    cout << "jumlah vokal: " << jumlahvokal << endl;
    
    string str = inputTeks;
    int pos = str.find("a");
    if (pos != string::npos) {
        cout << "Ditemukan di posisi: " << pos << endl;
    }
    str.replace(0, 3, "Log");
    cout << str << endl;
    
    return 0;
}