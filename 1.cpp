// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。


#include "stdafx.h"
#include <iostream>
using namespace std;

//计算x的n次方
double power(double x, int n);
int main(){
	cout << "5 to the power is" << power(5, 2);
}

double power(double x, int n){
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}