// Finding the leader in the array
#include<stdio.h>
//Define function for checking
void leader(int a[],int n){
    for(int j=0;j<n;j++){
         int s=0;
        for(int k=j+1;k<n;k++){
            if (a[j]>=a[k])
            {
                s+=1;
            }
        }
        if(s==n-j-1){
            printf(" %d",a[j]);
        }
    }
}
int main(){
   int n=0;
   int a[200];
   // Take Input 
   printf("Give the array(enter -1 to terminate)");
   for ( int l = 0;; l++)
   {
    scanf("%d",&a[l]);
    if (a[l]==-1)
    {
        break;
    }
    else{
        n++;
    }
   }
   printf("The leaders are-");

    leader(a,n);
  
   
}