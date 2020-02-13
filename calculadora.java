import java.util.Scanner;

public class Main{
	public static void main(String[]args) {
    
    
    Scanner input = new Scanner(System.in);
    System.out.print("digite um numero: ");
    int a = input.nextInt();
    
    System.out.print("digite um segundo numero: ");
    int b = input.nextInt();
    
    System.out.println("escolha uma opção:\n 1-somar\n 2-multiplicar\n 3-subtrair\n 4-dividir\n 5-parar");
    int op = input.nextInt();
    while (op!=5){
	    if(op==1){
	      int soma = a+b;
	      System.out.printf("esses numeros somados é equivalente a %d\n",soma);
	    }
	    else if(op==2){
	      int mult = a*b;
	      System.out.printf(" os numeros multiplicados são equivalentes a %d\n",mult);
	    }
	    else if (op==3){
	      int sub = a-b;
	      System.out.printf("a subtração desses numeros é equivalente a %d\n ", sub);
	    }
	    else if (op==4){
	      int div = a/b;
	      System.out.printf("a divisão desses numeros é igual a %d\n",div);
	    }
	    else if(op==5){
	      break;
      
	    }
	    else{
	      System.out.println("por favor digite um opção válida");
	    }
	    System.out.println("escolha uma opção:\n 1-somar\n 2-multiplicar\n 3-subtrair\n 4-dividir\n 5-parar");
	    op = input.nextInt();
	    }
	}
}
