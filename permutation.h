#pragma once
// P ( n,r ) = ( {n} n-r ) = n! / ( n-r ) !
#include<iostream>
#include<nlohmann/json.hpp>
#include "factorial.h"
#include<cmath>
#define ll long long
#define ld long double
#define arr array
using namespace std;
class permutation {
private:
	ld calculated;
	int uncalculated_n, uncalculated_r;
	bool isset = false;
public:
	bool calculateAndSetPermutation(int n, int r){
		try {
			/*
			Factorial n_f;
			Factorial n_r;
			Factorial n_f_minus_n_r;
			n_f.setandCalculateFactorial(n);
			n_r.setandCalculateFactorial(r);
			ld n_f_calc = json(n_f.getFactorial())["calculated"];
			ld r_f_calc = json(n_r.getFactorial())["calculated"];
			n_f_minus_n_r.setandCalculateFactorial(n_f_calc - r_f_calc);
			ld n_f_minus_n_r_calc = json(n_f_minus_n_r.getFactorial())["calculated"];
			ld calc = n_f_calc / n_f_minus_n_r_calc;
			this->calculated = calc;
			this->uncalculated_n = n;
			this->uncalculated_r = r;
			this->isset = true;
			return true;
			*/
			ld sum = 1;
			for (int i = 0; i < r; i++) {
				sum *= n - i;
			}
			this->isset = true;
			this->calculated = sum;
			this->uncalculated_n = n;
			this->uncalculated_r = r;
		}
		catch (string error) { return false; }
	}
	json getPermutation() {
		json callback;
		if (bool(this->isset)) {
			json __c;
			__c["n"] = this->uncalculated_n;
			__c["r"] = this->uncalculated_r;
			callback["calculated"] = this->calculated;
			callback["unCalculatedNums"] = __c;
			return callback;
		}
		else {
			callback["success"] = false;
			callback["errorcode"] = -1;
			callback["error"] = "Permutation is not setted.";
			return callback;
		}
	}
};
