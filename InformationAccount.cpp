#include "InformationAccount.h"
#include<iostream>
#include<string>
InformationAccount::InformationAccount() {
	Balance = 0.0f;
}
InformationAccount::InformationAccount(string SDT, string NA, string NAME, float Balance,string pin){
	this->MobileNumber = SDT;
	this->NumnberAccount = NA;
	this->NameAcount = NAME;
	this->Balance = Balance;
	this->pin = pin;
}
string InformationAccount::ToString() {
	return "NAME ACCOUNT: " + MobileNumber + "\n" +
		"NUMBER ACCOUNT: " + NumnberAccount + "\n" +
		"BALANCE: " + to_string(Balance);
}

string InformationAccount::GetNumberAccount() {
	return NumnberAccount;
}
string InformationAccount::SDT() {
	return MobileNumber;
}
string InformationAccount::GetName() {
	return NameAcount;
}
float InformationAccount::GetBalance() {
	return Balance;
}
void InformationAccount::SetBalance(float NewBalance) {
	this->Balance = NewBalance;
}
string InformationAccount::GetPin() {
	return pin;
}
void InformationAccount::SetPin(string NewPin) {
	this->pin = NewPin;
}