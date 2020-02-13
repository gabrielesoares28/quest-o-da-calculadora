print("questão da calculadora em python")
a=int(input("digite o primeiro numero: "))
b=int(input("digite o segundo numero: "))
op=input("digite uma opção\n 1- para fazer uma multiplicação\n 2- para soma\n 3-para subtrair\n 4-para dividir\n 5-para parar o programa")
while op!='5':
  if op=='1':
    mult=a*b
    print(mult)
  elif op=='2':
    soma=a+b
    print(soma)
  elif op=='3':
    sub= a-b
    print(sub)
  elif op=='4':
    div=a/b
    print(div)
  else:
    print('POR FAVOR DIGITE UMA OPÇÃO VALIDA.')
  op=input("digite uma opção\n 1- para fazer uma multiplicação\n 2- para soma\n 3-para subtrair\n 4-para dividir\n 5-para parar o programa")
