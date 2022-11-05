#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void creare(int *arr,int n){
    int i,j,flag,nr;
    srand(time(NULL));
    for(i=0;i<n;i++){
        flag=1;
        while(flag){
            flag=0;
            nr=rand()%1000;
            for(j=0;j<n;j++)
                if(arr[j]==nr)
                    flag=1;
                    if(!flag){
                        arr[i]=nr;
                        break;
                    }
        }
    }
}

void afisare(int *arr,int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}



int main(){
    int *arr,n;
    printf("Introduceti numarul de elemente ale vectorului: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(!arr){
        printf("Eroare alocare dinamic.");
        exit(0);
    }
    creare(arr,n);
    afisare(arr,n);


    free(arr);
    return 0;
}