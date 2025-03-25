#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

string nombre, apellidos, musica;


int main(){
    

    cout<<"Que musica te gusta?: "<<endl;
    getline(cin, musica);

    ofstream file;
    file.open("musica.txt");
    file << "Musica: \n";
    file << musica<<"\n";
    

    file.close();

    

  
  FILE * archivo;
  long medida;
  
   char * texto;
  archivo = fopen ("nombre.txt", "r");
  
  fseek (archivo , 0 , SEEK_END);
  
  medida = ftell (archivo);
  
  rewind (archivo);
  texto = (char*) malloc (sizeof(char)*medida);
  fread(texto, medida+1, 1, archivo);
  cout << texto << endl;
  
  fclose(archivo);
  system("pause");

  system("DIR");
  system("pause");

  return 0;
}