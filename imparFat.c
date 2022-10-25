/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<locale.h>
fatorial(int menorImpar)
{int auxfat=1;
        if (menorImpar!=0 ||menorImpar!=1)
            for (int i=menorImpar; i>0; i--)
            {
                auxfat=auxfat*i;

            }
        printf("Menor impar informado: %d \n", menorImpar);
        printf("O fatorial de %d é: %d",menorImpar,auxfat);
    }

int num[10];
int main()
{   setlocale(LC_ALL,"");
    int k=0, menorImpar=0, contador=0 , qtImpar=0;
    while(k<3 || k>10){
     printf("Digite a quantidade de termos que deve  ser maior ou igual a 3 e menor ou igual a 10\n");
     scanf("%d",&k);
     if(k<=0)
     {
         printf("Quantidade invalida\n");
     }
        }

    for(contador;contador<k;contador++)
    {
        printf("Digite numero na posição=%d\n",contador);
        scanf("%d",&num[contador]);
        if(num[contador]%2 != 0)
        {
            qtImpar++;
            if(qtImpar==1)
            {
                menorImpar=num[contador];
            }
            else if(num[contador]<menorImpar)
            {
                menorImpar = num[contador];
            }
        }

    }
printf("Exibição do conteudo do vetor num\n");
for(contador=0;contador<k;contador++)
printf("O numero na posição[%d]=%d\n",contador,num[contador]);


    if(qtImpar==0)
    {
        printf("Nenhum numero impar foi digitado \n");
        printf("Não foi possível calcular o fatorial \n");
    }

    else if(menorImpar<0)
    {
        printf("Menor impar informado: %d \n", menorImpar);
        printf("Não foi possível calcular o fatorial \n");
    }
    else
    {fatorial(menorImpar);}
    }

