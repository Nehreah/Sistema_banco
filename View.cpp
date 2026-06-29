#include "View.h"
#include <iostream>
#include <thread>
#include <chrono>

void limpiarPantalla(){
  #ifdef _WIN32
      system("cls");
  #else
      system("clear");
  #endif
}

View::View(){
}

void View::mostrarTitulo(){
  std::cout<<R"(
                                                                            ░█▀▀░▀█▀░█▀▀░▀█▀░█▀▀░█▄█░█▀█░░░█▀▄░█▀█░█▀█░█▀▀░█▀█░█▀▄░▀█▀░█▀█
                                                                            ░▀▀█░░█░░▀▀█░░█░░█▀▀░█░█░█▀█░░░█▀▄░█▀█░█░█░█░░░█▀█░█▀▄░░█░░█░█
                                                                            ░▀▀▀░▀▀▀░▀▀▀░░▀░░▀▀▀░▀░▀░▀░▀░░░▀▀░░▀░▀░▀░▀░▀▀▀░▀░▀░▀░▀░▀▀▀░▀▀▀
  )"<<std::endl;
}


void View::cargarBanco(int opcion){
  if(opcion == 1){
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos.
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos..
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos...
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));    
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos.
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));    
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos..
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                    ╔═══════════════════════════════════════════╗
                                                                                        Éxito en la carga de la base de datos
                                                                                    ╚═══════════════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));
}
  else if(opcion == 2){
  

    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos.
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos..
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos...
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));    
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos.
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));    
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                                          ╔════════════════════════════════╗
                                                                                              Cargando base de datos..
                                                                                          ╚════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(600));
    limpiarPantalla();
    mostrarTitulo();
    std::cout<<R"(
                                                                        ╔═════════════════════════════════════════════════════════════════════╗
                                                                            No hay ningún banco cargado.  Iniciando la carga de un nuevo banco
                                                                        ╚═════════════════════════════════════════════════════════════════════╝)"<<std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1200));


  }
}


void View::mostrarMenu(){
  limpiarPantalla();
  mostrarTitulo();

  std::cout<<R"(                                                                                    
                                                                                                    Qué desea hacer:
                                                                                        ╔═════════════════════════════════════╗
                                                                                             1. Crear Usuario 
                                                                                             2. Transferir saldo 
                                                                                             3. Añadir cuenta 
                                                                                             4. Añadir Cliente 
                                                                                             0. Ingrese cero para cerrar
                                                                                        ╚═════════════════════════════════════╝
                                                                                         Ingrese su opción: )";
                                                                            

}


std::tuple<std::string,std::string> View::interfazCrearTitular(){
  std::string tipoTitular;
  std::string fechaVinculacion;
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              -Ingrese el tipo del titular: "+tipoTitular<<std::endl;
  std::cout<<"                                                                              -Ingrese la fecha de vinculación: "+fechaVinculacion<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           Tipo titular: ";
  std::getline(std::cin, tipoTitular);


  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese el tipo del titular: "+tipoTitular<<std::endl;
  std::cout<<"                                                                              Ingrese la fecha de vinculación: "+fechaVinculacion<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           Fecha Vinculacipon: ";
  std::getline(std::cin, fechaVinculacion);
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese el tipo del titular: "+tipoTitular<<std::endl;
  std::cout<<"                                                                              Ingrese la fecha de vinculación: "+fechaVinculacion<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
  
  return {tipoTitular,fechaVinculacion};
}







std::tuple<std::string,long,int> View::interfazCrearCuenta(){
  std::string id;
  long saldo = 0;
  int tipoCuenta = 0;


  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese el ID de la  cuenta: "+id<<std::endl;
  std::cout<<"                                                                              Ingrese el saldo de la cuenta: "<<std::to_string(saldo)<<std::endl;
  std::cout<<"                                                                              Ingrese el tipo de cuenta: "<<tipoCuenta<<std::endl;
  std::cout<<"                                                                              1. Cuenta de Ahorros"<<std::endl;
  std::cout<<"                                                                              2. Cuenta Corriente"<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           ID de la cuenta: ";
  std::getline(std::cin,id);
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese el ID de la  cuenta: "+id<<std::endl;
  std::cout<<"                                                                              Ingrese el saldo de la cuenta: "<<std::to_string(saldo)<<std::endl;
  std::cout<<"                                                                              Ingrese el tipo de cuenta: "<<tipoCuenta<<std::endl;
  std::cout<<"                                                                              1. Cuenta de Ahorros"<<std::endl;
  std::cout<<"                                                                              2. Cuenta Corriente"<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           Saldo de la cuenta: ";
  std::cin>>saldo;
  std::cin.ignore();
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese el ID de la  cuenta: "+id<<std::endl;
  std::cout<<"                                                                              Ingrese el saldo de la cuenta: "<<std::to_string(saldo)<<std::endl;
  std::cout<<"                                                                              Ingrese el tipo de cuenta: "<<tipoCuenta<<std::endl;
  std::cout<<"                                                                              1. Cuenta de Ahorros"<<std::endl;
  std::cout<<"                                                                              2. Cuenta Corriente"<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           Tipo cuenta: ";
  std::cin>>tipoCuenta;
  std::cin.ignore();
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese el ID de la  cuenta: "+id<<std::endl;
  std::cout<<"                                                                              Ingrese el saldo de la cuenta: "<<std::to_string(saldo)<<std::endl;
  std::cout<<"                                                                              Ingrese el tipo de cuenta: "<<tipoCuenta<<std::endl;
  std::cout<<"                                                                              1. Cuenta de Ahorros"<<std::endl;
  std::cout<<"                                                                              2. Cuenta Corriente"<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;  
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
 return {id, saldo, tipoCuenta};
}

std::tuple<std::string,std::string,std::string> View::interfazCrearCliente(){
  std::string identificacion, nombre, telefono;
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese la identificación del cliente: "+identificacion<<std::endl;
  std::cout<<"                                                                              Ingrese el nombre del cliente: "+nombre<<std::endl;
  std::cout<<"                                                                              Ingrese el teléfono del cliente: "+telefono<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           Identificación: ";
  std::getline(std::cin, identificacion);
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese la identificación del cliente: "+identificacion<<std::endl;
  std::cout<<"                                                                              Ingrese el nombre del cliente: "+nombre<<std::endl;
  std::cout<<"                                                                              Ingrese el teléfono del cliente: "+telefono<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           Nombre del cliente: ";
  std::getline(std::cin, nombre);
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese la identificación del cliente: "+identificacion<<std::endl;
  std::cout<<"                                                                              Ingrese el nombre del cliente: "+nombre<<std::endl;
  std::cout<<"                                                                              Ingrese el teléfono del cliente: "+telefono<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::cout<<"                                                                           Teléfono: ";
  std::getline(std::cin, telefono);
  
  limpiarPantalla();
  mostrarTitulo();
  std::cout<<"                                                                          ╔══════════════════════════════════════════════════════════════════════╗"<<std::endl;
  std::cout<<"                                                                              Ingrese la identificación del cliente: "+identificacion<<std::endl;
  std::cout<<"                                                                              Ingrese el nombre del cliente: "+nombre<<std::endl;
  std::cout<<"                                                                              Ingrese el teléfono del cliente: "+telefono<<std::endl;
  std::cout<<"                                                                          ╚══════════════════════════════════════════════════════════════════════╝"<<std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(1200));
  
  return {identificacion, nombre, telefono};
}



