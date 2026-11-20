#include<iostream>
using namespace std;
int main(){
	int answer =1;
	int table = 5;
	while(table<=10){
	cout << "table of:"<<table<< endl;
	int multiplier = 3;
	while(multiplier <=20){
	cout <<table<<"*"<<multiplier<<"="<<table*multiplier<<endl;
	int answer = table* multiplier;
	multiplier++;
}
	cout <<endl;
	table++;
}
	return 0;
	
}

