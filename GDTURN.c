#include <stdio.h>

int main(void) {
	int T,a,b;
	scanf("%d",&T);
	while(T){
	    scanf("%d%d",&a,&b);
	    if(a+b > 6)
	        printf("YES\n");
	    else
	        printf("NO\n");
	    T--;
	}
	return 0;
}

