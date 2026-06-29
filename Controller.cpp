/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Controller.cpp
    Resumen: Implementación de la clase Controller, que maneja el view y el model.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    
    Autor
  
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
		
    Fecha: Junio 2026
*/



#include "Controller.h"
#include "Banco.h"
#include "Cliente.h"
#include "Cuenta.h"
#include <string>
#include <iostream>

#include <thread>
#include <chrono>


Controller::Controller(View& auxVista, Modelo& auxModelo): vista(auxVista),modelo(auxModelo){
}

void Controller::iniciarSistema(){
  if(modelo.cargarBanco()){
    vista.mostrarTitulo();
    vista.cargarBanco(1);
  }
  else{
    vista.mostrarTitulo();
    vista.cargarBanco(2);
    modelo.crearBanco();
  }
}

void Controller::añadirUsuario(){
      int idTitular;
      std::string tipoTitular;
      std::string fechaVinculacion;
      std::string id;
      long saldo;
      int tipoCuenta;
      std::string identificacion, nombre, telefono;
      
      std::cout<<"Ingrese el id del titular que desea ingresar. "<<std::endl;
      std::cin>>idTitular;
      std::cin.ignore();       

      if(!(modelo.verificarTitular(idTitular))){
        auto[tipoTitular, fechaVinculacion] = vista.interfazCrearTitular();
        modelo.crearTitular(idTitular, tipoTitular, fechaVinculacion);
        auto[id, saldo, tipoCuenta] = vista.interfazCrearCuenta(); 
        modelo.crearCuenta(idTitular, id, saldo, tipoCuenta);  
        auto[identificacion, nombre, telefono] = vista.interfazCrearCliente(); 
        modelo.crearCliente(idTitular, identificacion, nombre, telefono);
      }
      else {
        std::cout<<"Ya hay un usuario con ese id de titularidad";
      }
}

void Controller::añadirCuenta(){
    std::string id;
    long saldo;
    int tipoCuenta;
    
    
    int idTitular;
    std::cout<<"Ingrese el id del titular que desea ingresar. "<<std::endl;
    std::cin>>idTitular;
    std::cin.ignore(); 

    if(modelo.verificarTitular(idTitular)){
      auto[id, saldo, tipoCuenta] = vista.interfazCrearCuenta(); 
      if(!(modelo.verificarCuenta(idTitular, id))){
        modelo.crearCuenta(idTitular, id, saldo, tipoCuenta);
      }
      else{
        std::cout<<"Ya existe una cuenta con ese id"<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(900));
      }
    }
    else {
      std::cout<<"No hay ningún titular con ese ID"<<std::endl;
      std::this_thread::sleep_for(std::chrono::milliseconds(900));
    }
}

void Controller::añadirCliente(){
    std::string identificacion, nombre, telefono;
    
    int idTitular;
    std::cout<<"Ingrese el id del titular que desea ingresar. "<<std::endl;
    std::cin>>idTitular;
    std::cin.ignore();
    
    
    if(modelo.verificarTitular(idTitular)){
      auto[identificacion, nombre, telefono] = vista.interfazCrearCliente(); 
      if(!(modelo.verificarCliente(idTitular, identificacion))){
        modelo.crearCliente(idTitular,identificacion, nombre, telefono);
      }
      else{
        std::cout<<"Ya existe un cliente con ese id"<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(900));
      }
    }
    else {
      std::cout<<"No hay ningún titular con ese ID"<<std::endl;
      std::this_thread::sleep_for(std::chrono::milliseconds(900));
    }
}


void Controller::transferencia(){
      int idTitular;
      std::string idCuenta;
      std::cout<<"Ingrese el id del titular que desea ingresar. "<<std::endl;
      std::cin>>idTitular;
      std::cin.ignore();
      
      std::cout<<"Ingrese el id de la cuenta que desea ingresar. "<<std::endl;
      std::getline(std::cin,idCuenta);
 
      
      if(modelo.verificarTitular(idTitular)){
        int opcion;
        std::cout<<"¿Qué desea hacer?: \n1.Consignar dinero \n2.Retirar dinero"<<std::endl;
        std::cin>>opcion;
        std::cin.ignore();
        
        int dinero;
        std::cout<<"¿De cuanto es el valor de la transferencia?: ";
        std::cin>>dinero;
        std::cin.ignore();  
        std::cout<<std::endl;
        
        switch(opcion){
          case 1:
            modelo.consignarDinero(dinero, idTitular, idCuenta);
            std::cout<<"Su saldo ahora es: "<<modelo.consultarSaldo(idTitular, idCuenta);
            break;
          case 2:
            modelo.retirarDinero(dinero, idTitular, idCuenta);
            std::cout<<"Su saldo ahora es: ";
            modelo.consultarSaldo(idTitular, idCuenta);
        }
      }
      else{
        std::cout<<"No se ha encontrado el titular";
      }        
}

void Controller::limpiar(){
  modelo.limpiar();
}
