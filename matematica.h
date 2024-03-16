#ifndef _matematica_h
#define _matematica_h



typedef struct{
    float x;
}ponto;

/**
 * Calcula o seno de um angulo especificado
 *
 * @param angulo_radianos Angulo em radianos para calcular seu seno.
 * @return valor do seno do angulo
 */
float calcular_seno(float x);

/**
 * Calcula o cosseno de um angulo especificado
 *
 * @param angulo Angulo em radianos para calcular seu cosseno.
 * @return valor do cosseno do angulo
 */
 float calcular_cosseno(float x);

 /**
 * Calcula a tangente de um angulo especificado
 *
 * @param angulo Angulo em radianos para calcular sua tangente.
 * @return valor da tangente do angulo
 */
float calcular_tangente(float x);




#endif

