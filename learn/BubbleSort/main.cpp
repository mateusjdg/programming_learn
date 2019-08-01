#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

void print_array(const int *const arr, size_t size)
{
    cout << "[ ";
    for (size_t i{0}; i<size;++i)
        cout << arr[i] << " ";
    cout <<  "]";
    cout << endl;
}

//int binary_search (int *arr, int size, int chave)
//{
//    int first {0};
//    int last = size - 1;
//    int middle {0};
//    
//    while (first <= last)
//    {
//        middle = (last - first/2);
//        if (arr[middle] == chave)
//        {
//            return middle;
//        }
//        else if (arr[middle] < chave)
//        {
//            last = middle - 1;
//        }
//        else
//        {
//            first = middle + 1;
//        }
//    }
//}

void swap(int *a, int *b)
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void bubbleSort(int *vetor, int tamanho)
{ 
    for (int j = 0;j<tamanho;j++)
    {
        for (int i=0;i<tamanho;i++)
        {
            if (vetor[i] > vetor[i+1])
                swap(vetor[i],vetor[i+1]);
        }
    }
}


int main ()
{
    /*
    int32_t size_vector = 0;
    int32_t *ptr_vector = 0;
    
    cout << "\nInforme o tamanho do vetor desejado: ";
    cin >> size_vector;
    
    ptr_vector = (int32_t*) malloc( size_vector * sizeof(int32_t));
    
    cout << "\nInforme os " << size_vector << " elementos do vetor desejado (pressione enter apos cada um): " << endl;
    for (int32_t i = 0; i < size_vector; i++)
    {
        cin >> ptr_vector[i];
    }
    
    cout << "\nEste e o vetor inserido: [ ";
    for (int32_t i = 0; i < size_vector; i++)
    {
        cout << ptr_vector[i] << " ";
    }
    cout << "]" << endl;
    */
 
    int32_t size_vector {5};
    int32_t array1 [] {0x7fffffff,10,-5,4,1};

    print_array(array1, size_vector);
    bubbleSort(array1,size_vector-1);
    print_array(array1, size_vector);
    
//    cout << "\nEste e o vetor ordenado: [ ";
//    for (int32_t i = 0; i < size_vector; i++)
//    {
//        cout << ptr_vector[i] << " ";
//    }
//    cout << "]" << endl;
    
//    cout << "Insira o elemento a ser procurado no vetor: ";
//    int32_t procurado = 0;  
//    cin >> procurado;
//    cout << "\nO elemento a ser procurado e: " << procurado;
    
//    int pos_search {0};
//    pos_search = binary_search (ptr_vector,size_vector,procurado);
//    cout << "\nPosicao do elemento no vetor: " << pos_search;
    
    cout << "\nFIM" <<endl << endl;
    return 0;
}