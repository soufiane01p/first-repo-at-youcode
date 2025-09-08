#include <stdio.h>
#include <string.h>


int main() {
 char tabism[50][50], tabmal[50][50];
    float tabpix[50];
    int tabkm[50];
    int taille;
    int i, te, j, kim;
    char smiya[50], k[50]; 
printf("chhal mn ktab :");
scanf("%d",&taille);
for(i=0;i<taille;i++){
    printf("smiya dyal lktab :");
scanf("%s",tabism[i]);
printf("lmoalf dyalo:");
scanf("%s",tabmal[i]);
printf("taman dyali  :");
scanf("%f",&tabpix[i]);
printf("kmya  :");
scanf("%d",&tabkm[i]);
}
do{
    printf("khtar 1 ila baghi tchof mktaba ach fiha \n :");
    printf("khtar 2 ila baghi tmsh chi ktab \n :");
    printf("khtar 3 ila baghi tchof chhal mn ktab 3ndk \n :");
    printf("khtar 4 ila baghi tbdl lkimiya \n :");
    printf("khtar 5 ila baghi tkhrj \n :");
scanf("%d",&te);
switch(te){
    case 1 : 
for(i=0;i<taille;i++){
    printf("smiya dyal lktab :%s",tabism[i]);
printf("lmoalf dyalo:%s",tabmal[i]);
printf("taman dyali  :%.2fDH",tabpix[i]);
printf("kmya  :%d",tabkm[i]);
}break;
    case 2 :
  printf("chno smit lktab li baghi tmsho: ");
                fgets(smiya, 50, stdin);
                smiya[strcspn(smiya, "\n")] = 0;

                for(i = 0; i < taille; i++){
                    if(strcmp(tabism[i], smiya) == 0){
                        for(j = i; j < taille-1; j++){
                            strcpy(tabism[j], tabism[j+1]);
                            strcpy(tabmal[j], tabmal[j+1]);
                            tabpix[j] = tabpix[j+1];
                            tabkm[j] = tabkm[j+1];
                        }
                        taille--;
                        printf("ktab tms7 ✅\n");
                        break;
                    }
                }
                break;
        
        
        
    case 3 :
    printf("hahowa chhal mn ktab 3ndk :%d",taille);
    break;
    
case 4 : 
      printf("smiya dyal ktab : ");
      scanf("%s",k);
printf("chno hiya ki miya : ");
scanf("%d",&kim);
                for(i = 0; i < taille; i++){
                    if(strcmp(tabism[i], k) == 0){
                        tabkm[i] = kim;
                        printf("lkimiya tbdlat ✅\n");
                        break;
                    }
                }
                break;
case 5 :
printf("by by");
break;
default:
printf("makaynch had likhtiyar");
}
}while(te!=5);
    return 0;
}