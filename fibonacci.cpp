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
  int question;
  cout << "Enter starting number ";
  cin >> question;
  int answer = fibonacci(question);
  cout << answer;
  return 0;
}