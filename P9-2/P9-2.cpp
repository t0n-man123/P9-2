#include <iostream>
using namespace std;
// atherton Bunner; functionakl arrays

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjecentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);
int main() {
	const int SIZE = 6;
	int values[SIZE];
	// get inputs
	for (int i = 0; i < SIZE; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> values[i];
	}

	if (isSortedIncreasing(values, SIZE)) { // checks if increasing
		cout << "The data are increasing" << endl;
	}
	else {
		cout << "The data are not increasing" << endl;
	}

	if (isSortedDecreasing(values, SIZE)) { // checks if decreasing
		cout << "The data are decreasing" << endl;
	}
	else {
		cout << "The data are not decreasing" << endl;
	}

	if (hasAdjecentDuplicates(values, SIZE)) { // checks if there are adjacent duplicate
		cout << "The data has adjacent duplicates" << endl;
	}
	else {
		cout << "The data does not have adjacent duplicates" << endl;
	}
}

// fucntion no1
bool isSortedIncreasing(int values[], int size) {
	for (int j = 0; j < size - 1; j++) { // checking every values
		if (values[j] > values[j + 1]) {
			return false;
		}
	} // if never triggered, then
	return true;
}

// function no2
bool isSortedDecreasing(int values[], int size) {
	for (int k = 0; k < size - 1; k++) { // checking values
		if (values[k] < values[k + 1]) { // opposite of increasing
			return false;
		}
	} // if never triggered, then
	return true;
}

// fnuction no3
bool hasAdjecentDuplicates(int values[], int size) {
	for (int l = 0; l < size - 1; l++) {
		if (values[l] == values[l + 1]) {
			return true;
		}
	}
	return false;
}