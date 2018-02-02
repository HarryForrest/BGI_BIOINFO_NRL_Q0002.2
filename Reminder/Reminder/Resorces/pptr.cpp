/*
 * pptr.cpp
 *
 *  Created on: 2017Äê12ÔÂ21ÈÕ
 *      Author: Administrator
 */
#include <iostream>
using namespace std;

int mai(){
	int i = 1;
	int *pi = &i;
	int **ppi = &pi;
	cout<<i<<endl;
	cout<<pi<<endl;
	cout<<*pi<<endl;
	cout<<ppi<<endl;
	cout<<*ppi<<endl;
	cout<<**ppi<<endl;
	return 0;
}


