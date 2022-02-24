#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ascii(int i){
		int y=i;
		if(y>=48 && y<=57){
			if(y==48){
				return y=0;	
			}
			else if(y==49){
				return y=1;
			}else if(y==50){
				return y=2;
			}else if(y==51){
				return y=3;
			}else if(y==52){
			y=4;
			}else if(y==53){
				return y=5;
			}else if(y==54){
				return y=6;
			}else if(y==55){
				return y=7;
			}else if(y==56){
				return y=8;
			}else {
				return y=9;
			}
		}else return -1;
		
		
}
int main() {
	int i,y,z,temp,islem,j,p,kck;
	char s1[999];
	char s2[999];
	printf("Birinci sayiyi giriniz :");
	scanf("%s",s1);
	printf("Ikinci sayiyi giriniz: ");
	scanf("%s",s2);
	
	int a= strlen(s1);
	int b= strlen(s2);
	if(a>b){
		temp=a;
		kck=b;
		}
		else{
		temp=b;
		kck=a;
		}

	int r=0;	
		
	int dizi1[temp],dizi2[temp],dizi3[temp],tmp[kck];//küçük indise göre boyut ayarla sonra tmp boyutuna göre  0 ekle;
	if(kck==a){
			for(i=0;i<a;i++){
				dizi1[i]=0;
			}
			for(i=a;i<temp;i++){	
			y=s1[r++];
			dizi1[i]=ascii(y);
			if(dizi1[r]==(-1)){
				printf("Hatali girdi");
				break;
		}
		
	}
	
		for(i=0;i<temp;i++){
			printf("%d",dizi1[i]);
		}

	printf("\n\n\n");
	}else{
		for(i=0;i<b;i++){
			z=s2[i];
			dizi2[i]=ascii(z);
			if(dizi2[i]==(-1)){
				printf("Hatali girdi");
				break;
			}
			
		}
		for(i=b;i<temp;i++){
				dizi2[i]=0;
			}
	}
	//printf("%d\n",dizi1[4]);
	

	/*}else{
		for(i=(temp-1);i>=0;i--){
			tmp[i]=dizi2[i];
		}
		for(i=(temp-1);i>(kck-1);i--){
			dizi2[i]=0;
		}
		
	}*/
		//printf("%d",dizi1[1]);
		/*
		
		printf("\n\n");
		for(i=t-1;i>=0;i--){
			printf("%d",dizi1[i]);
			printf("\n");
			
		}
		for(i=(t-1);i>=0;i--){
			printf("%d",dizi2[i]);
			printf("\n");
		}*/
		int toplam,elde;
		
	printf("Yapmak istediniz islemi seciniz :\nToplama icin 1\ncikarma icin 2\nCarpma icin 3 \n");
	scanf("%d",&islem);
	switch(islem){
		case 1 :
			printf("Toplama");
			for(i=0;i<=temp;i++){
			toplam=0;
			toplam=dizi1[i]+dizi2[i];
		//	printf("%d",toplam);
			elde=toplam%10;
			dizi3[temp]=elde;
		}
			if(toplam>9){
				dizi3[temp+1] +=1;
			}
			for(i=0;i<=temp;i++){
			printf("%d",dizi3[i-1]);
			}
			break;
		case 2:
			printf("cikarma\n");
			for(i=(temp-1);i>=0;i--){
				if(dizi1[i]>=dizi2[i]){
					dizi3[i]=dizi1[i]-dizi2[i];
				}else{
					for(j=(i-1);j>=0;j--){
						if(dizi1[j]=0){
							continue;
							
						}else{
							dizi1[j]--;
							for(p=(temp+1);p<i;p++){
								dizi1[p]+=9;
							}
							dizi1[i]+=10;
						}
						dizi3[i]=dizi1[i]-dizi2[i];
					
					}
				}	
			}
			for(i=0;i<=2;i++){
				printf("%d",dizi3[i]);
			}
			break;
		case 3:
			printf("carpma");
			break;
		default :
			printf("Tanimlanamayan islem");
			break;		
	

	
}
	return 0;
}
