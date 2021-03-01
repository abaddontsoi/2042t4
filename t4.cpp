#include <iostream>

using namespace std;

int main(){
	cout << "I have a number between 1 and 100." << endl;
	cout << "Can you guess my number?" << endl ;

	int guess = 0, ans = 31;
	cout << "Guess: " ;
	while(1){
		cin >> guess ;
		if (guess < ans){
			cout << "Too low. Try again." << endl;
		}
		if (guess > ans){
			cout << "Too high. Try again." << endl;
		}
		if (guess == ans){
			cout << "Excellent! Correct guess." << endl;
			break;
		}
		cout << "Guess: " ;
	}

}
