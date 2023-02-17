#include<iostream>

using namespace std;

class Car{
	
	
	
	public:
		
		void speed(int j){
			cout<<"speed = "<<j<<endl;
		}
		
		
		void speed(int j, int k){
			cout<<"speed = "<<j<<endl;
			cout<<"avg = "<<k<<endl;
		}
		
		
		void speed(int j, char k){
			cout<<"speed = "<<j<<endl;
			cout<<"char Avg = "<<k<<endl;
		}
};

main(){
	
	
	Car o;
	
	o.speed(40,'w');
}
