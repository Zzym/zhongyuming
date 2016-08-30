πÈ≤¢≈≈–Ú

#include <iostream>  
using namespace std;  
  
int KeySize(int zym[],int size)  
{  
    int key_size=1;  
  
    for(int i=0;i<size;i++)  
    {  
        int temp=1;  
        int n=10;  
        while(zym[i]/n>0)  
        {  
            temp++;  
            n*=10;  
        }  
        key_size=(temp>key_size)?temp:key_size;  
    }  
    return key_size;  
}  
  
void RadixSort(int zym[],int size)  
{  
int bucket[10][10]={0};
int order[10]={0};  
    int key_size=KeySize(zym,size); 
    for(int n=1;key_size>0;n*=10,key_size--)  
    {  
         for(int i=0;i<size;i++)  
        {  
            int lsd=(zym[i]/n)%10;  
            bucket[lsd][order[lsd]]=zym[i];  
            order[lsd]++;  
        }  
        int k=0;  
        for(int i=0;i<10;i++)  
        {  
            if(order[i]!=0)  
            {  
                for(int j=0;j<order[i];j++)  
                {  
                    zym[k]=bucket[i][j];  
                    k++;  
                }  
                order[i]=0;  
            }  
        }  
    }  
}  
  
int main()  
{  
    int zym[10]={1,4,5,7,8,9,2,3,6,10};  
    int size=sizeof(zym)/sizeof(int);  
    RadixSort(zym,size);  
    for(int i=0;i<size;i++)  
        cout<<zym[i]<<"  ";  
        cout<<endl;  
	system("pause");
    return 0;  
}