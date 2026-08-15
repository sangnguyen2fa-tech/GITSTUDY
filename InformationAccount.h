#pragma once
#include <string>
#include<vector>
using namespace std;
class InformationAccount {
private:
	string MobileNumber;
	string NumnberAccount;
	string NameAcount;
	float Balance;
	string pin;
public:
	InformationAccount();
	InformationAccount(string Sdt, string NumnberAcount, string NameAcount, float Balance, string pin);
	string ToString();
	string SDT();
	string GetNumberAccount();
	string GetName();
	float GetBalance();
	void SetBalance(float NewBalance);
	string GetPin();
	void SetPin(string NewPin);
};
