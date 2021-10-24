

//1.Faça um programa em C que receba um número real e mostre uma mensagem contendo o número digitado com apenas 3 casas decimais.

#include "stdio.h"
int main(){
	float num;
	printf("Type a number ");
	scanf("%f",&num);
	printf("This is your number in 3 decimal places: %.3f",num);
}

//2.Faça um programa em C que receba um número, representando a capacidade de um Disco Rígido (HD) em Gigabytes (Gb)
// e converta esta capacidade para Megabytes (Mb), Kilobytes (Kb) e Bytes (B), mostrando estes resultados.

#include "stdio.h"
#include "math.h"
int main() 
{
	float size;
	printf("Type the HD storage capacity in Gb: ");
	scanf("%f",&size);
	size=size*pow(10,3);printf("\n Capacity in Mb: %f",size);
	size=size*pow(10,6);printf("\n Capacity in Kb: %f",size);
	size=size*pow(10,9);printf("\n Capacity in Bytes: %f",size);
}

//Um funcionário recebe um salário fixo. Sobre este salário fixo são acrescidos mais 12% de comissão sobre as suas vendas no mês, além dele pagar 15% de imposto sobre o salário.
// Faça um programa em C que receba o salário fixo e o valor de vendas de um funcionário, calcule e mostre o salário líquido dele.

#include "stdio.h"
#include "math.h"
int main() 
{
	//math:
	float netpay, pay, sales;
	printf("Type the salary: ");
	scanf("%f",&pay);
	printf("Type the total value of sales this month: ");
	scanf ("%f",&sales);
	netpay=pay+(sales*.12)-(pay*.15);
	printf("\nHere is your payroll: $%.2f",netpay);
	printf("\n\nWhat a big TAX! :'(\n");
}

//Zezinho deve pagar uma conta no valor de 350 reais. Cada dia que ele atrasa para pagar esta conta, ele deve acrescentar ao valor da conta uma multa de 5%.
 //Faça um programa que mostre o valor que Zezinho deverá pagar na conta caso ele atrase 4 dias para pagá-la.

#include "stdio.h"
#include "math.h"
int main() 
{
	//compound interest formula: A=C(1-i)^t
	float amount,cap,intr,time;
	printf("Type the value of your bill: ");
	scanf("%f",&cap);
	printf("How long is it late(in days)? ");
	scanf ("%f",&time);
	intr=0.05;
	amount=cap*pow((1+intr),time);
	printf("Outta business Zezinho! The price now is: $%.2f!!!",amount);
}

//Faça um programa em C que receba a altura e o peso de uma pessoa e calcule o valor de seu índice de massa corpórea (IMC) com duas casas decimais. Considere a fórmula:
//IMC = peso / altura2 

#include "stdio.h"
#include "math.h"
int main() 
{
	//Body Mass Index formula: BMI = weight/(hight)^2
	float bmi, wgt, hgt;
	printf("Sorry to ask you, but what's your weight(kg)? ");
	scanf("%f",&wgt);
	printf("\nNow tell me how tall are you (e.g. 1.70): ");
	scanf ("%f",&hgt);
	bmi=wgt/pow(hgt,2);
	printf("\nYour Body Mass Index (BMI) is: %.2f kg/m^2\n",bmi);
}

//Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo de um funcionário, calcule e mostre o salário líquido,
 //de acordo com as regras a seguir:
/*
a) A hora trabalhada vale 0.5% do salário mínimo;
b) O salário bruto equivale ao valor a receber pelas horas trabalhadas;
c) O imposto de renda retido na fonte é de 13% sobre o salário bruto.
d) O valor do INSS a ser descontado é de 7% sobre o salário bruto.
e) O salário líquido equivale ao salário bruto menos os descontos.
*/

#include "stdio.h"
#include "math.h"
int main() 
{
	float minpay,hour,grpay,inctax,sosec,netpay;
	printf("\n Type the basic wage value: ");
	scanf ("%f",&minpay);
	printf(" Type worked hours: ");
	scanf("%f",&hour);
	grpay=minpay*0.005*hour;
	inctax=grpay*0.13;
	sosec=grpay*0.07;
	netpay=grpay-inctax-sosec;
	printf("\n Gross pay: $%.2f\n",grpay);
	printf("\n Income Tax: $%.2f\n",inctax);
	printf("\n Social Security: $%.2f\n",sosec);
	printf("\n Net pay: $%.2f\n",netpay);
	
}

