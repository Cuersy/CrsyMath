#pragma once
#ifndef CRSY_BTSS
#define CRSY_BTSS
#include<iostream>
#include<vector>
#include<nlohmann/json.hpp>
using namespace std;
using json = nlohmann::json;
json big_to_small(vector<int> intArr) {
	json sonArr;
	for (int i = 0; i < 5; i++) {
		int j;
		cin >> j;
		intArr.push_back(j);
	}
	for (int i : intArr) {
		int cnt1 = 0;
		for (int j = 0; j < 5; j++)
		{
			if (intArr[j] < i)
				cnt1++;

		}
		sonArr[cnt1] = i;
	}
	return sonArr;
}

json small_to_big(vector<int> intArr) {
	json sonArr;
	for (int i = 0; i < 5; i++) {
		int j;
		cin >> j;
		intArr.push_back(j);
	}
	for (int i : intArr) {
		int cnt1 = 0;
		for (int j = 0; j < 5; j++)
		{
			if (intArr[j] > i)
				cnt1++;

		}
		sonArr[cnt1] = i;
	}
	return sonArr;
}
#endif
