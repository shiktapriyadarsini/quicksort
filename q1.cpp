#include <iostream>
 
using namespace std;
 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int a[40],n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"Enter array elements:\n";
    
    for(i=0;i<n;i++)
        cin>>a[i];
        
    quick_sort(a,0,n-1);
    cout<<"Array after sorting:\n";
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
 
void quick_sort(int a[],int b,int c)
{
    int j;
    if(b<c)
    {
        j=partition(a,b,c);
        quick_sort(a,b,j-1);
        quick_sort(a,j+1,c);
    }
}
 
int partition(int a[],int b,int c)
{
    int v,i,j,temp;
    v=a[b];
    i=b;
    j=c+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=c);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[b]=a[j];
    a[j]=v;
    
    return(j);
}
