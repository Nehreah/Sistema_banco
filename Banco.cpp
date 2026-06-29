/*
    Proyecto: Sistema Bancario
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Banco.cpp
    Resumen: Definición de la clase Banco, que gestiona el conjunto de titulares del sistema.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Autor:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
        
    Fecha: Junio 2026
*/



#include "Banco.h"


Banco::Banco(std::string auxNombre): nombre(auxNombre){
}

std::string Banco::getNombre(){
  return nombre;
}

Titular& Banco::getTitular(int idTitular){
  for (auto& titular: titulares){
    if(titular.getIdTitular()== idTitular){
      return titular; 
    }
  }
  throw std::runtime_error("Error: "+std::string(__FILE__)+" "+std::to_string(__LINE__));
}

std::vector<Titular>& Banco::getTitulares(){
    return titulares;
}


bool Banco::verificarTitular(int idTitular){
  for (auto& titular: titulares){
    if(titular.getIdTitular()== idTitular){
      return true;
    }
  }
  return false;
}



bool Banco::verificarCuenta(int idTitular, std::string idCuenta){
  for (auto& titular: titulares){
    if(titular.getIdTitular()== idTitular){
      std::vector<Cuenta*>& cuentas = titular.getCuentas();
      for(auto& cuenta: cuentas){
        if(cuenta->getNumeroCuenta() == idCuenta){
          return true;
        }
      }
    }
  }
  return false;
}



bool Banco::verificarCliente(int idTitular, std::string idCliente){
  for (auto& titular: titulares){
    if(titular.getIdTitular()== idTitular){
      std::vector<Cliente*>& clientes = titular.getClientes();
      for(auto& cliente: clientes){
        if(cliente->getIdentificacion() == idCliente){
          return true;
        }
      }
    }
  }
  return false;
}



void Banco::addTitular(Titular titular){
  titulares.push_back(titular);
}

void Banco::setTitulares(std::vector<Titular> auxTitulares){
  titulares = auxTitulares;
}





void Banco::setNombre(std::string auxNombre){
  nombre = auxNombre;
}
