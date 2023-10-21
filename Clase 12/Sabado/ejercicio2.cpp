#include <iostream>
using namespace std;

void cargarDatos(int &pa_generoMayor, int pb_vCantidadDias[], int pc_vCantidadTemas[]);
void mostrarCantidadArtistas(int pb_vCantidadDias[]);
void mostrarArtistasTemas(int pc_vCantidadTemas[]);


int main() {
   
   int pa_generoMayor;
   int pb_vCantidadDias[31]{};
   int pc_vCantidadTemas[31]{};
  
   cargarDatos(pa_generoMayor, pb_vCantidadDias, pc_vCantidadTemas);
   
   /// Punta A
   cout << "El genero del artista que mayor tiempo estubo en el dia 3 es: " << 
      pa_generoMayor << endl;
   
   /// Punto B
   mostrarCantidadArtistas(pb_vCantidadDias);
   
   /// Punto C
   mostrarArtistasTemas(pc_vCantidadTemas);
	
	return 0;
}


void cargarDatos(int &pa_generoMayor, int pb_vCantidadDias[], int pc_vCantidadTemas[]){
   int dia, artista, genero, minutos, canciones;
   int pa_minutosMayor = 0;
   
   cout << "Ingrese dia: ";
   cin >> dia;
   while(dia != 0){
      
      cout << "Ingrese artista: ";
      cin >> artista;   
      
      cout << "Ingrese Genero: ";
      cin >> genero;
      
      cout << "Ingrese minutos: ";
      cin >> minutos;
      
      cout << "Ingrese canciones: ";
      cin >> canciones;
      
      /// procesamos los registros
      
      if(dia == 3){
         
         if(minutos > pa_minutosMayor){
            pa_minutosMayor = minutos;
            pa_generoMayor = genero;
         }
      }
      
      pb_vCantidadDias[artista-100]++;
      
      pc_vCantidadTemas[artista-100] += canciones;
      
      
      cout << "Ingrese dia: ";
      cin >> dia;
   }
}
   
void mostrarCantidadArtistas(int pb_vCantidadDias[]){
   int cantidad = 0;
   for(int i=0; i<31; i++){
      if(pb_vCantidadDias[i] == 3){
         cantidad++;
      }
   }
   
   cout << "La cantidad de artistas que participaron los 3 dias fueron: " << 
      cantidad << endl;
}

   
void mostrarArtistasTemas(int pc_vCantidadTemas[]){
   cout << "Los artistas que realizaron mas de 15 temas son: " << endl;
   for(int i=0; i <31 ; i++){
      if(pc_vCantidadTemas[i]>15){
         cout << i + 100 << endl;
      }
   }
}

