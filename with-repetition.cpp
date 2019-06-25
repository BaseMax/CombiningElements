/**
*
* @Name : CombiningElements/with-repetition.cpp
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
			if(index2 == index1)
				continue;
			for(int index3 = 0;index3 < length; index3++) {
				if(index3 == index1)
					continue;
				if(index3 == index2)
					continue;
				for(int index4 = 0;index4 < length;index4++) {
					if(index4 == index1)
						continue;
					if(index4 == index2)
						continue;
					if(index4 == index3)
						continue;
					for(int index5 = 0; index5 < length;index5++) {
						if(index5 == index1)
							continue;
						if(index5 == index2)
							continue;
						if(index5 == index3)
							continue;
						if(index5 == index4)
							continue;
						for(int index6 = 0; index6 < length;index6++) {
							if(index6 == index1)
								continue;
							if(index6 == index2)
								continue;
							if(index6 == index3)
								continue;
							if(index6 == index4)
								continue;
							if(index6 == index5)
								continue;
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
