/*
 * functions.cpp
 *
 *  Created on: 2017年12月25日
 *      Author: Administrator
 */
#include <iostream>
#include "..\Header\functions.h"
#include <string>
#include <vector>

using namespace std;
vector<int> iVector(100);

bool Functions::is_reference_can_refer_scalar() {
	if (true) {
		return true;
	} else
		return false;
}

void Functions::input_of_string() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;
}

void Functions::two_string_value_can_not_add() {
	string t = " the";
	string s = "Hello" + t + " World";
	char c = 'c';
	//t = t + c;
	t = c + t;
	s = c + '?';
	cout << t << endl;
	cout << s << endl;
}

void Functions::use_of_vectors() {
	vector<string> vs;
	string temp;
//	while (cin >> temp) {
//		vs.push_back(temp);
//	}
//	for(auto s:vs){
//		cout<< s <<endl;
//	}
//	vs[vs.size()-1] = "Hello";
//	cout<<vs[vs.size()-1]<<endl;
	cin >> temp;
	vs[0] = temp;
}

void Functions::use_of_iterators(){
	vector<int> vi = {1,5,9,11,12,45,56,75,76,86,87,89,97,100,101,106,152,154,167,168,566,588,687,981,1000};
	auto beg = vi.begin();
	auto end = vi.end();
	i = 12;
	decltype(beg) mid = beg + (end-beg)/2;
	while (mid != end && *mid != i){
		if(*mid > i){
			end = mid;
		}else{
			beg = mid;
		}
		mid = beg + (end-beg)/2;
	}
	cout<<*mid<<endl;
}

void Functions::xingcan_and_shican(int i,int &j){
	i = 10;
	j = 11;
}

void Functions::some_iterater_operation(){
	const vector<int>::iterator first;
	//first = find(iVector.begin(),iVector.end(),0);
}

void Functions::wchar_tAndChar(){
	//wchar_t* a = L"你好世界";
	//char *b = "Hello world";
	char a = 'a';
	string b = "a";
	string i = to_string(a);
	while(to_string(a) == b){
		//*************
	}
}
