#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void generateBillHeader(char name[50],char date[30]){
printf("\n\n");
printf("\t    MAMUN. Restaurant");
printf("\n\t   --------------");
printf("\n Date:%s",date);
printf("\nInvoice To: %s",name);
printf("\n");
printf("-----------------------------------");
printf("Item\t\t");
printf("Qty\t\t");
printf("Total\t\t");
printf("\n----------------------------------");
printf("\n\n");
}
void generateBillbody(char item[30],int qty, float price)
{
    printf("%s\t\t",item);
    printf("%d\t\t",qty);
    printf("%.2f\t\t",qty * price);
    printf("\n");
}
void generateBillFooter(float total){
    printf("\n");
    float dis =0.1*total;
    float netTotal=total-dis;
    float tax=0.09*netTotal,grandTotal=netTotal+ 2*tax;
    printf("----------------------------\n");
    printf("Sub Total \t\t\t%.2f",total);
    printf("\n Discount @10%s\t\t\t%.2f",netTotal);
    printf("\n\t\t\t\t------- ");
    printf("\nNet Total\t\t\t .%2f",netTotal);
    printf("\ntax 09%s\t\t\t%.2f""%",tax);
    printf("s-tax @9%s\t\t\t%.2f", "%",tax);
    printf("\n-------------------------");
    printf("\nGrand Total \t\t\t%.2f",grandTotal);
    printf("\n---------------------------");
}
int main(){  
printf("\t===========Mamun.FoodCourt==========");
printf("\n1.Generate Invoice  ");
printf("\n2.Show all Invoices");
printf("\n3.search Invoice");
printf("\n4.Exit");

 return 0;
}