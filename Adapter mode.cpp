#include<iostream>  
using namespace std;  
    
class Target  //Ŀ��
{  
public:   
    virtual void Request(){};  
};  
   
class Adaptee  //Դ
{  
public: 
    void SpecificRequest()  
    {  
        cout<<"yao  chu  fa"<<endl;  
    }  
}; 
 
class Adapter : public Adaptee, public Target  //������
{  
public:  
    void Request()  
    {     
        this->SpecificRequest();  
    }  
};  
  
  
int main()  
{  
    Target *t = new Adapter();  
    t->Request();  
    system("pause");
    return 0;  
}  