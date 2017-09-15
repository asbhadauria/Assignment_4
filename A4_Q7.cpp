#include <iostream>
using namespace std;

bool strong_check(int num){
	int fact=1,rem=0,sum=0,dummy=num;
	while(num>0){
		rem=num%10;
		for(int i=1;i<=rem;i++)
			fact*=i;
		sum+=fact;	
		num/=10;
		fact=1;
	}
		if(sum==dummy)
			return true;
		else
			return false;
}
int main() {
	int lb,ub;
	cout<<"Enter your lower bound:";
	cin>>lb;
	cout<<"Enter your upper bound";
	cin>>ub;
	for(int i=lb;i<=ub;i++)
		if(strong_check(i))
			cout<<i<<" is strong"<<endl;
	return 0;
}