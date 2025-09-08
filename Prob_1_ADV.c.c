//Kadane's Algorithm
#include<stdio.h>
int sum(int a[],int x,int y){
    int sum=0;
    for(int i=x;i<y+1;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int n;
    int a[200];
    int m=0;
    int o=0;
    scanf("%d",&n);
    for ( int j = 0; j < n; j++)
    {
     scanf("%d",&a[j]);
    }
    int s=-1000;
    for ( int k = 0; k < n; k++)
    {
        for ( int l = k; l < n; l++)
        {
         int temp=sum(a,k,l);
         if (temp>s)
         {
            s=temp;
            m=k;
            o=l;
            
         }
        }
        
    }
    printf("Max sum is %d\nFrom subarray-",s);;
    for(int v=m;v<o+1;v++){
        printf(" %d",a[v]);
    }
    
    

}