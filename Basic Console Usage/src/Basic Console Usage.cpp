//============================================================================
// Name        : Basic Console Usage.cpp
// Author      : Wyeth Abel
// Description : Simple usage of the console space to
//				 display fictional user information, made
//				 more interesting using array iteration.
//============================================================================

#include <iostream>

using namespace std;

int main() {
	string infoHeaders[5] = {
			"First",
			"Last",
			"address",
			"City",
			"zip"
	};
	string info[5] = {
			"Wyeth",
			"Abel",
			"1265 Not Real Road",
			"Fakesville",
			"01234"
	};
	for (int i = 0; i < 5; i++) {
		cout << infoHeaders[i] << " : " << info[i] << endl;
	}
	return 0;
}
