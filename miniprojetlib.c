#include <stdio.h>
#include <string.h>

int main() {
    char tabism[50][50], tabmal[50][50],smiya[50],k[50];
    float tabpix[50];
    int tabkm[50];
    int taille;
    int i,te,j,kim;

    printf("chhal mn ktab: ");
    scanf("%d", &taille);
    getchar();

    for (i = 0; i < taille; i++) {
        printf("smiya dyal lktab: ");
        fgets(tabism[i], 50, stdin);
        tabism[i][strcspn(tabism[i], "\n")] = 0;

        printf("lmoalf dyalo: ");
        fgets(tabmal[i], 50, stdin);
        tabmal[i][strcspn(tabmal[i], "\n")] = 0;

        printf("taman dyalo: ");
        scanf("%f", &tabpix[i]);
        getchar();

        printf("kmya: ");
        scanf("%d", &tabkm[i]);
        getchar();
    }

   do{
     printf("\n--- MENU ---\n");
        printf("1 - tchof mktaba\n");
        printf("2 - tmsh ktab\n");
        printf("3 - chhal mn ktab 3ndk\n");
        printf("4 - tbdl lkimiya\n");
        printf("5 - tkhrj\n");
        scanf("%d", &te);
        getchar(); 
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
      fgets (k,50,stdin);
      k[strcspn(k,"\n")]=0;
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
