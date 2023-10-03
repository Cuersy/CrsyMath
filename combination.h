#pragma once
#include<iostream>
#include<string>
#include "permutation.h"
#include "factorial.h"
#include<nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;
#define ll long long
#define ld long double
class combination {
private:
	int uncalculated_n;
	int uncalculated_r;
	bool isset = false;
	int calculated;
public:
	bool calculateAndSetCombination(const int n, const int r){
		try{
			Factorial __f;
			permutation __p;
			__p.calculateAndSetPermutation(n, r);
			__f.calculateAndSetFactorial(r);
			this->calculated = int(__p.getPermutation()["calculated"]) / int(__f.getFactorial()["calculated"]);
			this->uncalculated_n = n;
			this->uncalculated_r = r;
			this->isset = true;
			return true;
		}
		catch (string error) {
			return false;
		}
	}
	json getCombination() {
		json cll;
		if (this->isset) {
			json _cll;
			_cll["n"] = this->uncalculated_n;
			_cll["r"] = this->uncalculated_r;
			cll["status"] = "success";
			cll["calculated"] = this->calculated;
			cll["uncalculatednums"] = _cll;
			return cll;
		}
		else {
			cll["status"] = "failure";
			return cll;
		}
	}
};
