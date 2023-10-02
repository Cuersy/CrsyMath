#include <iostream>
#include<cmath>
#include<string>
#include<vector>
#include<nlohmann/json.hpp>
#include "equation.h"
#include "faktoryel.h"
#include "permutation.h"
using json = nlohmann::json;
using namespace std;
#define ll long long
#define ld long double
int main() {
	/*
	faktoryel a;
	bool __A = a.setandCalculateFaktoryel(20) ? true : false;
	if (!__A) { cout << "error" << endl; return 1; }
	json b = a.getFaktoryel();
	int automated = b["status"] == "success" ? b["calculated"] : b["errorcode"];
	cout << automated << endl;
	ll x= 1;
	for (int i = 20; i > 0; i--) {
		x *=i;
	}
	cout << x << endl;
	string x;
	ll y;
	for (int i = 1; i < 10; i++) x += to_string(i);
	y = stoi(x);
	cout << y-2 << endl;
	ll sum = 0;
	for (int i = 0; i < 100; i++) {
		if (i%5==0) {
			sum++;
		}
	}
	cout << sum << endl;
	faktoryel a;
	bool ab =  a.setandCalculateFaktoryel(100);
	if (!ab) return 1;
	cout << a.getFaktoryel() << endl;
	
	permutation a;
	bool __A = a.calculateAndSetPermutation(6, 3);
	if (__A) cout << a.getPermutation() << endl;
	else
		cout << "Error Occured, can't calculated.";
	*/
	return 1;
}
