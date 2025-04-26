#include <iostream>
#include <vector>
#include <set> 
using namespace std;


int demSoLuong(const vector<int>& arr) {
    set<int> distinctValues; 
    for (int num : arr) {
        distinctValues.insert(num); 
    }
    return distinctValues.size();
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

    int distinctCount = demSoLuong(arr);
    cout << "So luong cac gia tri phan biet trong mang la: " << distinctCount << endl;

    return 0;
}
