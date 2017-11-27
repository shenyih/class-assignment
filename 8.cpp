// 2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class sss {
public:
void dot1(int x,int y);
void dot2(int x,int y);
int area();
private:
int l1,l2,r1,r2;
};
void sss::dot1(int x,int y){
    l1=x;
	r1=y;
}
void sss::dot2(int x,int y){
    l2=x;
	r2=y;
}
int sss::area(){
int s=(l1-l2)*(r1-r2);
return s;
}




int _tmain(int argc, _TCHAR* argv[])
{sss z;
z.dot1(2,3);
z.dot2(5,6);
cout<<"area"<<z.area();
	return 0;
}

