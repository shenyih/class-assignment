// ����.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout<<"��";
	
	
	}
	else
	cout<<"��";
	system("pause");
	return 0;
}

