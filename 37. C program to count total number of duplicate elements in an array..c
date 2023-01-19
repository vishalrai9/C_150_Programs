#include<stdio.h> 
  
 void main(){ 
     
    int size,temp,j,count,i; 
  
    printf("Enter the size of the array :"); 
    scanf("%d",&size); 
  
    int a[size], fr[size]; 
  
    for(i = 0; i < size; i++){ 
        printf("Enter the element:"); 
        scanf("%d",&a[i]); 
  
         fr[i]=-1; 
        } 
        for(i=0; i<size;i++){ 
            count=1; 
        
        for(j=i+1; j<size; j++){ 
            if(a[i]==a[j]) 
            {
                count++; 
                
                fr[j]=0; 
            } 

        }
 
            if(fr[i]!=0) 
            fr[i]=count; 

        } 
  
                for(i=0; i<size;i++){ 
                if(fr[i]>1) 
        printf("The number %d appeared %dtimes\n",a[i],fr[i]); 
    } 
 }
