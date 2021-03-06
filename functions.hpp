#ifndef _FUNCTIONS_CE2_
#define _FUNCTIONS_CE2_

#include <string>
#include <vector>

#include "classes.hpp"

//Cabecalhos de funcoes
int resolverSistema(std::vector< std::vector<long double>>&, int&);
int numero(std::vector<std::string>&, std::string, int&);
void leituraNetlist(std::vector<std::string>&, 
		std::vector<Elemento>&, 
		std::vector<Elemento>&, 
		int, 
		std::string&, 
		int&,
		double&,
		double&,
		std::string&,
    unsigned&,
    std::vector<Elemento>&);

void adicionarVariaveis(std::vector<std::string>&, std::vector<Elemento>&, int&, int&);
void listarVariaveis(std::vector<std::string>, int);
void mostrarNetlist(std::vector<Elemento>);
void montarSistemaDC(std::vector<Elemento>&, std::vector< std::vector<long double>>&, int);
void mostrarSistema(std::string, std::vector<std::vector<long double>>, int);
int simulacaoTrapezios(std::vector<Elemento>, std::vector<Elemento>, std::vector<std::string>&, int, int&, double, double, unsigned, std::vector<std::vector<long double>>&, std::vector<Elemento>&);
void adicionarVariaveisDinamicas(std::vector<std::string>&, std::vector<Elemento>&, int&, int&);
std::vector<long double> resolverPontoOperacao(std::vector<std::vector<long double>>, std::vector<Elemento>, std::vector<Elemento>, int, double); 

void adicionarEstampasComponentesVariantes(std::vector<std::vector<long double>>&, std::vector<Elemento>, std::vector<long double>, double, double); 

void escreverResultadosNoArquivo(std::string, std::vector<std::vector<long double>>, double, double, unsigned, std::vector<std::string>);


std::vector<long double> resolverNewtonRaphson(
        std::vector<std::vector<long double>>,
        std::vector<Elemento>,
        int, 
        std::vector<long double>, 
        bool&);
#endif
