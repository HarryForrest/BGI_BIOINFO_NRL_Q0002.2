/*
 * pptr.cpp
 *
 *  Created on: 2017��12��21��
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


