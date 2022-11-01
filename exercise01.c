#include<stdio.h>
#include<conio.h>
 main(){
        int i=0,price=200,count=10,k=10,u=0,l=0;
        char key;
        while(u==0){
        printf("\n\n\t\t\t*****************************\n");
        printf("\t\t\t***     Rent motorbikes   ***\n");
        printf("\t\t\t*****************************\n\n");
        printf("\t\t\tNo\t    Name\tPrice\n");
                 for(i=1;i<=k;i++){
                printf("\t\t\t%d\t Motorcycle\t%d\n",i,price);
        }
        printf("\n\t\t\tTotal:%d          Price:%d",count,l);
        printf("\n\t\t\tLease=L  Remand=R\t");   key=getch();

                if((key=='L') || (key=='l')){
                        k--;
                        count--;
                        if(k<0){
                                printf("\n\t\t\tEnty  Motorcycle ");
                                k=0;
                                count=0;
                                }
                        else{
                                for(i=1;i<=k;i++){
                                        printf("\n\t\t\t%d\t Motorcycle\t%d",i,price);
                                        }
                                l=l+price;
                                }
                        }

                if(key=='R' || key=='r'){
                k++;
                count++;
                        if(k>10){
                                k=10;
                                count=10;
                        }
                        else{
                                for(i=1;i<=k;i++){
                                        printf("\n\t\t\t%d\t Motorcycle\t%d",i,price);
                                }
                        l=l-price;
                        }
                }
        }
}


