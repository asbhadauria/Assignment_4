    #include <iostream>
    using namespace std;
     
    bool arm_check(int num){
    	int rem=0,sum=0,dummy=num;
    	while(num>0){
    		rem=num%10;
    		sum+=(rem*rem*rem);	
    		num/=10;
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
    		if(arm_check(i))
    			cout<<i<<" is Armstrong"<<endl;
    	return 0;
    }

