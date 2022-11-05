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

int cautare_lin(int *arr,int n){
    int i,minim=999,maxim=-1,contor=0;
    for(i=0;i<n;i++){
       if(maxim<arr[i])
            maxim=arr[i];
        if(minim>arr[i])
            minim=arr[i];
        contor++;
    }
    printf("\nMinimul este %d.",minim);
    printf("\nMaximul este %d.",maxim);
    return contor;
}

int cautare_bin_max(int *arr,int n,int cautat,int stanga,int dreapta){
    int mij,contor=0;
    while(stanga<=dreapta){
        contor++;
        mij=(stanga+dreapta)/2;
        if(arr[mij]==cautat){
            printf("\nMaximul este %d.",cautat);
            return contor;
        }
        else if(cautat>arr[mij])
            stanga=mij+1;
        else
           dreapta=mij-1;
    }
}

int cautare_bin_min(int *arr,int n,int cautat,int stanga,int dreapta){
    int mij,contor=0;
    while(stanga<=dreapta){
        contor++;
        mij=(stanga+dreapta)/2;
        if(arr[mij]==cautat){
            printf("\nMinimul este %d.",cautat);
            return contor;
        }
        else if(cautat>arr[mij])
            stanga=mij+1;
        else
           dreapta=mij-1;
    }
}


int main(){
    int *arr,n=100,x,iteratii;
    clock_t start,sfarsit;
    double durata;
    //printf("Introduceti numarul de elemente ale vectorului: ");
    //scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(!arr){
        printf("Eroare alocare dinamic.");
        exit(0);
    }
    creare(arr,n);
    sortare(arr,n);
    printf("\nVectorul generat aleator este:\n");
    afisare(arr,n);
    printf("\n");
    printf("------------------------------------------------------------------------");
    printf("\nCAUTARE LINIARA.");
    start=clock();
    iteratii=cautare_lin(arr,n);
    sfarsit=clock();
    durata=((double)sfarsit-start)/CLOCKS_PER_SEC;
    printf("\nTabloul a fost accesat de %d ori.\n",iteratii);
    printf("Timpul de executie al cautarii liniare este %f secunde.\n",durata);
    printf("------------------------------------------------------------------------");
    printf("\nCAUTARE BINARA.");
    start=clock();
    iteratii=cautare_bin_min(arr,n,arr[0],0,n-1)+cautare_bin_max(arr,n,arr[n-1],0,n-1);
    sfarsit=clock();
    durata=((double)sfarsit-start)/CLOCKS_PER_SEC;
    printf("\nTabloul a fost accesat de %d ori.\n",iteratii);
    printf("Timpul de executie al cautarilor binare a fost de %f secunde.\n",durata);
    printf("------------------------------------------------------------------------");
    free(arr);
    return 0;
}