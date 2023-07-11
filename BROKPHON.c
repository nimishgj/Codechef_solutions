#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int N,i,count=0;
	    int flag=0;
	    scanf("%d",&N);
	    int a[N];
	    for(i=0;i<N;i++){
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<N-1;i++){
	        if(a[i]!=a[i+1] && flag==0){
	            count+=2;
	            flag=1;
	        } else if(a[i]!=a[i+1] && a[i]!=a[i-1] && flag==1){
	            count+=1;
	        } else if(a[i]!=a[i+1] && flag==1){
	            count+=2;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

