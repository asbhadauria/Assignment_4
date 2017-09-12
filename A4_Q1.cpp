#include <iostream>
using namespace std;

int cube (int num){
	int pro=num*num*num;
	return pro;
}
int main(){
	int num,cub;
	cout<<"Enter your Number:";
	cin>>num;
	cub=cube(num);
	cout<<"Cube of the NUmber:"<<cub;
	return 0;
}

	
