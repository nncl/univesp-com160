#include <iostream>

void printMessage(int num) {
	std::cout << num << std::endl;
}

void change(int arr[]){
	arr[0] = 10;
}

int main() {
	int p[] = { 9 };
	change(p);
	// Expect to change the array value by reference since arrays are pointers

	printMessage(p[0]);

	return 0;
}
