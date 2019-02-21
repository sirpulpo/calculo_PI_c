#include<stdio.h>

void fPortada();
void fCalculaPI();

main()
{
	int o;
	fPortada();
	do{
		fCalculaPI();
		printf("Desea repetir el programa?\n");
		printf("\tSi=1\tNo=0\t");
	    scanf("%d",&o);
	    while(o!=1 && o!=0){
	    	printf("\nLa opcion no es valida.");
		  	printf("\nIntente de nuevo.");
		  	printf("\nDesea repetir el programa?\n");
		    printf("\tSi=1\tNo=0\t");
		    scanf("%d",&o);
	    }
	    system("cls");
	}while(o==1);
}

void fPortada(){
	system("color f1");
	printf("\n\t\t\tPrograma 04 Valor de PI");
	printf("\n\t\t\t_______________________");
	printf("\n\t\tEste programa calculara el valor de PI dependiendo");
	printf("\n\t\tde la cantidad que tu decidas para el calculo mediante");
	printf("\n\t\tla siguiente formula.");
	printf("\n\t\t2*(2/1)(2/3)(4/3)(4/5)(6/5)(6/7)(8/7)(8/9)...\n\n\n");

	system("pause");
	system("cls");
}

void fCalculaPI()
{
	int i;
	double p = 1, r = 1;
	long int n;
	printf("Que aproximacion quieres al calcular PI: ");
	scanf("%d",&n);
	while(n <= 0){
		printf("Debe ser un numero mayor que 0 por favor.\n");
		printf("Cuantos decimales quieres calcular de PI: ");
	    scanf("%d",&n);
	}
	for(i = 1 ; i <= n ; i++){
		if(i % 2 == 0){
			p = p * ((double)i / ((double)i+1));
		}
		else{
			p = p * (((double)i+1) / (double)i);
		}
	}
	r = p * 2;
	printf("El resultado es:\n");
	printf("\t%.11lf\n",r);
}
