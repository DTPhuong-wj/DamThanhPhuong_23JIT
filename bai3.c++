#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct SinhVien {
    string ten;
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTB;
};

void nhapThongTin(vector<SinhVien>& ds, int n) {
    for (int i = 0; i < n; i++) {
        SinhVien sv;
        cout << "Nhap thong tin sinh vienvien " << i + 1 << ":" << endl;
        cout << "Ten: ";
        cin.ignore();
        getline(cin, sv.ten);
        cout << "Diem toan: ";
        cin >> sv.diemToan;
        cout << "Diem ly: ";
        cin >> sv.diemLy;
        cout << "Diem hoa: ";
        cin >> sv.diemHoa;
  
        sv.diemTB = (sv.diemToan + sv.diemLy + sv.diemHoa) / 3.0;
        ds.push_back(sv);
    }
}


void inSinhVienDiemTB8(const vector<SinhVien>& ds) {
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:" << endl;
    for (const auto& sv : ds) {
        if (sv.diemTB >= 8) {
            cout << "Ten: " << sv.ten << endl;
            cout << "Diem toan: " << sv.diemToan << ", Diem ly: " << sv.diemLy
                 << ",Diem hoa: " << sv.diemHoa << endl;
            cout << "Diem trung binhbinh: " << sv.diemTB << endl;
        }
    }
}

int main() {
    int n;
    while(n) {
        if(n>0) {
            cout << "Nhap so luong sinh vien: ";
            cin >> n;
        } elsse {
            cout << "Nhap lai (la 1 so nguyen)"
        }
    }
    
    vector<SinhVien> ds;
    nhapThongTin(ds, n);
    inSinhVienDiemTB8(ds);

    return 0;
}
