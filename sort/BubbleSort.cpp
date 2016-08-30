ц╟ещеепР

#include <iostream>  
using namespace std;  
  
 
void swap(int zym[],int i,int j)  
{  
    int tmp=zym[i];  
    zym[i]=zym[j];  
    zym[j]=tmp;  
}  
  
 
void BubbleSort(int zym[],int n)  
{  
    for(int i=0;i<n-1;i++)  
    {  
        for(int j=n-1;j>i;j--)  
        {  
            if(zym[j]<zym[j-1])  
                swap(zym,j,j-1);  
        }  
    }  
}  
  
int main()  
{  
    int zym[7]={3,1,2,5,4,16,9};  
    BubbleSort(zym,7);  
    for(int i=0;i<7;i++)  
        cout<<zym[i]<<"  ";  
        cout<<endl; 
	system("pause");
    return 0;  
}  