#include<iostream>
using namespace std;
class BMI
{
	public:
		void call(float,float);
		float calculate();
		string tell(float);
	private:
		float bmi_height, bmi_mass;
		float answer;			
};
