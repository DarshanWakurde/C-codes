#include<iostream>
using namespace std;

class cal{
    int a;
    int b;
    public:
    sum(){
        cin>>a;
        cin>>b;
        cout<<a+b;
    }
    cal(int c,int d){
        a=c;
        b=d;
      
        cout<<a*b;
    }
};

int main()
{
    cout<<"hello world";
   int a,b;
   cin>>a;
   cin>>b;

    cal d(a,b);
    d.sum();
     return 0;
}
