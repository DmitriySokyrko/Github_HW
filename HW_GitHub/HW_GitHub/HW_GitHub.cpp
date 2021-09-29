#include<iostream>
using namespace std;
void sort(int* arr) {
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			if (arr[j] < arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main() {
	int arr[10];
	for (size_t i = 0; i < 10; i++)
	{
		arr[i]=rand()%10;
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	sort(arr);
	cout << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}