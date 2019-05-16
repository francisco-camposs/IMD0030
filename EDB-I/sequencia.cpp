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
    if ( VV.Qnt > pos || pos < 0){
        cout << "Não existe essa posição" << endl;
        return 0;
    }
    return (VV.lista[pos]);
}

void inserir(lista VV, int valor, int pos){
    if (VV.Qnt == VV.tam || pos < 0  || pos > VV.tam){
        cout << "Erro ao inserir elemento." << endl;
        return;
    }
    int ind = VV.Qnt;
    while(ind > pos && ind != 0){
        VV.lista[ind] = VV.lista[ind-1];
        ind -= 1;
    }
    cout << "Valor: " << valor << endl;
    VV.lista[pos] = valor;
    cout << "Inserindo: " << VV.lista[pos]  << " pos: " << pos << endl;
    VV.Qnt += 1;
}



int main(){

    lista list;

    list = criar_lista(20);

    for (int i = 0; i < 20; i++){

        inserir(list, i*10, 19-i);
    }

    cout << "Vetor: " << endl;
    for (int i = 0; i < 20; i++){
    //     cout <<"Acesso normal: " <<  list.lista[i] << endl;;
        cout << "Função de acesso: " << acesso_pos(list, i)  << " i :" << i << endl;
    }

    // destruir_lista(list);

    return 0;
}