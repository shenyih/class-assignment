// ConsoleApplication7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void ss(int x);
int main()
{
	ss(3);
	getchar();
	return 0;
}
void ss(int x){
	for (int y = 1; y <= x; y++){
	
		cout << "*";
	
	}
	cout << endl;

	if (x > 1){
		ss(x - 1);
	
	
	}
	for (int y = 1; y <= x; y++){

		cout << "*";

	}
	cout << endl;

}


