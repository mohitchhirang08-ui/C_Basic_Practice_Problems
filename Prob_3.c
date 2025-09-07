//Equilibrium index problem
#include<stdio.h>
int sum(int ar[],int a ,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=ar[i];
    }
    return sum;
}
int main(){
    int ar[200];
    int n=0;
    int s=0;
    //input of array
    printf("Give your series (Enter -1 to terminate)");
    for(int z=0;;z++){
       scanf("%d",&ar[z]);
       if (ar[z]==-1)
       {
        break;
       }
       else{
        n++;
       }
    //checking the equilibrium point   
    }
    for(int k=1;k<n-1;k++){
        if (sum(ar,0,k-1)==sum(ar,k+1,n-1))
        {
            printf("Your equilibrium point is %d",ar[k]);
            break;
        } 
        else{
            s++;
        }
    }
if (s==n-2)
{
    printf("There is no equilibrium point");
}


}