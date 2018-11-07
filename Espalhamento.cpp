#include<stdio.h>

struct hash{
	int value;
	int key;
};

void display(struct hash ar[], int size)
{
	int i;
	printf("value\tkey\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t%d\n", ar[i].value,ar[i].key);
	}
}

int main()
{
	int size,i, temp;
	
	printf("Entre com o tamanho da tabela:");
	scanf("%d",&size);
	
	struct hash hash_table[size];
	
	printf("Entre com os elementos:");
	
	for(i=0;i<size;i++)
	{
		scanf("%d", &temp);
		hash_table[temp % size].value = temp;
		hash_table[temp % size].key = temp%size;
	}
	
	printf("\n");
	
	display(hash_table,size);
}