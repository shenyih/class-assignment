// 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class dog{
public:
    int age();
    int weight();
    void setage(int x);
	void setweight(int x);
private:
	int age,weight;
};
int dog::gage(){
return age;
}
int dog::weight(){
return weight;
}
void dog::setage(int x){
age=x;
}
void dog::setweight(int x){
weight=x;
}


int _tmain(int argc, _TCHAR* argv[])
{dog y;
y.setage(10);
y.setweight(5);
cout<<"age:"<<y.age()<<"weight"<<y.weight()<<endl;
system("pause");
return 0;
}

