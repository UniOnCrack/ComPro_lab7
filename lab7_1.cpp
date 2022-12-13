#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string A, B, C, D;

	cout << "Input text: ";
	cin >> A;
	
	B = func1(A);
	C = func2(B);
	D = func2(A);


	cout << "Reversed text: " << B << endl;


	cout << "Palindrome: ";

	if(C == D){
		cout << "Yes";
	}else{
		cout << "No";
	}


    return 0;
}
