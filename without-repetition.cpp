/**
*
* @Name : CombiningElements/without-repetition.cpp
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-06-25
* @Released under : https://github.com/BaseMax/CombiningElements/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/CombiningElements
*
**/
#include <iostream>
#include <string>
using namespace std;

int main() {
	const int length=6;
	string values[length];
	cout << "Enter values:\n";
	for(int index = 0; index < length;index++) {
		cin >> values[index];			// Get a word
		// getline(cin, values[i]);		// Get a line
	}
	for(int index1 = 0;index1 < length; index1++) {
		for(int index2 = 0;index2 < length; index2++) {
			for(int index3 = 0;index3 < length; index3++) {
				for(int index4 = 0;index4 < length;index4++) {
					for(int index5 = 0; index5 < length;index5++) {
						for(int index6 = 0; index6 < length;index6++) {
							cout << values[index1] << values[index2] << values[index3] << values[index4] << values[index5] << values[index6] << endl;
						}
					}
				}
			}
		}
	}
	cin.get();
	cin.get();
	return 0;
}
