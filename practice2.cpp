#include<bits/stdc++.h>
using namespace std;

struct car{
int mod;
string name;

car(int mo,string nam){
    mod= mo;
    name= nam;
}
};

int main()
{
 car *c=new car(1,"hello");
 cout<<c->mod<<" "<<c->name;

    return 0;

}
