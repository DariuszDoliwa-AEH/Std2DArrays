#include "Std2DArrays.h"
#include <iostream>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw std::invalid_argument("Incorect number of rows or cloumns");
	}
	int startValue = 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = startValue;
			startValue++;

		}
	}

}
void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw std::invalid_argument("Incorect number of rows or cloumns");
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout<<arr[i][j]<<" ";
		
		}
		std::cout << std::endl;
	}
}