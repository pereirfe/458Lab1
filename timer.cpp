#include <iostream>
#include <cstdio>
#include <ctime>
#include <string>


// USAR ASPAS PARA PASSAR PARAMETROS

int main(int argc, char* argv[]) {
    std::clock_t start;
    double duration;
    std::string a = "./";

    if(argc != 2){
      fprintf(stderr, "Algoritmo nao especificado");
      exit(-1);
    }
    
    a = a + argv[1];
        
    start = std::clock();

    system(a.c_str());
    
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    std::cout<< duration <<'\n';
    
    return 0;
}
