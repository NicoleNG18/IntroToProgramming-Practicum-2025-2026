#include<iostream>
#include"./helper.h"

#define SIZE_OF_ARRAY 100

int main() {

	unsigned countOfElements = inputArraySizeInRange(1, SIZE_OF_ARRAY);

	int arr[SIZE_OF_ARRAY];

	fillArrayInt(arr, countOfElements);

	printArray(arr, countOfElements);
}
