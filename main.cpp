#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"BMI.h"
using namespace std;

int main()
{
	float height,mass;
	ifstream input("file.in",ios::in);
	BMI bmi;
	if(!input)
	{
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	ofstream output("file.out",ios::out);
	while(input>>height>>mass)
	{
		if(height==0)
			break;
		bmi.call(height,mass);
		output<<bmi.calculate()<<"\t"<<bmi.tell(bmi.calculate())<<endl;
	}
	return 0;
}

