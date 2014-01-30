#include <iostream>
using namespace std;


//Using recursion to get the answer slower
int fibonacciR(int f){
	if (f <= 2){
		return 1;
	} else {
		return fibonacciR(f-1) + fibonacciR(f-2);
	}
}

//Using iteration, faster
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


//main class with loop
int main () {
  int question,answer = 0, again, functionNumber;
  while(again != 0){
  	  cout << "Recursive or Iterative? : (1/0) ";
  	  cin >> functionNumber;
	  cout << "Enter starting number ";
	  cin >> question;
	  switch (functionNumber){
	  	case 1:
		  	answer = fibonacciR(question);	  
		  	cout << answer << "\nEnter another number? (1/0) :";
		  	cin >> again; 
		  	functionNumber = 3;
	  	break;
	  	case 0:
		  	answer = fibonacciI(question);
		  	cout << answer << "\nEnter another number? (1/0) :";
		  	cin >> again; 
		  	functionNumber = 3;
	  	break;
	  	default:
	  		cout << "Bye.\n";
	  		again = 0;
	  }
	}
	return 0;
}