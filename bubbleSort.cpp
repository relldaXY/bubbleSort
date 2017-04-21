#include <iostream>
using namespace std;

void bubbleSort(int *a);

int main () {
    int a[10] = {2,4,6,3,5,1,7,9,0,8};
    bubbleSort(a);
    return 0;
}
/*
O "for" interno vai levando o maior numero para o final.
Enquanto que o "for" externo representa o numero total do
array, possibilitando que todos os numeros se ordenem
*/
void bubbleSort(int *a) {
    int maior;

    for(int j = 1; j<10; j++) {
        for (int i = 1; i< 10; i++) {
            if(a[i-1]>a[i]) {
                maior = a[i-1];
                a[i-1] = a[i];
                a[i] = maior;
            }
        }
    }

    for(int i = 0; i <10; i++){
        cout<< a[i] << endl;
    }
    return;
}

