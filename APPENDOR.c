#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,Y;
	    scanf("%d %d",&N,&Y);
	    int a[N];
	    for(int i=0;i<N;i++){
	        scanf("%d",&a[i]);
	    }
	    int flag=0;
	    int sum=0;
	    for(int i=0;i<N;i++){
	        sum|=a[i];
	    }
	    for(int i=0;i<Y+1;i++){
	        if((sum|i)==Y){
	            printf("%d\n",i);
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0){
	        printf("-1\n");
	    }
	}
	return 0;
}
