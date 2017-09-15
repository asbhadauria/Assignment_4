    #include <iostream>
    using namespace std;
     
    bool perfect_check(int num){
    	int sum=0;
    		for(int i=1;i<num;i++)
    			if(num%i==0)
    				sum+=i;
    		if(sum==num)
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
    		if(perfect_check(i))
    			cout<<i<<" is perfect"<<endl;
    	return 0;
    }
