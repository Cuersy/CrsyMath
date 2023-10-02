#pragma once
#include<cmath>
#include<iostream>
#include<nlohmann/json.hpp>
using json = nlohmann::json;
#define ll long long
#define ld long double
class faktoryel {
private:
	ld calculated = 0;
	int uncalculated = 0;
public:
	bool setandCalculateFaktoryel(int sayi) {
		try {
			if (sayi > 20) {
				ld a = 1;
				for (int i = 1; i <= sayi; i++){
					a *= i;
				}
				this->calculated = a;
				this->uncalculated = sayi;
				return true;

			}
			if (sayi == 1 || sayi == 0) return 1;
			ll son = 1;
			for (int i = sayi; i > 0; i--) {
				son *= i;
			}
			this->calculated = son;
			this->uncalculated = sayi;
			return true;
		}
		catch (std::string error) {
			return false;
		}
	}
	json getFaktoryel() {
		json callback;
		if (isinf(this->calculated) || int(this->calculated) == 0) {
			callback["status"] = "failure";
			callback["errorcode"] = -1;
			callback["message"] = "The faktoryel is NULL";
			return callback;
		}
		else {
			callback["status"] = "success";
			callback["calculated"] = this->calculated;
			callback["uncalculated"] = this->uncalculated;
			return callback;
		}
	}
};
