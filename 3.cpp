//WAP for unary increment (++) and decrement (--) operator overloading.

#include<iostream>

using namespace std;

class count{
	
	public:
		
		int value = 10;
		
		void operator ++(){
			value++;
			cout<<value<<endl;
		}
	
	    void operator --(){
	    	value--;
	    	cout<<value<<endl;
		}
};

main(){
	
	count obj;
	++obj;
	--obj;
}
