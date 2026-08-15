#pragma once
#include "InformationAccount.h"
#include <vector>
#include <string>
using namespace std;
class TranstractionManagement {
private:
	vector<string>HistoryTransport;
public:
	void Deposit(InformationAccount& acc, float amount);
	bool Withdraw(InformationAccount& acc, float amount);
	bool Transport(InformationAccount& acc,vector<InformationAccount>& ListAcc, float amount);
};