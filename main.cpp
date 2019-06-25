/**
*
* @Name : CombiningElements/main.cpp
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-06-25
* @Released under : https://github.com/BaseMax/CombiningElements/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/CombiningElements
*
**/
#include <iostream>
#include <algorithm>
#include <string>

int main() {
	const int length=6;
	string inputs[length];
	for(int index=0;index < length;index++) {
		// cin >> inputs[index];
		getline(cin, inputs[index]);
	}
	sort(inputs, inputs+length);
	do {
		for(int index = 0; index < length; index++) {
			cout << inputs[index];
		}
		cout << endl;
	} while(next_permutation(inputs, inputs+length));
	return 0;
}
