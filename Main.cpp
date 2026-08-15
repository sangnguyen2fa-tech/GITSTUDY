#include <iostream>
#include "InformationAccount.h"
#include "Transtractionmanagement.h"
#include "SecurityAccount.h"
#include <vector>
#include <string>
using namespace std;  
int main() {
    vector<InformationAccount>ListAccount;
    ListAccount.push_back(InformationAccount("0986700813", "986700813", "Nguyen Trong Sang", 500.0f, "14082007"));
    ListAccount.push_back(InformationAccount("0852691651", "852691651", "Nguyen Thi Quynh Mai", 1000.0f, "21072007"));
    ListAccount.push_back(InformationAccount("0933333333", "933333333", "Nguyen Thi Xuan", 10000.0f, "26051979"));
    TranstractionManagement trans;
    SecurityAccount Ses;
    string pin, phone;
    cout << "Nhap so dien thoai\n";
    cin >> phone;
    cout << "Nhap ma pin\n";
    cin >> pin;
    InformationAccount* currentAccount = Ses.LoginCheck(ListAccount, phone, pin);
    if (currentAccount != nullptr) {
        int choice;
        cout << currentAccount->ToString();
        do {
            cout << "\n================ MENU ================\n";
            cout << "1. Nap tien vao tai khoan\n";
            cout << "2. Rut tien khoi tai khoan\n";
            cout << "3. Chuyen tien\n";
            cout << "4. Thoat\n";
            cout << "Chon chuc nang (1-4): ";
            cin >> choice;
            cout << "--------------------------------------\n";
            switch (choice) {
            case 1:
                cout << "Chuc nang Nap tien\n";
                trans.Deposit(*currentAccount, 0);
                cout << currentAccount->ToString();
                break;
            case 2:
                cout << "Chuc nang Rut tien\n";
                trans.Withdraw(*currentAccount, 0);
                cout << currentAccount->ToString();
                break;
            case 3:
                trans.Transport(*currentAccount, ListAccount, 0);
                cout << currentAccount->ToString();
                break;
            case 4:
                cout << "Tam biet!\n";
                break;
            default:
                cout << "Lua chon khong hop le! Vui long chon lai.\n";
            }
        } while (choice != 4);

        return 0;
    }
}

