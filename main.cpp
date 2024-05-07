#include <iostream>

using namespace std;

const int righeMax=3;
const int colonneMax=4;

//prototipi
void caricaMatrice(int matrix[righeMax][colonneMax]);
void visualizzaMatrice(int matrix[righeMax][colonneMax]);
void caricaVR(int matrix[righeMax][colonneMax], int vr[righeMax]);
void caricaVC(int matrix[righeMax][colonneMax], int vc[colonneMax]);
int Menu();

int main() {

  int scelta;
  int matrix[righeMax][colonneMax];
  int VR[righeMax];
  int VC[colonneMax];

  do {
    scelta=Menu();
    switch(scelta) {
      case 1:
        caricaMatrice(matrix);
      break;
      case 2:
        visualizzaMatrice(matrix);
      break;
      case 3:
        caricaVR(matrix,VR);
      break;
      case 4:
        caricaVC(matrix,VC);
      break;
      case 0:
        cout<<"Esci"<<endl;
      break;
      default:
        cout<<"Attenzione, scelta sbagliata!"<<endl;
      break;
    }
  }while(scelta!=0);

}


int Menu() {
  int scegli;
  cout<<"-----------------MENU-----------------"<<endl;
  cout<<"1-Carica matrice"<<endl;
  cout<<"2-Visualizza matrice"<<endl;
  cout<<"3-Somma per righe"<<endl;
  cout<<"4-Somma per colonne"<<endl;
  cout<<"0-Fine"<<endl;
  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}


void caricaMatrice(int matrix[righeMax][colonneMax]) {

  cout<<endl;

  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      cout<<"Inserisci il valore della cella "<<i+1<<" "<<j+1<<": ";
      cin>>matrix[i][j];
    }
  }


  cout<<endl;

}

void visualizzaMatrice(int matrix[righeMax][colonneMax]) {

  cout<<endl;

  for(int i=0; i<righeMax; i++) {
    for(int j=0; j<colonneMax; j++) {
      cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
  }

  cout<<endl;

}

void caricaVR(int matrix[righeMax][colonneMax], int vr[righeMax]) {

    int somma;

    for(int i=0; i<righeMax; i++) {
      somma=0;
      for(int j=0; j<colonneMax; j++) {
        somma=somma+matrix[i][j];
        vr[i]=somma;
      }
    }

    cout<<endl;

    cout<<"---------------VETTORE RIGHE---------------"<<endl;

    for(int i=0; i<righeMax; i++) {
        cout<<vr[i]<<endl;
    }

}


void caricaVC(int matrix[righeMax][colonneMax], int vc[colonneMax]) {

  int somma;

    for(int i=0; i<colonneMax; i++) {
      somma=0;
      for(int j=0; j<righeMax; j++) {
        somma=somma+matrix[j][i];
        vc[i]=somma;
      }
    }

    cout<<endl;

    cout<<"---------------VETTORE COLONNE---------------"<<endl;

    for(int i=0; i<colonneMax; i++) {
        cout<<vc[i]<<endl;
    }
}
