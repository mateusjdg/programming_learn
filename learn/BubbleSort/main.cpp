#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

void print_array(const int* const arr, size_t size)
{
	cout << "[ ";
	for (size_t i{ 0 }; i < size; ++i)
		cout << arr[i] << " ";
	cout << "]";
	cout << endl;
}

void swap(int32_t* a, int32_t* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int32_t* vetor, size_t tamanho)
{
	for (size_t j = 0; j < tamanho; j++)
	{
		for (size_t i = 0; i < tamanho; i++)
		{
			if (vetor[i] > vetor[i + 1])
				swap(vetor[i], vetor[i + 1]);
		}
	}
}


int main(int argc, char *argv[] )
{
	int32_t array1[]{ 0x7fffffff,10,-5,4,1 };
	size_t size_vector = (sizeof(array1)/sizeof(int32_t));

	print_array(array1, size_vector);
	bubbleSort(array1, size_vector - 1);
	print_array(array1, size_vector);

	cout << "\nFIM" << endl << endl;
	return 0;
}
