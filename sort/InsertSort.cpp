
#include <iostream>  
using namespace std;  

 void swap(int zym[],int i,int j)  
{  
    int tmp=zym[i];  
    zym[i]=zym[j];  
    zym[j]=tmp;  
}  
  
void InsertSort(int zym[],int n)  
{  
    for(int i=1;i<n;i++)  
    {  
        for(int j=i;j>0;j--)  
        {  
            if(zym[j]>zym[j-1])  
                swap(zym,j,j-1);  
            else  
                break;  
        }  
    }  
}  
  
int main()  
{  
    int zym[]={3,1,2,5,4,8,9,12,6};  
    InsertSort(zym,9);  
    for(int i=0;i<9;i++)  
        cout<<zym[i]<<"  ";  
    cout<<endl;
	system("pause");
	return 0;     
}  