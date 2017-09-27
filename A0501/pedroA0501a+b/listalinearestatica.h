#ifndef LISTALINEARESTATICA_H
#define LISTALINEARESTATICA_H

#ifdef __cplusplus
extern "C" {
#endif
#define MAX_ELEM 20
#define POS_FINAL -1
 
struct Lista{
    int n;
    char elem[MAX_ELEM];
};

void startList(struct Lista*);
char access(struct Lista, int);
void change(struct Lista*, int, char);
void insert(struct Lista*, int, char);
void remover(struct Lista*, int);
void unity(struct Lista*, struct Lista*);
void invert(struct Lista*);
struct Lista subList(struct Lista, int, int);
void insertOrder(struct Lista*, char);
void showList(struct Lista);
int find(struct Lista*, char);
struct Lista intercalate(struct Lista*, struct Lista*);
void ordemC(struct Lista*);
void ordemD(struct Lista*);

#ifdef __cplusplus
}
#endif

#endif /* LISTALINEARESTATICA_H */

