// #include<iostream>
// #include<vector>
// #include "sorting.h"
// #include "inputOutputFunctions.h"
//
// int main() {
//	const size_t N = 10;
//	std::vector<int> arr;
//	std::cout << "Create vector \n";
//	for (size_t i = 0; i < N; ++i) {
//		arr.push_back(N-i);
//	}
//
//	outputToFile("data\\initial_data.txt", arr, ' ');
//
//	std::vector<int> tmpArr;
//	inputFromFile("data\\initial_data.txt", tmpArr, ' ');
//
//	std::cout << "Output \n";
//	outputToConsole(tmpArr, ' ');
//
//
//	std::cout << "Quick sort \n";
//	quickSort(arr, 0, N - 1, ascending);
//	outputToConsole(arr, ' ');
//
//	quickSort(arr, 0, N - 1, descending);
//	outputToConsole(arr, ' ');
//
//	outputToFile("data\\output.txt", arr, ',');
//
//	return 0;
//
// }

#include "../controller/Program.h"

int main() {
    return Program::main();
}
