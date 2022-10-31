#include <stdio.h>
# define N  10
int busquedaBinaria(int i,int j,int arr[N],int b);
int busquedaBinariaRecursive(int i,int j,int arr[N],int b,int k);
int main()
{
    int arr[N] = {4,20,38,45,67,88,110,137,149,182};
    int i = 0;
    int j = N-1;
    int b;//4
    int pos;  

  printf("dame un valor");
  scanf("%d",&b);
  
 //pos = busquedaBinaria(i,j,arr,b); 
  pos = busquedaBinariaRecursive( i, j, arr, b,pos);
  
 if(pos == -1){
     printf("valor no encontrado");
 }else{
     
     
     printf("esta es la posicion :%d",pos);
 }
  
    
}
int busquedaBinaria(int i,int j,int arr[N],int b){
  int k;
        do {
            k= (i+j)/2;
            if (arr[k]<=b ){
                i=k+1; 
            }
       
            if (arr[k]>=b ){
                j= k-1;
            }
        
        }while (i<=j);
        
        if(arr[k] != b){
            k = -1;
     
     
        }
 
        return k;
}
int busquedaBinariaRecursive(int i,int j,int arr[N],int b,int k){
    if(arr[i] == b){
        
        return i;
    }
    if(arr[j] == b){
        
        return j;
    }
    if(i>=j){
      if(arr[k] != b){
          
            k = -1;  
      }
      
      
      return k;
    }
    
      k= (i+j)/2;
      if (arr[k]<=b ){
          
                i=k+1; 
        }
       
       if (arr[k]>=b ){
           
                j= k-1;
        }
    return  busquedaBinariaRecursive( i, j, arr, b,k);
    
    
}    
    
    
    
    
    
    
    




