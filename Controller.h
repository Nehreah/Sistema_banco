/*
    Clase: Controller
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    Archivo: Controller.h
    Resumen: Implementación de la clase Controller que maneja la lógica del juego a través del uso de las clases view y modelo.

    Descripción:
    Este proyecto pretende construir un sistema bancario basado en la creación de titulares que contiene clientes y cuentas.
    El sistema permitirá la consignación, retiro y consulta de saldo vinculadas a un Id de titularidad.

    Información CRC:
    
    Clase: Controller

    Responsabilidades:
        - Flujo principal del sistema a través model y view.
        - Captura y válida las entradas del usuario.

   Colaboradores:

    Model: Interactúa con model para ordenar la carga de archivos de texto, 
          solicitar la actualización de coordenadas de los vehículos y consultar el estado lógico del juego.

    View: Actualiza la interfaz gráfica en la consola para enseñar la información de las titularidades bancarias.

    Este es un proyecto del curso FPOO de la Universidad del Valle, 
    desarrollado con fines académicos. Puede ser utilizado con fines 
    académicos dando los créditos de la autoría.


    Autores:
    Estudiante: Javier Felipe Contreras Díaz
    Código: 202535936
    Email: contreras.javier@correounivalle.edu.co
		
    Fecha: Junio 2026
*/



#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "View.h"
#include "Modelo.h"



class Controller{

private:

View& vista;
Modelo& modelo;

public:

Controller(View& auxVista, Modelo& auxModelo);

void iniciarSistema();

void añadirUsuario();

void añadirCuenta();

void añadirCliente();

void transferencia();

void limpiar();


};

#endif
