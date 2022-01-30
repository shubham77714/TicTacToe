#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void draw(char arr[]){
   system("cls"); 
   printf("\033[1;36m");
   printf("\t\t\t\t\t\ttic-tac-toe\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
   printf("\033[1;33m");
   printf("\t\t\t    |    |    \n");
   printf("\t\t\t  %c |  %c |  %c \n",arr[0],arr[1],arr[2]);
   printf("\t\t\t____|____|____\n");
   printf("\t\t\t    |    |    \n");
   printf("\t\t\t  %c |  %c |  %c \n",arr[3],arr[4],arr[5]);
   printf("\t\t\t____|____|____\n");
   printf("\t\t\t    |    |    \n");
   printf("\t\t\t  %c |  %c |  %c \n",arr[6],arr[7],arr[8]);
   printf("\t\t\t    |    |    \n\n");
   printf("\033[1;32m");
   printf("player 1--> 'X'    player 2--> 'O'\n");
}

int win(char arr[]){
     if(arr[0]==arr[1]&&arr[1]==arr[2])
         return 1;
     else if(arr[3]==arr[4]&&arr[4]==arr[5])
         return 1;
     else if(arr[6]==arr[7]&&arr[7]==arr[8])
         return 1;
     else if(arr[0]==arr[3]&&arr[3]==arr[6])
         return 1;
     else if(arr[1]==arr[4]&&arr[4]==arr[7])
         return 1;
     else if(arr[2]==arr[5]&&arr[5]==arr[8])
         return 1;
     else if(arr[0]==arr[4]&&arr[4]==arr[8])
         return 1;
     else if(arr[2]==arr[4]&&arr[4]==arr[6])
         return 1;
     else if(arr[0]!='1' && arr[1]!='2' && arr[2]!='3' && arr[3]!='4' && arr[4]!='5' && arr[5]!='6' && arr[6]!='7' && arr[7]!='8' && arr[8]!='9')
        return 0;
     else 
        return -1;                               
}
int main(){
	int i=-1,player=1,choice;
    char mark;
    char arr[9]={'1','2','3','4','5','6','7','8','9'};
    while(i==-1){
        draw(arr);
        player=(player%2)?1:2;
        printf("player %d enter your choice: ",player);
        scanf("%d",&choice);
        mark=(player==1)?'X':'O';
        if(choice==1&&arr[0]=='1')
            arr[0]=mark;
        else if(choice==2&&arr[1]=='2')
            arr[1]=mark;    
        else if(choice==3&&arr[2]=='3')
            arr[2]=mark;    
        else if(choice==4&&arr[3]=='4')
            arr[3]=mark;
        else if(choice==5&&arr[4]=='5')
            arr[4]=mark;
        else if(choice==6&&arr[5]=='6')
            arr[5]=mark;
        else if(choice==7&&arr[6]=='7')
            arr[6]=mark;
        else if(choice==8&&arr[7]=='8')
            arr[7]=mark;
        else if(choice==9&&arr[8]=='9')
            arr[8]=mark;    
        else
        {
            printf("\ainvalid choice");
            player--;
            getch();
        }
        i=win(arr);
        player++;
                        
    }
    selection:
     if(i==1){
     	int cont;	
         draw(arr);     
         printf("\a\aplayer %d win.\n\nenter 1 to play again or 0 to exit. ",--player);
         scanf("%d",&cont);
         if(cont==1)
            main();
        else if(cont==0)
		    exit(0);
		else{
		   printf("\ainvalid selection.");
		   player++;
		   getch();
		   goto selection;
		   }	   
     }
     else
     {
       	int cont;	
         draw(arr);     
         printf("\a\amatch draw.\n\nenter 1 to play again or 0 to exit. ");
         scanf("%d",&cont);
         if(cont==1)
            main();
        else if(cont==0)
		    exit(0);
		else{
		   printf("\ainvalid selection.");
		   player++;
		   getch();
		   goto selection;
		   }
     }
    return 0; 
}
