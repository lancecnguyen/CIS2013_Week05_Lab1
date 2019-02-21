#include <iostream>

using namespace std;
// CIS2013_Week05_Lab1

int main(){
	
	int LEN = 2;
	
	int student[LEN];
	
	for(int i=0; i<LEN; i++){
		cout << "Enter Student " << i+1 << "'s grade ";
		cin >> student[i];
	}
	
	for (int j=0; j<LEN; j++){
		cout << "Student " << j+1 << "'s grade is " << student [j] << endl;
	}
	
	return 0;
}