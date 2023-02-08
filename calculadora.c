#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("CALCULADORA");
  int menu,soma=0, multi=0,sub=0;
  double div;
  printf("Informe qual operação deseja realizar:\n1-SOMAR\n2-SUBTRAIR\n3-MULTIPLICAR\n4- DIVIDIR\n5- PARAR: ");
  scanf("%d", &menu);
  while (menu!=5){
    if (menu==1){
      int a, cont=0;
      printf("Informe os números que deseja somar, informe 0 quando tiver finalizado a inserção dos dados: ");
      scanf("%d",&a);
      while (a!=0){
      soma= soma+a;
      cont=cont+1;
      printf("Informe os números que deseja somar, informe 0 quando tiver finalizado a inserção dos dados: ");
      scanf("%d",&a);
  }
  printf("Foram digitados %d e a soma dos números correspondem a : %d",cont,soma);
    }
    else if (menu==2){
      int b,c;
      printf("Informe o primeiro numero que deseja subtrair: ");
      scanf("%d",&b);
      printf("Informe o segundo numero que deseja subtrair: ");
      scanf("%d",&c);
      sub= b-c;
      printf("O resultado da subtração é: %d",sub);
        
    }
    else if (menu==3){
      int d,e;
      printf("Informe o primeiro numero que deseja multiplicar: ");
      scanf("%d",&d);
      printf("Informe o segundo numero que deseja multiplicaR: ");
      scanf("%d",&e);
      multi= d*e;
      printf("O resultado da multiplicaçao é: %d",multi);
      
    }
    else if (menu==4){
      int f,g;
      printf("Informe o primeiro numero que deseja dividir: ");
      scanf("%d",&f);
      printf("Informe por quanto deseja dividir: ");
      scanf("%d",&g);
      if (g!=0){
        div= f/g;
      printf("O resultado da multiplicaçao é: %d",multi);
        
      }
      else{
        printf("ERRO! NÃO É POSSIVEL DIVIDIR POR 0.");
        
      }
    
    }
    else if (menu==5){
      printf("VOLTE!");
      break;
    }
    else {
      printf("opção invalida!");
      printf("\nInforme qual operação deseja realizar:\n1-SOMAR\n2-SUBTRAIR\n3-MULTIPLICAR\n4- DIVIDIR\n5- PARAR: ");
  scanf("%d", &menu);
    }
    
  printf("\nInforme qual operação deseja realizar:\n1-SOMAR\n2-SUBTRAIR\n3-MULTIPLICAR\n4- DIVIDIR\n5- PARAR: ");
  scanf("%d", &menu);
    }
  
  return 0;
}
