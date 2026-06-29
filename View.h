#ifndef VIEW_H
#define VIEW_H

#include <tuple>
#include <string>

class View{

public:
View();
void mostrarTitulo();
void cargarBanco(int opcion);
void mostrarMenu();
std::tuple<std::string,std::string> interfazCrearTitular();
std::tuple<std::string,long,int> interfazCrearCuenta();
std::tuple<std::string,std::string,std::string> interfazCrearCliente();
};
#endif
