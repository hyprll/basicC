#include <stdio.h>
#include <string.h>

int main () {
	char id[50];
	char pass[50];
	
	login :
	printf("Enter your id : ");
	scanf("%s", &id);
	printf("Enter your password : ");
	scanf("%s", &pass);
	
	if (strcmp(id,"faathirn")==0 && strcmp(pass,"trapesium")==0
		||strcmp(id,"pncrn_")==0 && strcmp(pass,"pancaran130904")==0){
			printf("\nWELCOME!!!");
		}else if (strcmp(id,"faathirn")!=0 && strcmp(pass,"trapesium")==0
			||strcmp(id,"pncrn_")!=0 && strcmp(pass,"pancaran130904")==0){
			printf("\nID SALAH\n");
			printf("\nCOBA LAGI\n\n");
		goto login;
		
		}else if (strcmp(id,"faathirn")==0 && strcmp(pass,"trapesium")!=0
			||strcmp(id,"pncrn_")==0 && strcmp(pass,"pancaran130904")!=0){
			printf("\nPASSWORD SALAH\n");
			printf("\nCOBA LAGI\n\n");
		goto login;
		
		}else if (strcmp(id,"faathirn")!=0 && strcmp(pass,"trapesium")!=0
			||strcmp(id,"pncrn_")!=0 && strcmp(pass,"pancaran130904")!=0){
			printf("\nID DAN PASSWORD SALAH\n");
			printf("\nCOBA LAGI\n\n");
		goto login;
	}
return 0;
}