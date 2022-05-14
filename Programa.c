#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>



int main(){
 setlocale (LC_ALL, "Portuguese");

        printf("\n\n");
        printf("                                                    /\\                                                              \n");
        printf("                                                   /`:\\                                                             \n");
        printf("                                                  /`'`:\\                                                            \n");
        printf("                                                 /`'`'`:\\                                                           \n");
        printf("                                                /`'`'`'`:\\                                                          \n");
        printf("                                               /`'`'`'`'`:\\                                                         \n");
        printf("                                                |`'`'`'`:|                                                           \n");
        printf("                  _ _  _  _  _                  |] ,-.  :|_  _  _  _                                                 \n");
        printf("                 ||| || || || |                 |  |_| ||| || || || |                                                \n");
        printf("                 |`' `' `' `'.|                 | _'=' |`' `' `' `'.|                                                \n");
        printf("                 :          .:;                 |'-'   :          .:;                                                \n");
        printf("                  \\-..____..:/  _  _  _  _  _  _| _  _'-\\-..____..:/    Bem vindo ao nosso jogo de adivinhação!!   \n");
        printf("                   :--------:_,' || || || || || || || `.::--------:                                                  \n");
        printf("                   |]     .:|:.  `' `'_`' `' `' `' `'    | '-'  .:|                                                  \n");
        printf("                   |  ,-. .[|:._     '-' ____     ___    |   ,-.'-|                                                  \n");
        printf("                   |  | | .:|'--'_     ,'____`.  '---'   |   | |.:|                                                  \n");
        printf("                   |  |_| .:|:.'--' ()/,| |`|`.\\()   __  |   |_|.:|                                                 \n");
        printf("                   |  '=' .:|:.     |::_|_|_|\\|::   '--' |  _'='.:|                                                 \n");
        printf("                   | __   .:|:.     ;||-,-,-,-,|;        | '--' .:|                                                  \n");
        printf("                   |'--'  .:|:. _  ; ||       |:|        |      .:|                                                  \n");
        printf("                   |      .:|:.'-':  ||       |;|     _  |]     _:|                                                  \n");
        printf("                   |      '-|:.   ;  ||       :||    '-' |     '--|                                                  \n");
        printf("                   |  _   .:|].  ;   ||       ;||]       |   _  .:|                                                  \n");
        printf("                   | '-'  .:|:. :   [||      ;|||        |  '-' .:|                                                  \n");
        printf("               ,', ;._____.::-- ;---->'-,--,:-'<'--------;._____.::.`.                                               \n");
        printf("              ((  (          )_;___,' ,' ,  ; //________(          ) ))                                              \n");
        printf("               `. _`--------' : -,' ' , ' '; //-       _ `--------' ,'                                               \n");
        printf("                    __  .--'  ;,' ,'  ,  ': //    -.._    __  _.-  -                                                 \n");
        printf("                `-   --    _ ;',' ,'  ,' ,;/_  -.       ---    _,                                                    \n");
        printf("                    _,.   /-:,_,_,_,_,_,_(/:-\\   ,     ,.    _                                                      \n");
        printf("                  -'   `-'--'-'-'-'-'-'-'-''--'-' `-'`'  `'`' `                                                      \n");
        printf("\n\n");


     int segundos = time(0);
     srand(segundos);

     int numeroGrande = rand();

     int numerosecreto = numeroGrande % 100;
     int chute;
     int tentativas = 1;
     double pontos = 1000;

     int acertou = 0;


    int nivel;
    printf("Qual o nível da dificuldade?\n");
    printf(" (1) Fácil (2) Médio (3) Dificil\n\n");
    printf("Escoolha: ");
    scanf("%d", &nivel);

    int numeroDeTentativa;

    switch(nivel){
        case 1:
            numeroDeTentativa = 20;
            break;

        case 2:
            numeroDeTentativa = 15;
            break;

        default:
            numeroDeTentativa = 6;
            break;

}

        for(int i = 1; i <= numeroDeTentativa; i++){

         printf("Tentativa %d\n", tentativas);
         printf("Qual é o seu chute? ");

         scanf("%d", &chute );
         printf("Seu chute foi %d\n", chute);

         if(chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue;
         }

         int acertou = (chute == numerosecreto );
         int maior = chute > numerosecreto;

         if(acertou){
            break;
        }

        else if(maior){
            printf("Seu número foi maior que o número secreto\n");
        }

        else {
            printf("Seu número foi menor que o número secreto\n");
        }
        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) /(double)2;
        pontos = pontos - pontosperdidos;
    }
    printf("Fim de jogo!\n");

    if (acertou){

           printf("\n\n");
           printf("                      $$$$$$$$$$$$$$$$$$$$                       \n");
           printf("                    $$$$$$$$$$$$$$$$$$$$$$$$$$$                  \n");
           printf("                 $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$               \n");
           printf("                $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$           \n");
           printf("             $$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$           \n");
           printf("            $$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$         \n");
           printf("           $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$        \n");
           printf("         $$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$       \n");
           printf("        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      \n");
           printf("        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      \n");
           printf("        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      \n");
           printf("        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ $$$$      \n");
           printf("        $$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   $$$$      \n");
           printf("        $$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$      \n");
           printf("         $$$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$$       \n");
           printf("          $$$$$     $$$$$$$$$$$$$$$$$$$$$$$$$         $$$        \n");
           printf("            $$$$          $$$$$$$$$$$$$$$           $$$$         \n");
           printf("             $$$$$                                $$$$$          \n");
           printf("              $$$$$$                             $$$$$           \n");
           printf("                $$$$$$$$                    $$$$$$$              \n");
           printf("                   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                \n");
           printf("                      $$$$$$$$$$$$$$$$$$$$$$                     \n");
           printf("\n\n");


        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas!", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else{
        printf("Você perdeu! Tente de novo!\n");

         printf("\n\n");
         printf("                           $$$$$$$$$$$$$$$$$$$$                                        \n");
         printf("                          $$$$$$$$$$$$$$$$$$$$$$$$$$$                                  \n");
         printf("                       $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$         $$   $$$$$            \n");
         printf("       $$$$$$        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$$$$$$$$           \n");
         printf("   $$ $$$$$$      $$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$       $$$$$$$$             \n");
         printf("     $$$$$$$$$     $$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$    $$$$$$$$            \n");
         printf("       $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$            \n");
         printf("       $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  $$$$$$              \n");
         printf("        $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$             \n");
         printf("         $$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$$           \n");
         printf("        $$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$$          \n");
         printf("        $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$        \n");
         printf("       $$$$$$$$$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$       \n");
         printf("       $$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$             \n");
         printf("      $$$$       $$$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      $$$$                      \n");
         printf("                 $$$$$     $$$$$$$$$$$$$$$$$$$$$$$$$         $$$                       \n");
         printf("                   $$$$          $$$$$$$$$$$$$$$           $$$$                        \n");
         printf("                    $$$$$                                $$$$$                         \n");
         printf("                     $$$$$$      $$$$$$$$$$$$$$        $$$$$                           \n");
         printf("                       $$$$$$$$     $$$$$$$$$$$$$   $$$$$$$                            \n");
         printf("                          $$$$$$$$$$$  $$$$$$$$$$$$$$$$$                               \n");
         printf("                             $$$$$$$$$$$$$$$$$$$$$$                                    \n");
         printf("                                     $$$$$$$$$$$$$$$                                   \n");
         printf("                                         $$$$$$$$$$$$                                  \n");
         printf("                                          $$$$$$$$$$$                                  \n");
         printf("                                           $$$$$$$$                                    \n");
         printf("\n\n");
    }



}
