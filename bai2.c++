#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int soChiaHetCho3(const vector<int>& arr) {
    int maxNumber = INT_MIN;
    for (int num : arr) {
        if (num % 3 == 0 && num > maxNumber) {
            maxNumber = num;
        }
    }
    return maxNumber;
}

int main() {
    int n;
    while (n) {
        cout << "Nhap so phan tu mang n: ";
        if (n>0) {
            cin >> n;
        } else {
            cout << "Nhap lai: "
        }
    }
    
    vector<int> arr(n);
    cout << "Nhap cac phan tu cua mang n: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = soChiaHetCho3(arr);
    if (result == INT_MIN) {
        cout << "Khong co so nao trong mang chi het cho 3!" << endl;
    } else {
        cout << "So lon nhat trong mang chia het cho 3 la: " << result << endl;
    }

    return 0;
}
