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
        cout<<"请输入高度:"<<endl;  
        while(cin>>h)  
        {  
            if(h==0)  
                break;  
            cout<<"请输入次数："<<endl;  
            cin>>n;  
            cout<<"总路程为："<<f(n,h)<<endl;  
            cout<<"请输入高度:"<<endl;  
        }  
        return 0;  
    }  
