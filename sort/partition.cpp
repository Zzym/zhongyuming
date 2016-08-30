¿ìËÙÅÅĞò

#include <iostream>  
using namespace std;  
  
void swap(int zym[],int i,int j)  
{  
    int tmp=zym[i];  
    zym[i]=zym[j];  
    zym[j]=tmp;  
}  
  
int partition(int zym[],int left,int right)  
{  
    int mid=(left+right)/2;  
    int tmp=zym[mid];  
    swap(zym,mid,right);  
    int i=left;  
    int j=right;  
    while(1)  
    {  
           while(1)  
        {  
            if(i==j)  
            {  
                zym[i]=tmp;  
                return i;  
            }  
            if(zym[i]>tmp)  
            {  
                zym[j]=zym[i];  
                j--;  
                break;  
            }  
            i++;  
        }  
                while(1)  
        {  
              
            if(i==j)  
            {  
                zym[j]=tmp;  
                return j;  
            }  
            if(zym[j]<tmp)  
            {  
                zym[i]=zym[j];  
                i++;  
                break;  
            }  
            j--;  
        }  
    }  
}  
  
void quickSort(int zym[],int left,int right)  
{  
    if(right<=left)  
        return;  
    int pivot=partition(zym,left,right);  
    quickSort(zym,left,pivot-1);  
    quickSort(zym,pivot+1,right);  
}  
  
int main()  
{  
    int zym[8]={6,8,7,3,1,2,5,4};  
    quickSort(zym,0,7);  
    for(int i=0;i<8;i++)  
        cout<<zym[i]<<"  ";  
        cout<<endl;  
	system("pause");
    return 0;  
}  