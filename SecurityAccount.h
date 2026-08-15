#pragma once
#include<vector>
#include <string>
#include "InformationAccount.h"
class SecurityAccount {
public:
   InformationAccount* LoginCheck(vector<InformationAccount>& ListAcc, string Inputphone, string InputPin);
	void Resetpin();
};