// 质数.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

bool fun(int x){
bool y;
y=(x%3!=0&&x%5!=0&&x%7!=0);

return y;



}



int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	 cin>>x;
	if(fun(x)){
	cout<<"真";
	
	
	}
	else
	cout<<"假";
	system("pause");
	return 0;
}

