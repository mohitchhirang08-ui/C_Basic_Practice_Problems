#include<stdio.h>
int main(){
    // Declaring the variables
    int ar[200];
    int br[200];
    int n;
    int p=0;
    // Taking the input of array 
    scanf("%d",&n);// no. of elements in the array
     for(int z=0;z<n;z++){
       scanf("%d",&ar[z]);
     }
       // Logic
       for(int k=0;k<n;k++){
        br[0]=ar[k];// the subsequences will start from 1st element in this case
        int s=1;// Length of the sequence
    for (int i = 1; i < n; i++)
    {
       if (ar[i]>br[s-1])
       {
        s++;
        br[s-1]=ar[i];
       }
    }
    if (s>p)
    {
      p=s;
    }
       }
    // Print the output
    printf("\n The length of the sequence is %d",p);
    

     }