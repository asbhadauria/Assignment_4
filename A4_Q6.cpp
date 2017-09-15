#include <iostream>
using namespace std;

bool prime_check(int num){
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
	int lb,ub;
	cout<<"Enter your lower bound:";
	cin>>lb;
	cout<<"Enter your upper bound";
	cin>>ub;
	for(int i=lb;i<=ub;i++)
		if(prime_check(i))
			cout<<i<<" is prime"<<endl;
	return 0;
}