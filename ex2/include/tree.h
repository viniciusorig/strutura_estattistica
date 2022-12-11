#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

#include <stdbool.h>

struct aluno;
struct cabeca;

struct cabeca *create();
struct aluno * _create_(int idade, float h);
struct aluno * _begin_(struct cabeca *arvore);

void add(struct cabeca *a, int idade, float h);
void elimina(struct cabeca *a);
float desvio(struct cabeca *c);
float media(struct cabeca *c);
float padroniza(float x, struct cabeca *c);
char * result(float x, struct cabeca *c);
float matriz_z(float x);
int *localiza(int x);
int localizacao(int x);

#endif