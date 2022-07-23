#include <iostream>
using namespace std;
int main(){
	
	int centigrade;
	int fahrenheit;
	
	cout<<"Enter the temperature in centigrade:";
	cin>>centigrade;
	
	fahrenheit=(centigrade*9/5)+32;
	
	cout<<"Given temperature in Fahrenheit is "<<int(fahrenheit);
	return 0;
	
}
