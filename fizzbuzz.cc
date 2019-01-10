#include <iostream>
using namespace std;

int main() {
	//Write your code here
for(int i = 1; i < 101; i++){
		if((i % 3 == 0) && (i % 5 == 0)){
		cout << "FizzBuzz" << endl;
		continue;
		}	
		else if((i % 3) == 0){
		cout << "Fizz" << endl;
		continue;
		}
		else if ((i % 5 == 0)){
		cout << "Buzz" << endl;
		continue;
		}
		else{
		cout << i << endl;
		}
	}
}
