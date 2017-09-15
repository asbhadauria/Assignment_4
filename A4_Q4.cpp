#include <iostream>
using namespace std;

bool even_odd(int num){
	bool flag;
	if(num%2==0)
		flag=true;
	else 
		flag=false;
}

int main() {
	int num;
	cout<<"Enter your Number";
	cin>>num;
	bool flag=even_odd(num);
	if(flag)
		cout<<"Your entered number is even";
	else 
		cout<<"Your entered number is odd";
	return 0;
}
