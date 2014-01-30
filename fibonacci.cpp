#include <iostream>
using namespace std;

int fibonacciR(int f){
	if (f <= 2){
		return 1;
	} else {
		return fibonacciR(f-1) + fibonacciR(f-2);
	}
}

int fibonacciI(int f){
	int result = 1;
	int result2 = 0;
	int resultEnd = 1;
	for(int i = 1; i < f; i++){
		resultEnd = result + result2;
		result2 = result;
		result = resultEnd;	
	}
	return resultEnd;
}



int main () {
  int question,answer, again;
  while(again != 0){
	  cout << "Enter starting number ";
	  cin >> question;
	  answer = fibonacciI(question);
	  cout << answer << "\nEnter another number? (1/0) :";
	  cin >> again; 
	}
	return 0;
}