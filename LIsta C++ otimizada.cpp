#include <stdio.h>
#include <stdlib.h>

struct listaProd{ //*Estrutura da Lista 
	int codigo, codprod;
	struct listaProd* prox;
};

typedef struct listaProd Produtos; 

Produtos* inicializar(void){
	return NULL;
}

Produtos* inserir(Produtos* l, int i){
	Produtos* novo = (Produtos*) malloc(sizeof (Produtos));
	novo -> codigo = i;
	novo -> prox = l;
	return novo;
}

Produtos* imprimir(Produtos* listaProdutos){
	Produtos* p;
	for(p = listaProdutos; p!=NULL; p=p->prox){
		printf("%d\n",p->codigo);
	}
}

Produtos* busca(Produtos* l, int v){
	Produtos* p;
	for(p = l; p!= NULL; p=p->prox){
		if(p->codigo==v)
			return p;
	}
	return NULL;
}

Produtos* retira(Produtos* l, int v){
	Produtos* ant = NULL;
	Produtos* p = l;
	
while (p!=NULL && p->codigo != v){
	ant = p;
	p = p->prox;
}
	
if(p == NULL)
	return NULL;
	
if(ant == NULL){
	l = p->prox;
}
else{
	ant->prox = p->prox;
}
	return l;
	
}
int main(){
	int cont, codprod;
	Produtos* listaProdutos;
	listaProdutos = inicializar();
	
	for(cont=0;cont<3;cont++){
	printf("\n Informe o codigo do produto: ");
	scanf("%d",&codprod);
	listaProdutos = inserir (listaProdutos, codprod);
}
	printf ("\nLista Produtos: \n");
	imprimir(listaProdutos);
	printf("\n Informe o codigo do produto para pesquisa: "); //*Pesquisar se um produto existe
	scanf("%d", & codprod);
	if(busca(listaProdutos, codprod)==NULL){
		printf("\n\n Produto Nao Encontrado ! \n");
}
	else{
		printf("\n\n Produto Encontrado ! \n");
	
	}
	
	printf("\nInforme o codigo do produto a ser removido da lista: ");
	scanf("%d, &codprod");
	if(retira(listaProdutos, codprod)==NULL){
		printf("\n\nProduto nao Removido!\n");
	}
	
	else{
	printf("\n\aProduto Removido!\n");
	printf("\nNova Lista de Produtos:\n");
	imprimir(listaProdutos);
	}
	
	return 0;
}
