#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

void printFibonacci(int n) {
    if (n <= 0 || n > 30) {
        cout << "Nhap n (1 <= n <= 30)." << endl;
        return;
    }
    cout << "Day Fibonacci tu F(1) đến F(" << n << "): ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap n (1 <= n <= 30): ";
    cin >> n;
    printFibonacci(n);
    return 0;
}
