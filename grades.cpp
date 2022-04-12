#include <iostream>
using namespace std;
int main(){


    int marks;
    cout<<"enter your marks : "<<endl;
    cin>>marks;

    if (marks>79&&marks<101)
    {
        cout<<"A";
    }

    else if (marks>59&&marks<81)
    {
        cout<<"B";
    }
     
    else if (marks>49&&marks<61)
    {
        cout<<"C";
    }
    
    else if (marks>44&&marks<51)
    {
        cout<<"D";
    }
    
    else if (marks>24&&marks<46)
    {
        cout<<"E";
    }
    
    else if (marks<24)
    {
        cout<<"fail";
    }
    
return 0;
         





}
