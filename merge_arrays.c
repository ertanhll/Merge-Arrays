
#include <stdio.h>




void merge(int arr1[],int arr2[],int C[], int size1,int size2){
    
    int i,j=0,k=0, count=0;

    
    
    for( i=0;i<size1;i++){
    
    while(j<size2){
        j=k;
        if(arr1[i]<arr2[j]){
            C[count]=arr1[i];
            count++;
            break;
        }
        else {
        
        C[count]=arr2[j];
        k++;
        count++;
        i--;
        break;
    
    }
        }
    
    }


   
}

int main() {


int i,n1, n2,count=0;
int A[20]={0};
int B[20]={0};
int C[20]={0};

printf("Enter number for first array :\n");

for(i=0;i<20;i++){
    scanf("%d",&n1);
    A[i]=n1;
    count++;
    if(n1==-1) break;
}


printf("Enter number for second array :\n");

for(i=0;i<20;i++){
    scanf("%d",&n2);
    B[i]=n2;
    count++;
    if(n2==-1) break;
}
/*for(i=0; i<count-2;i++) printf("%d ",C[i]);
    printf("\n");
    */
merge(A,B,C,20,20);

    
for(i=0; i<count-2;i++) printf("%d ",C[i]);
    printf("\n");



    return 0;
}


