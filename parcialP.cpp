#include <iostream>
using namespace std;

int main (){
/*
int tamanio = 5;
for (int i=0;i<tamanio;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }
    cout<< endl;
}
*/
/*
int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9},};
int numeroBuscado;
cin >> numeroBuscado;
bool encontrado = false;

for (int i =0;i<3;i++){
    for(int j=0;j<3;j++){
       if (matriz[i][j] == numeroBuscado){
          encontrado = true;
          cout<< numeroBuscado <<" fue encontrado";
          break;
       }
    }
    if (encontrado){
        break;
    }
    if (!encontrado)
        cout << "no esta el valor en la matriz";
       break;
}
*/
int filas;
int columnas;

cin >>filas;
cin >>columnas;

int matriz [filas][columnas];

for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        cout<<"ingrese el valor de "
        <<i
        <<j
        <<endl;
        cin >> matriz[i][j];
    }
}
for (int i=0;i<filas;i++){
    for (int j=0;j<columnas;j++){
        cout << matriz[i][j];
    }
   cout <<endl;
}





return 0;
}

