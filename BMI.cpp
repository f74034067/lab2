#include"BMI.h"
#include<iostream>
#include<string>

void BMI::call(float height,float mass)
{
	bmi_height=height;
	bmi_mass=mass;
}
float BMI::calculate()
{
	if(bmi_height!=0&&bmi_mass!=0)
	{
	answer=bmi_mass/((bmi_height/100)*(bmi_height/100));
	return answer;
	}
	
}
string BMI::tell(float temp_answer)
{

	string a,b,c,d,e,f,g,h;
	if (temp_answer<15) {return a="Very severely underweight";}
	else if (15.0<=temp_answer&&temp_answer<16.0) {return b="Severely underweight";}
	else if (16.0<=temp_answer&&temp_answer<18.5) {return c="Underweight";}
	else if (18.5<=temp_answer&&temp_answer<25.0) {return d="Normal";}
	else if (25.0<=temp_answer&&temp_answer<30.0) {return e="Overweight";}
	else if (30.0<=temp_answer&&temp_answer<35.0) {return f="Obese Class I(M0derately obese)";}
	else if (35.0<=temp_answer&&temp_answer<40.0) {return g="Obese Class II(Severely obese)";}
	else if (temp_answer>=40.0 ){return h="Obese Class III(Very severely obese)";}
	
}
