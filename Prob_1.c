
//find the second largest number in the given array

#include<stdio.h>
int main(){
    int n;
    int a[200];
    scanf("%d",&n);
   // For Input Of Array
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // To Kill The Repeatition
    for (int u = 0; u< n; u++)
    {
        for (int v = u+1 ;v < n ; v++)
        {
            if (a[u]==a[v])
            {
                a[v]=0;
            }
        }  
    }
    // To Find The Second Largest( We can change the value of s if we want third or forth largest)
    for(int j=0;j<n;j++){
        int s = 0;
        for(int k=0;k<n;k++){
           if (a[j]>=a[k])
           {
            s+=1;
           }  
        }
        if(s==n-1){
            printf("%d",a[j]) ;
            break;
        }
        
    }



}