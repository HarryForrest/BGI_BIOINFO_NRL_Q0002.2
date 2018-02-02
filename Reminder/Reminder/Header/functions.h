#ifndef FUNCTIONS
#define FUNCTIONS
#include <iostream>
#include <string>

class Functions{
private:
	int i,j,k;
	float f1,f2,f3;
	double d1,d2,d3;
	bool bl;
	std::string str;
public:
	bool is_reference_can_refer_scalar();
	void input_of_string();
	void two_string_value_can_not_add();
	void use_of_vectors();
	void use_of_iterators();
	void xingcan_and_shican(int i,int &j);
	void some_iterater_operation();
	void wchar_tAndChar();
};

#endif
