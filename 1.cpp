// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣


#include "stdafx.h"
#include <iostream>
using namespace std;

//����x��n�η�
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