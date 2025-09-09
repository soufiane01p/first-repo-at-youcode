#include <stdio.h>
#include <string.h>

int main() {
      char name[50][50];
      char contact[50][50];
      char she[50];
      int i,c,A;
      i=0;

do{

printf(" 1 . Add a contact :\n");
printf(" 2 . Show all contacts :\n");
printf(" 3 . Search for a contact:\n");
printf(" 4 . Exite:\n");
   scanf("%d",&c);
      getchar();
  
  
      switch(c){
   case 1 :
     do
     {
       printf("Contact name :");
      fgets (name[i], 50, stdin);
      name[i][strcspn(name[i], "\n")] = 0 ;

      printf("Contact :");
      fgets (contact[i], 50, stdin);
      contact[i][strcspn(contact[i], "\n")] = 0 ;

      i++;

      printf("Do you want to add another one? Enter 1 for Yes, 0 for No:");
      scanf("%d",&A);
      getchar();

     } while (A != 0);
     
    break;

    case 2 :
      for(int j = 0 ; j < i ; j++){
          printf("name :%s \n",name[j]);
          printf("contact :%s \n",contact[j]);
       
        }
break;

    case 3 :
      printf("Enter name :");
       fgets (she , 50, stdin);
      she[strcspn(she, "\n")] = 0;  

      for(int j = 0 ; j < i ; j++){
         
        if(strcmp(name[j],she) == 0){
            printf("name :%s \n",name[j]);
        printf("contact :%s \n",contact[j]);
        }
        }
        break;

    case 4 :
      printf("by ");
      break;
    default:
      printf("is not available");

}
}while(c != 4);



    return 0;
}
