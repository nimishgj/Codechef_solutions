#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int i,a[6];
	    for(i=0;i<6;i++){
	        scanf("%d",&a[i]);
	    }
	    int result=0;
        if((a[2]==a[0] || a[2]==a[1]) && (a[3]==a[0] || a[3]==a[1])){
            printf("1\n");
            continue;
	    }
	    if((a[4]==a[0] || a[4]==a[1]) && (a[5]==a[0] || a[5]==a[1])){
            printf("2\n");
            continue;
	    }
	    printf("0\n");
	}
	return 0;
}

