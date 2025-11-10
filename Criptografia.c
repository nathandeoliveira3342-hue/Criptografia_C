#include <stdio.h>

#include <string.h>



int main() {

  char palavra[11]; //vetor

  int shift, pulo; //variaveis



//digitar a palavra para criptografia

  printf("Digite uma palavra: ");

  scanf("%s", palavra);

   

//o valor do shift

  printf("Digite o valor do shift: ");

  scanf("%d", &shift);



  //o pulo da progressão aritmetica

  printf("Digite o valor do pulo: ");

  scanf("%d", &pulo);



   

 //O for vai passar por todas as letras da palavra, uma por uma

  for (int i = 0; i < strlen(palavra); i++) {

    char x = palavra[i];



//condição do shift

    if (x >= 'a' && x <= 'z') {

      x = ((x - 'a' + shift) % 26) + 'a';

    }

    //condição do pulo

 else if(x >= 'a' && x <= 'z'){

  char x= ((x - 'a' + shift + pulo) % 26) + 'a';

 }

    palavra[i] = x;

  }

//a palavra cifrada

  printf("Palavra criptografada: %s\n", palavra);



  return 0;