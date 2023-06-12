#include <stdio.h>

int main(void) {
    int T;
scanf("%d",&T);
while(T--){
	int N,K,V,sum=0;
	scanf("%d %d %d",&N,&K,&V);
	for(int i=0;i<N;i++){
		int temp;
		scanf("%d",&temp);
		sum+=temp;
	}
	long int s=(V*(N+K))-sum;
	if(s>0 && s%K==0){
		printf("%d \n",s/K);
	} else {
		printf("-1 \n");
	}
}
	return 0;
}

