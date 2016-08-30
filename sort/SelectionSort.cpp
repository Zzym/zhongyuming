—°‘Ò≈≈–Ú

#include <iostream>  
using namespace std;  
  
void swap(int zym[],int i,int j)  
{  
    int tmp=zym[i];  
    zym[i]=zym[j];  
    zym[j]=tmp;  
}  
  
  
void SelectionSort(int zym[],int n)  
{  
    for(int i=0;i<n-1;i++)  
    {  
        int smallest=i;  
        for(int j=i+1;j<n;j++)  
        {  
            if(zym[smallest]>zym[j])  
                smallest=j;  
        }  
        swap(zym,i,smallest);  
    }  
}  
  
int main()  
{  
    int zym[6]={3,1,2,5,4,6};  
    SelectionSort(zym,6);  
    for(int i=0;i<6;i++)  
        cout<<zym[i]<<"  ";  
        cout<<endl; 
	system("pause");
    return 0;  
}  