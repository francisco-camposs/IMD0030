#include <iostream>

using namespace std;

typedef struct lista{
    int tam;
    int Qnt;
    int * lista;
} lista;

lista criar_lista(int tam){
    if (tam >= 0){
        lista VV;
        VV.lista = new int(tam);
        VV.tam = tam;
        VV.Qnt = 0;
        return VV;
    }
    else{
        lista list;
        return list;
    }
}

void destruir_lista(lista VV){
    if (VV.lista != NULL){
        cout << "Morreu" << endl;
        delete[] VV.lista;
    }
    VV.tam = 0;
    VV.Qnt = 0;
    VV.lista = NULL;
}

int acesso_pos(lista VV, int pos){
    if ( VV.Qnt <= pos || pos < 0){
        cout << "Não existe essa posição" << endl;
        return 0;
    }
    return (VV.lista[pos]);
}

// int acesso_inicio(int *VV, int Qtd){
//     if(Qtd == 0){
//         cout << "Não existe essa posição" << endl;
//         return 0;
//     }
//     return VV[0];
// }

// int acesso_fim(int *VV, int Qtd){
//     if(Qtd == 0){
//         cout << "Não existe essa posição" << endl;
//         return 0;
//     }
//     return VV[Qtd-1];
// }





int main(){

    lista list;

    list = criar_lista(20);

    cout << acesso_pos(list, 30) << endl;
    cout << acesso_pos(list, 10) << endl;

    destruir_lista(list);

    return 0;
}