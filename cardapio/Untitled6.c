#include <stdio.h>
#include <string.h>
main(){
	float vf,vb,pd,vp,sobremesa;
	char pe2[100];
	
	printf("\nQual o valor básico ? "); scanf("%f",&vb);
	printf("\nQual o prato desejado ?\n1 - peixe\n2 - carne bovina \n3 - frango \n4 - vegetariano \nQual sua escolha: "); scanf("%f",&pd);
	printf("\nDesja sobremesa tambem ?\nsim - 1\nnão - 2 \nEscolha: ");scanf("%f",&sobremesa);
	
	if (pd==1){
		vp=vb*1.1;
		char pe[100] = "peixe";
		strcpy(pe2, pe);
	}else if (pd==2){
		vp=vb*1.2;
		char pe[100] = "carne bovina";
		strcpy(pe2, pe);
	}else if (pd==3){
		vp=vb*1.15;
		char pe[100]= "frango";
		strcpy(pe2, pe);
	}else if (pd==4){
		vp=vb*1.05;
		char pe[100]= "vegetariano";
		strcpy(pe2, pe);
	}
	
	printf("\nO prato escolhido foi ");
	puts(pe2);
	
	if(sobremesa==1){
		printf("Sobremesa inclusa");
		vf= vp + vb * 0.05;
	}
	else {
		printf("Sobremsa não inclusa");
		vf = vp;
	}
	
	printf("\nO valor do prato escolhido foi: R$%.2f",vp);
	printf("\nO valor final foi: R$%.2f",vf);
	
	return(0);
	
	
	
}

