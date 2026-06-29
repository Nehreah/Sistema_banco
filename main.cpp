#include "Controller.h"
#include "Modelo.h"
#include "View.h"
#include <iostream>


int main(){
  
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
  View vista;
  Modelo modelo;
  Controller control(vista, modelo);

  control.iniciarSistema();
  
  int opcion;
  vista.mostrarMenu();
  std::cin>>opcion;
  std::cin.ignore();
  while(opcion != 0){
    switch(opcion){
      case 1:
        control.añadirUsuario();
        break;
      case 2:
        control.transferencia ();
        break;
      case 3:
        control.añadirCuenta();
        break;
      case 4:
        control.añadirCliente();
        break;
      case 5:
        control.consultarSaldo();
    }
    vista.mostrarMenu();
    std::cin>>opcion;
  }
  control.limpiar();

return 0;
}
