#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// functions to generate biils
void generateBillHeader(char name[50], char date[30]){
printf("\n\n");
printf("\t Prabal Restaurant");
printf("\n\t  -----------------");
printf("\nDate:%s", date);
printf("\nInvoice To: %s", name);
printf("\n");
printf("-------------------\n");
printf("Items\t\t");
printf("Qty\t\t");
printf("Total\t\t");
printf("\n-----------------");
printf("\n\n");
}
void generateBillBody(char item[30], int qty, float price) {
printf("%s\t\t", item);
printf("%d\t\t", qty);
printf("%.2f\t\t", qty * price);
printf("\n");
}
struct items{
	char item [20];
	float price;
	int qty;
};
 struct orders{
 	char customer[50];
 	char date [50];
 	int numofitem[50];
 	struct items itm[50]; 
 };
void generateBillFooter(float total){
printf("\n");
float dis = 0.1*total;
float netTotal=total-dis;
float cgst=0.09*netTotal, grandTotal=netTotal + 2*cgst; //netTotal + cgst + sgst
printf("---------------\n");
printf("Sub Total\t\t\t%.2f", total);
printf("\nDiscount @10%s\t\t\t%.2f","%", dis);
printf("\n\t\t\t\t-------");
printf("\nNet Total\t\t\t%.2f", netTotal);
printf("\nCGST @9%s\t\t\t%.2f","%", cgst);
printf("\nSGST @9%s\t\t\t%.2f","%", cgst);
printf("\n----------------");
printf("\nGrand Total\t\t\t%.2f",grandTotal);
printf("\n---------------------\n");
}
int main (){
	
	int opt;
	// dashbored
	printf("\t----------Prabal Restaurent---------");
	printf("\n\n1.generate Invoice");
	printf("\n2.Show all invoices");
	printf("\n3.search Invoice");
	printf("\n4.Exit");
	
	printf("\n\nPlease selet your preferred operation:\t");
	scanf("%d",&opt);
	switch(opt){
	case 1:
		printf("\nPlease enter the name of customer:\t");
	}
		printf("\n\n"); }
