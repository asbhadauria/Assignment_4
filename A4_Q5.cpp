#include <iostream>
using namespace std;

bool armstrong(int num){
	int dummy=num,rem,mnum=0;
	while(num=0){
		rem=num%10;
		mnum+=(rem*rem*rem);
		num/=10;
	}
	if(dummy==mnum)
		return true;
	else
		return false;
}

bool perfect(int num){
	int sum=0;
	for(int i=1;i<num;i++)
		if(num%i==0)
			sum+=i;
		if(sum==num)
			return true;
		else
			return false;
}

bool prime(int num){
	int cntr=0;
	for(int i=1;i<=num;i++)
		if(num%i==0)
			cntr++;
		if(cntr==2)
			return true;
		else
			return false;
}


int main() {
	int num;
	cout<<"Enter your Number";
	cin>>num;
	bool flag1,flag2,flag3;
	flag1=armstrong(num);
	flag2=perfect(num);
	flag3=prime(num);
	if(flag1)
		cout<<"Entered number is Armstrong"<<endl;
	else 
		cout<<"Entered number is not Armstrong"<<endl;
	if(flag2)
		cout<<"Entered number is Perfect"<<endl;
	else 
		cout<<"Entered number is not Perfect"<<endl;
	if(flag3)
		cout<<"Entered number is Prime"<<endl;
	else 
		cout<<"Entered number is not Prime"<<endl;	
	return 0;
}