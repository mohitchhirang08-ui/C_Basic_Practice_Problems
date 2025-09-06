
//Program for removal of duplicate elements from the array 

#include<stdio.h>
int main(){
    // Input of array(input ends when you enter -1)
    int n=0;
    int a[200];
    printf("Enter the numbers ( Enter -1 to end the sequence.) \n");
    for(int i=0;;i++){
        scanf("%d",&a[i]);
        n++;
        if(a[i]==-1){
            break;
        }
    }
//shifting of duplicate items at the last
   for(int j=0;j<n;j++){
       for (int k = j+1; k<n; k++)
       {
        if (a[j]==a[k])
        {
            for (int l  = k; l < n-1; l++)
            {
                int temp=a[l];
                a[l]=a[l+1];
                a[l+1]=temp;
            }
            n--;
            
        }
       }
      
       
    }
    //printing the final array'
    printf("Array after removal of duplicate elements is - ");
     for ( int m = 0; m < n-1; m++)
       {
        printf("%d ",a[m]);
       }
}