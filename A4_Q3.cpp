#include <iostream>
using namespace std;

bool max_min(int num1,int num2){
	bool flag;
	if(num1>num2)
		flag=true;
	else
		flag=false;
	return flag;	
}
int main() {
	int num1,num2;bool flag;
	cout<<"Enter first Number:";
	cin>>num1;
	cout<<"Enter second Number:";
	cin>>num2;
	if(flag){
		cout<<"Max of the 2 nos.:"<<num1<<endl;
		cout<<"Min of the 2 nos.:"<<num2<<endl;
	}
	else{
		cout<<"Max of the 2 nos.:"<<num2<<endl;
		cout<<"Min of the 2 nos.:"<<num1<<endl;
	}
		
	return 0;
}
