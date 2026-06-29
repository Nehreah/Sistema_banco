/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Modelo.cpp
    Resumen: Definición de la clase Modelo, núcleo lógico que coordina el estado del banco y sus transacciones.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Modelo

    Responsabilidades:
    - Centralizar las operaciones de negocio del sistema bancario (consignaciones, retiros, consultas).
    - Ordenar al sistema de persistencia la carga y guardado de los datos financieros.
    - Crear y verificar las entidades principales como Bancos, Titulares, Cuentas y Clientes.
    - Gestionar de forma segura la liberación de memoria dinámica al cerrar el sistema.

    Colaboradores:
    - Banco: Mantiene el objeto real que representa el banco actual en ejecución.
    - Parse: Utiliza la clase Parse para serializar y deserializar los datos en formato JSON.
    - Titular / Cuenta / Cliente: Modifica y añade instancias dinámicas a cada estructura.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/

#include "Modelo.h"
#include "Parse.h"
#include "CuentaAhorros.h"
#include "CuentaCorriente.h"
#include <iostream>
#include <string>


Modelo::Modelo(): banco("NN"){
}

bool Modelo::cargarBanco(){
  Parse parse;
  if(parse.cargarBanco(banco)){
    parse.cargarClientes(banco);
    parse.cargarCuentas(banco);
    parse.cargarTitulares(banco);
    return true;
  }
  else {
   return false;
  }
}

void Modelo::crearBanco(){
  std::string nombre;
  std::cout<<"Ingrese el nombre de su Banco: ";
  std::getline(std::cin, nombre);
  banco.setNombre(nombre);
  std::vector<Titular> titulares;
  titulares.clear();
  banco.setTitulares(titulares);
  Parse parse;
  parse.guardar(banco);
}

Banco& Modelo::getBanco(){
return banco;
}

bool Modelo::verificarTitular(int idTitular){
  if(banco.verificarTitular(idTitular)){
    return true;
  }
  else{
   return false;
  }
}

bool Modelo::verificarCuenta(int idTitular, std::string idCuenta){
  if(banco.verificarCuenta(idTitular, idCuenta)){
    return true;
  }
  else{
   return false;
  }
}



bool Modelo::verificarCliente(int idTitular, std::string idCliente){
  if(banco.verificarCliente(idTitular, idCliente)){
    return true;
  }
  else{
   return false;
  }
}



void Modelo::crearTitular(int idTitular, std::string tipoTitular, std::string fechaVinculacion){                //se crea un objeto titular con dos objetos Cliente&  y Cuenta& allá en titular el recibe titular(cliente*, cuenta*)
  
  Titular titular(idTitular, tipoTitular,fechaVinculacion);
  banco.addTitular(titular); 
  
  //Guardar
  Parse parse;
  parse.guardar(banco);
}



void Modelo::crearCuenta(int idTitular, std::string id, long saldo, int tipoCuenta){ //Se crea objeto cuenta y se envía al vector de cuentas.

  
  switch (tipoCuenta){
    case 1:{
      CuentaAhorros* cuentaPtr = new CuentaAhorros(idTitular, id, saldo, "CuentaAhorros");
      banco.getTitular(idTitular).addCuenta(cuentaPtr);
      break;
    }
    case 2:{
      CuentaCorriente* cuentaPtr = new CuentaCorriente(idTitular, id, saldo, "CuentaCorriente");
      banco.getTitular(idTitular).addCuenta(cuentaPtr);
      break;
    }
    default:{
      throw std::invalid_argument("Error: "+std::string(__FILE__)+" "+std::to_string(__LINE__));
    }
  }
  Parse parse;
  parse.guardar(banco);
}



void Modelo::crearCliente(int idTitular, std::string identificacion,std::string nombre,std::string telefono){ //Se crea un objeto cliente y se envía al vector cliente.


  
  Cliente* clientePtr = new Cliente(idTitular, identificacion,nombre,telefono);
  banco.getTitular(idTitular).addCliente(clientePtr);
  Parse parse;
  parse.guardar(banco);

}





void Modelo::consignarDinero(int dinero, int idProceso, std::string idCuenta){
  std::vector<Titular>& titulares = banco.getTitulares();
  for(auto& titular: titulares){
    if(titular.getIdTitular() == idProceso){
      std::vector<Cuenta*>& cuentas = titular.getCuentas();
      for (auto& cuenta: cuentas){
        if(cuenta->getNumeroCuenta() == idCuenta){
          cuenta->consignarDinero(dinero);
        }
      }
    }
  }//end primer for
  Parse parse;
  parse.guardar(banco);
}

void Modelo::retirarDinero(int dinero,int idProceso, std::string idCuenta){
  std::vector<Titular>& titulares = banco.getTitulares();
  for(auto& titular: titulares){
    if(titular.getIdTitular() == idProceso){
      std::vector<Cuenta*>& cuentas = titular.getCuentas();
      for (auto& cuenta: cuentas){
        if(cuenta->getNumeroCuenta() == idCuenta){
          cuenta->retirarDinero(dinero);
        }
      }
    }
  }//end primer for
  Parse parse;
  parse.guardar(banco);
}

long Modelo::consultarSaldo(int idProceso, std::string idCuenta){
  std::vector<Titular>& titulares = banco.getTitulares();
  for(auto& titular: titulares){
    if(titular.getIdTitular() == idProceso){
      std::vector<Cuenta*>& cuentas = titular.getCuentas();
      for (auto& cuenta: cuentas){
        if(cuenta->getNumeroCuenta() == idCuenta){
          return cuenta->getSaldo();
        }
      }
    }
  }//end primer for
  return 0;
}



void Modelo::limpiar(){
  
  std::vector<Titular>& titulares = banco.getTitulares();
  for(auto& titular: titulares){
    
    std::vector<Cliente*>& clientes = titular.getClientes();    
    for(auto* cliente: clientes){
      delete cliente;
    }
    clientes.clear();
    std::vector<Cuenta*>& cuentas = titular.getCuentas();
    for(auto* cuenta: cuentas){
      delete cuenta;
    }
    cuentas.clear();
  }
  titulares.clear();
}
