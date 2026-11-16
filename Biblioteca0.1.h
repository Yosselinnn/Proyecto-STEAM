#ifndef PSTEAM_ES_H
#define PSTEAM_ES_H

#include <iostream>
#include <string>
#include <cmath>

#define incluir include
#define devolver return
#define principal main

//declaraciones de tipos de datos
using entero=int;
using valor_corto=short;
using valor_grande=long;
using decimal=float;
using doble=double;
using caracter=char;
using palabra=std::string;              
using logica=bool;
using numero_positivo=unsigned;
using numero_negativo=signed;
using vacio=void;

//entradas y salidas

template <typename T>
    inline void imprimir(const T& valor){
        std::cout << valor;
    }
template <typename T, typename U, typename... Args> 
        inline void imprimir(const T& valor, const U& valor2, const Args&... valores){
            std::cout << valor;
            imprimir(valor2, valores...);   
        }

template <typename T>
    inline void leer( T& valor){
    std::cin >>valor;
    }

    template <typename T>
    inline void error(const T& valor){
        std::cerr << valor;
    }

    template <typename T>
    inline void registro(const T& valor){
        std::clog << valor;
    }

    template <typename T>
    inline void imprimir_caracter(const T& valor){
        std::wcout << valor;
    }

    template <typename T>
    inline void leer_caracter(T& valor){
        std::wcin >> valor;
    }

template <typename T>
inline void advertencia(const T& valor){
    std::wcerr << valor;}

    template <typename T>
    inline void registro_archivo(const T& valor){
        std::wclog << valor;
    }

    //cadenas de texto
    inline std::size_t cantidad_caracteres(const std::string& cantidad){
        return cantidad.length();
    }

    inline void leer_linea(std::string& linea){
        std::getline(std::cin, linea);
    }

    inline bool texto_vacio(const std::string& texto){
        return texto.empty();
    }

    inline std::string convertir_a_texto(int numero){
        return std::to_string(numero);
    }
        inline void borrar_contenido( std::string& texto){
         texto.clear();
    }

    inline std::string extraer_texto(const std::string& texto){
        return texto.substr(0, 1);
    }

    inline std::string buscar_texto(const std::string& texto, const std::string& subtexto){
        return texto.find(subtexto) != std::string::npos ? "Encontrado" : "No encontrado";
    }

    inline void agregar_texto(std::string& texto_original, std::string& texto_a_agregar){
        texto_original.append(texto_a_agregar);
    }

    inline void insertar_texto(std::string& texto_original, const std::string& texto_a_insertar, std::size_t posicion){
        texto_original.insert(posicion, texto_a_insertar);
    }

    inline void eliminar_caracteres(std::string& texto, std::size_t posicion, std::size_t cantidad){
        texto.erase(posicion, cantidad);
    }

    // estructuras de control
#define si if
#define sino else

//matematicas
inline double raiz_cuadrada(double valor){
    return std::sqrt(valor);
}

inline double raiz_cubica(double valor){
    return std::cbrt(valor);
}

inline double redondear_numeros(double valor){
    return std::round(valor);
}
  
inline double redondear_hacia_arriba(double valor){
    return std::ceil(valor);
}

inline double redondear_hacia_abajo(double valor){
    return std::floor(valor);
}

inline double valor_absoluto(double valor){
    return std::abs(valor);
}

inline double elevar_potencia(double base, double exponente){
    return std::pow(base, exponente);
}
#endif  

