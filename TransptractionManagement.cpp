#include "Transtractionmanagement.h"
#include "InformationAccount.h"
#include <iostream>
#include <string>
using namespace std;
void TranstractionManagement::Deposit(InformationAccount& acc, float amount) {
	cout << "So tien can nap:\n";
	cin >> amount;
	if (amount > 0) {
		float currentBalance = acc.GetBalance();
		float updateBalance = currentBalance + amount;
		acc.SetBalance(updateBalance);
		cout << "Nap thanh cong: " << amount << endl;
		cout << "So du hien tai: " << updateBalance << endl;
	}
	else {
		cout << "So tien nap khong hop le:" << endl;
	}
}
bool TranstractionManagement::Withdraw(InformationAccount& acc, float amount) {
	cout << "So tien can rut:\n";
	cin >> amount;
	float currentBalance = acc.GetBalance();
	if (amount < currentBalance) {
		float updateBalance = currentBalance - amount;
		acc.SetBalance(updateBalance);
		cout << "Rut thanh cong so tien: " << amount << endl;
		cout << "So du hien tai: " << updateBalance << endl;
		return true;
	}
	else {
		cout << "So du tai khoan khong du!" << endl;
		return false;
	}
}
bool TranstractionManagement::Transport(InformationAccount& acc, vector<InformationAccount>& ListAcc, float amount) {
	string number;
	cout << "So tai khoan nhan" << endl;
	cin >> number;
	int person = -1;
	for (int i = 0; i < ListAcc.size(); i++) {
		if (ListAcc[i].GetNumberAccount() == number) {
			cout << "Ten nguoi thu huong" << endl;
			cout << ListAcc[i].GetName() << endl;
			person = i;
			break;
		}
	}
	if (person == -1) {
		cout << "Tai khoan khong hop le\n";
		return false;
	}
	if (acc.GetNumberAccount() == ListAcc[person].GetNumberAccount()) {
		cout << "Khong the chuyen cho chinh minh\n";
		return false;
	}
	//TRỪ TIỀN NGƯỜI GỬI VÀ CÔNG TIỀN NGƯỜI NHẬN
	float currentBalance = acc.GetBalance();
	cout << "So tien can chuyen" << endl;
	cin >> amount;
	if (currentBalance >= amount) {
		float updateBalance = currentBalance - amount;
		acc.SetBalance(updateBalance);
		float currentreciverBalance = ListAcc[person].GetBalance();
		float updatereciverBalance = currentreciverBalance + amount;
		ListAcc[person].SetBalance(updatereciverBalance);
		cout << "Chuyen tien thanh cong\n";
		return true;
	}
	else {
		cout << "So du khong du" << endl;
		return false;
	}
}