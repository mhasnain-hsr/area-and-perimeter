#include<iostream>
using namespace std;
int main (){
	cout << "\n\n";
	cout << " Enter The Prize of Tomatoes per Kg: ";
	int prizeTomatoes=0;
	cin>>prizeTomatoes;
	int prizeWithTax=0;
	prizeWithTax=prizeTomatoes+5;//tax=5
	cout << " The Prize of Tomatoes including Tax is "<<prizeWithTax;
	return 0;
	
	
}

