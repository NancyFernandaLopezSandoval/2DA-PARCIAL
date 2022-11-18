#include<iostream>
using namespace std;

void quicksort(int[],int,int);
int particion(int[],int,int);

int main(){
    int a[30],n,list;
    cout<<"ingresa los numeros que se van a ordenar: ";
    cin>>n;
    cout<<"introduce los elementos del array \n";
    for(list=0;list<n;list++)
        cin>>a[list];
    quicksort(a,0,n-1);
    cout<<"datos ordenados: ";
    for(list=0;list<n;list++)
        cout<<" "<<a[list];
    return 0;
}

void quicksort(int a[],int l, int u){
    int j;
    if(l<u){
        j=particion(a,l,u);
        quicksort(a,l,j-1);
        quicksort(a,j+1,u);
    }
}

int particion(int a[], int l, int u){
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    do{
        do
            i++;
        while(a[i]<v && i<=u);
        do
            j--;
        while(v<a[j]);
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }while(i<j);
    a[l]=a[j];
    a[j]=v;

    return(j);
}
