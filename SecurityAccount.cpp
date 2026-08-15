#include <iostream>
#include <vector>
#include "SecurityAccount.h"
using namespace std;
InformationAccount* SecurityAccount::LoginCheck(vector<InformationAccount>& ListAcc, string InputPhone, string InputPin) {
	for (int i = 0; 1 < ListAcc.size(); i++) {
		if (ListAcc[i].SDT() == InputPhone && ListAcc[i].GetPin() == InputPin) {
			cout << "Dang nhap thanh cong" << endl;
			return &ListAcc[i];
		}
		else {
			cout << "So dien thoai hoac ma pin khong dung" << endl;
			return nullptr;
		}
	}
}
void SecurityAccount::Resetpin() {

}