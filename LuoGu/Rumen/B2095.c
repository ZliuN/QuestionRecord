#include<stdio.h>
#include<math.h>	
int main() {
	float a[300],item,ave,sum;
	int i,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
    	scanf("%f",&a[i]);
		for(k=0;k<i;k++)
			if(a[i]<a[k]){
			 	item=a[i];
			 	a[i]=a[k];
			 	a[k]=item;
			}
	}
	for(i=1;i<(n-1);i++)
		sum+=a[i];
	ave=sum/(n-2);
	printf("%.2f ",ave);
	if(fabs(a[1]-ave)>fabs(a[n-2]-ave))
      printf("%.2f",fabs(a[1]-ave));
    else
	  printf("%.2f",fabs(a[n-2]-ave));
	return 0;	
}