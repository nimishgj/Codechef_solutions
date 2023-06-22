#include <stdio.h>

int main(void) {
	int n,a;
	scanf("%d",&n);
	while(n){
	    scanf("%d",&a);
	    if(a>=2000) printf("YES\n");
	    else printf("NO\n");
	    n--;
	}
	return 0;
}

