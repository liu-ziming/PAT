    #include <iostream>  
    #include <cmath>  
    using namespace std;  
      
    double f(double n,double h)  
    {  
        if(n==1)  
            return h+h/2;  
        else  
            return f(n-1,h)+h/pow(2,n)+h/pow(2,n-1);  
    }  
    // h+h/2  h+h/2+ h/2+h/4  h+h/2+ h/2+h/4 + h/4+h/8  
    int main()  
    {  
        double h,n;  
        cout<<"������߶�:"<<endl;  
        while(cin>>h)  
        {  
            if(h==0)  
                break;  
            cout<<"�����������"<<endl;  
            cin>>n;  
            cout<<"��·��Ϊ��"<<f(n,h)<<endl;  
            cout<<"������߶�:"<<endl;  
        }  
        return 0;  
    }  
