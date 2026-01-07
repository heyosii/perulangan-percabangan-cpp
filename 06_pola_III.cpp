#include <iostream>
using namespace std;

int main() {
    int N = 10; // Ukuran pola (jumlah baris)

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i || j == N - 1 - i || (i == 3 && (j == 3 ))) {
                cout << "*"; // Mencetak bintang
            } else {
                cout << "."; // Mencetak titik
            }
        }
        cout << endl; // Pindah ke baris berikutnya
    }
    return 0;
}
