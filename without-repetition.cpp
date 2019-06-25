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
	cout << "Enter values:\n";
	string texts[length];
	for(int index = 0; index < length;index++) {
		cin >> texts[index];			// Get a word
		// getline(cin, texts[i]);		// Get a line
	}
	for(int index1 = 0;index1 < length; index1++) {
		for(int index2 = 0;index2 < length; index2++) {
			for(int index3 = 0;index3 < length; index3++) {
				for(int index4 = 0;index4 < length;index4++) {
					for(int index5 = 0; index5 < length;index5++) {
						for(int index6 = 0; index6 < length;index6++) {
							cout << texts[index1] << texts[index2] << texts[index3] << texts[index4] << texts[index5] << texts[index6] << endl;
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
