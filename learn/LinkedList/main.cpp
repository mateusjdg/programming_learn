#include <iostream>
#include <string>

using namespace std;
/*
class Node
{
public:
	
	//atributes
	int value;
	Node *next;
	
	//methods
};
*/
struct No 
{
    int valor {0};
    No *seguinte;
};

No *cabeca = nullptr;
No *no = nullptr;
No *cauda = nullptr;

void insere_cabeca (int valor) {
 
    no = (No*) malloc(sizeof(No));
    no->valor=valor;
 
    if (cabeca==nullptr) 
    {
        no->seguinte = nullptr;
    }
    else 
    {
        no->seguinte = cabeca;
    }
    cabeca = no;
}


void insere_cauda (int valor) {
    
    no = (No*) malloc(sizeof(No));
    no->valor = valor;
    no->seguinte = nullptr;
     
    if (cabeca==nullptr) 
    {
        cabeca = no;
    }
    else
    {
        cauda = cabeca;
        while (cauda->seguinte != nullptr)
        {
            cauda = cauda->seguinte;
        }
        cauda->seguinte = no;
    }
}


void imprime_lista (void) {
    if (cabeca==NULL) 
    {
        cout << "A lista esta vazia!";
    }
    else 
    {
        no = cabeca;
        cout << "Valor: ";
        while (no!=NULL) 
        {
            cout << no->valor << " ";
            no = no->seguinte;
        }
    }	
}


int main() {

    char opcao {0};
    int value {0};

    for (;;)
    {
        cout << "\nImprimir a lista = I";
        cout << "\nInserir elemento na cabeca = C";
        cout << "\nInserir elementos na cauda = F";
        cout << "\nSair do programa = Q";
        cout << "\nO que deseja fazer: ";
        cin >> opcao;

        if (opcao == 'C' || opcao == 'c')
        {
            cout << "Forneca o elemento a ser inserido na lista: ";
            cin >> value;
            insere_cabeca(value);
        }
        else if (opcao == 'F' || opcao == 'f')
        {
            cout << "Forneca o elemento a ser inserido na lista: ";
            cin >> value;
            insere_cauda(value);
        }
        else if (opcao == 'I' || opcao == 'i')
        {
            cout << endl;
            imprime_lista();
            cout << endl;
        }
        else if (opcao == 'Q' || opcao == 'q')
        {
            return 0;
        }
    }
}