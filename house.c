#include <stdio.h>

void main(){
	int houses;
	scanf("%d",&houses);
	int m[houses][houses];
	int x[houses];
	int y[houses];
	 double distance[houses];
	 double sum=0;
	for(int i=0;i<houses;i++)
	{   
	    scanf("%d %d",&x[i],&y[i]);
	   
	}
	for(int i=0;i<houses;i++)
	{for(int j=0;j<houses;j++)
	    {scanf("%d",&m[i][j]);}
	}
	for(int i=0;i<houses;i++)
	{ for(int j=0;j<houses;j++)
	    {if(m[i][j]==1)
	    {distance[i]=(x[i]-x[j])^2+(y[i]-y[j]^2);
	    sum+=distance[i];}
	    }
	    
	}
	printf("%d",sum);
}
