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

void sortare(int *arr,int n){
    int i,j,aux;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
            if(arr[i]>arr[j]){
                aux=arr[i];
                arr[i]=arr[j];
                arr[j]=aux;
            }
    }
}

int cautare_lin(int *arr,int n,int cautat){
    int i;
    for(i=0;i<n;i++){
       if(arr[i]==cautat)
            break;
    }
    return i;
}


int main(){
    int *arr,n,x,iteratii;
    printf("Introduceti numarul de elemente ale vectorului: ");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(!arr){
        printf("Eroare alocare dinamic.");
        exit(0);
    }
    creare(arr,n);
    sortare(arr,n);
    afisare(arr,n);
    printf("\nIntroduceti elementul cautat: ");
    scanf("%d",&x);
    iteratii=cautare_lin(arr,n,x)+1;
    if(iteratii==n+1)
        printf("\nElementul cautat nu exista in vector.");
    else
        printf("\nElementul s-a gasit dupa %d comparatii.",iteratii);
    free(arr);
    return 0;
}