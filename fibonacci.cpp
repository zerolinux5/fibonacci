#include <iostream>
using namespace std;

int fibonacci(int f){
	if (f <= 2){
		return 1;
	} else {
		return fibonacci(f-1) + fibonacci(f-2);
	}
}

int main () {
  int question,answer, again;
  while(again != 0){
	  cout << "Enter starting number ";
	  cin >> question;
	  answer = fibonacci(question);
	  cout << answer << "\nEnter another number? (1/0)";
	  cin >> again; 
	}
	return 0;
}