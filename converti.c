
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/* per far funzionare il codice le serve un file.txt, // il programma converita qualsiasi file.txt
il file.txt ci ho scritto 'benvenuto utente@!!'*/
/*il codice andra a prendere il contenuto all'interno del file.txt (benvenuto utente@!!), sara convertito con  l'opzione switch in  (in maiuscolo, minuscolo, elimando i caratteri speciali) 
l opzione sara a piacere del utente.*/

int main (){
FILE *filePTR;

 char riga [57];  // ho assegnato delle variabili
  int i;
   int j;        

 filePTR= fopen ("file.txt","r");  // benvenuto utente 
       if (filePTR==NULL) {
             printf("il file non é stato aperto correttamente");  // se il file non viene eseguito correttamente comparera questa scritta.
                 return 1; }

            
        while (!feof(filePTR)) 
            {
               fgets(riga,57,filePTR);
                    printf("%s",riga);
                                               
int numero;  //ho assegnato una variabile da usare per far funzionare tutta la serie switch ((numero))
 
     {
     printf("gentile utente, inserisca un numero: ");                      
       scanf("%d", &numero);
     }
           
     switch (numero){
     
      case 1 :
        printf("numero 1 inserito con successo :)\n");     //stampa il contenuto all'interno del file.txt in grande
          while(riga[i]){
           putchar (toupper(riga[i]));
           i++;
         }
        printf("la coversione è andata a buon fine\n");
        return 0;
        break;
           
      case 2 :
           printf("numero 2 inserito con successo :)\n");
                  
           while(riga[i]){
           putchar (tolower(riga[i]));                     //stampa il numero del file text. in piccolo
           i++;
           }
            printf("la conversione è andata a buon fine :) \n");
           printf("arrivederla");
        return 0;
          break;
  
      case 3 :
          printf("numero 3 inserito con successo\n");  // toglie i caratteri speciali

      
         for (int i = 0, j; riga[i] != '\0'; ++i) {
             while (!(riga[i] >= 'a' && riga[i] <= 'z') && !(riga[i] >= 'A' && riga[i] <= 'Z') && !(riga[i] == '\0')) {
                 for (j = i; riga[j] != '\0'; ++j) {
               riga[j] = riga[j + 1];
           }
           riga[j] = '\0';
        }
      }

printf ("congratulazione utente :) \n");
       printf("la stringa e stata convertita con successo in : ");
          printf("arrivederla");

           puts(riga);
             return 0;

           break;
         
      case 4 :
      printf("numero 4 inserito con successo/n");

         while(riga[i]!='\0')
         {
            if(riga[i]=='e')
        {
            riga[i]='z';
        }
        i++;
    
        }

    printf("-------------------------------------");
    printf("\nriga presa 'e' che diventa 'z'");
    printf("\n-------------------------------------\n");
    printf("%s",riga);
         return 0; 
          break;
      case 5 :
      printf("numero 5 inserito con successo/n");
         return 0;
          break;
         
        default:
           printf("Errore: scelta non valida\n");
            
          }
          }
         }
          
          

          
         
          
        
        
        
        
