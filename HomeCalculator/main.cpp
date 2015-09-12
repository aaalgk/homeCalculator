#include <iostream>
#include <time.h>
#include <map>
#include <set>

using namespace std;

int main(){
	srand(time(NULL));
	//cout << "Hello world !!!" << endl;

	const int arrSize = 10;

	int arr[arrSize];
	int newDigit;
	bool status;
	bool statusAdded;

	for (int i = 0; i < 10; i++){
		statusAdded = true;
		while (statusAdded){
			status = true;
			newDigit = rand() % 12 + 1;
			
			for (int j = 0; j <= i; j++){
				if (arr[j] == newDigit){
					status = false;
					break;
				}
			}
			if (status){
				arr[i] = newDigit;
				statusAdded = false;
			}
		}
	}
	
	/*for (int k = 0; k < 10; k++){
		cout << arr[k] << endl;
	}*/

	set<int> first;
	std::set<int>::iterator it;
	/*for (int i = 0; i < 5; i++){

	}*/

	first.insert(9);
	first.insert(23);
	first.insert(9);

	for (it = first.begin(); it != first.end(); ++it)
		cout << *it << endl;

	system("Pause");

	return 0;
}