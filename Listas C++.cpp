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
int main(){
	int cont, codprod;
	Produtos* listaProdutos;
	listaProdutos = inicializar();
	
	for(cont=0;cont<3;cont++){
		printf("\n informe o codigo do produto: ");
		scanf("%d",&codprod);
		listaProdutos = inserir (listaProdutos, codprod);
	}
	printf ("Lista Produtos: \n");
	imprimir(listaProdutos);
	printf("\n Informe o codigo do produto para pesquisa: "); //*Pesquisar se um produto existe
	scanf("%d", & codprod);
	if(busca(listaProdutos, codprod)==NULL){
		printf("\n\n Produto Nao Encontrado ! \n");
	}
	else{
			printf("\n\n Produto Encontrado ! \n");
	}
	return 0;
}
