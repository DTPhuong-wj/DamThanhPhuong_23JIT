#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void soNguyenTo(int N) {
    cout << "Cac so nguyen to nho hon " << N << " la: ";
    for (int i = 2; i < N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        } else if (i<=2) {
            cout << "Khong co so nguyen to";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so n:";
    cin >> n;
    soNguyenTo(n);
    return 0;
}
