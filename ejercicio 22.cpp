#include <stdio.h>
	int t1[10];
	int t2[10];
	int t3[10];
	int i;
main(){
	for (i=0;i<=9;i++){
	  printf("introduce dato t1[%d]:",i);
	  scanf ("%d",&t1[i]);
	}
	printf("\n\n");
	for (i=0;i<=9;i++){
	  printf("introduce dato t2[%d]:",i);
	  scanf ("%d",&t2[i]);
	}
	
	for(i=0;i<=9;i++){
		t3[i]=t1[i]+t2[9-i];
		printf("\n suma %d + %d =%d",t1[i],t2[9-i],t3[i]);
		
	}
	
}