#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age : ";
    cin>>age;
    if (age>60)
    {
        
       cout<<"highest priority";



    }
        
    
   else if (age<18)
   {
       cout<<"not eligible";
   }
   
   else if (age>=18&&age<60)
   {
       cout<<"lowest priority";
   }
   

return 0;




}