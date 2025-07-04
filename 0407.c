#include <stdio.h>

int main(){

	int a,b,res=1;
	scanf("%d %d",&a,&b);

	while (b>0){
		if (b%2==0){
			res=res*a;
			b=b-1;
		}
		else{
			res=res*a;
			b=b-1;
		}

		printf("%d",res);

	}



return 0;
}
