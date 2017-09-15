#include <iostream>
using namespace std;

float dia_calc(float radi){
	float dia=2*radi;
	return dia;
}

float circum_calc(float radi){
	float circum=2*3.14*radi;
	return circum;
}

float ar_calc(float radi){
	float ar=3.14*radi*radi;
	return ar;
}

int main() {
	float radius,diam,area,circum;
	cout<<"Enter the radius of the circle";
	cin>>radius;
	diam=dia_calc(radius);
	circum=circum_calc(radius);
	area=ar_calc(radius);
	cout<<"Diameter of the circle:"<<diam<<endl;
	cout<<"Circumference of the circle:"<<circum<<endl;
	cout<<"Area of the circle:"<<area<<endl;
	return 0;
}