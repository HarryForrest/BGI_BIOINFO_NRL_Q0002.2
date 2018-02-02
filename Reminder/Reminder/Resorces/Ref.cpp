/*
 * Ref.cpp
 *
 *  Created on: 2017Äê12ÔÂ18ÈÕ
 *      Author: Administrator
 */
#include <iostream>
using namespace std;

int ma(){
	int ben = 0;
	int &ben_ref = ben;
	int &ben_2ref = ben_ref;
	cout<<ben_2ref<<endl;
	cout<<ben_ref<<endl;
	return 0;
}


