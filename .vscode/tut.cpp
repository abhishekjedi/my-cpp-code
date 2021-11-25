# include <iostream>
using namespace std;
int age;
int main(){
    cout<<"enter age";
    cin>>age;
   // cout<<"hello";
   switch (age)
   {
   case 18:
    cout<<"you are 18";
    break;
    case 20:
    cout<<"you are 20";
    break;
    default:
    cout<<"you are none";
    break;

   }
    return 0;
}