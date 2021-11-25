/*# include <iostream>

using namespace std;

int a=10;

void sum(){
    cout<<"\nanother value of a is "<<a;
}

int main(){
    int a = 4.2 , b = 5;
    cout<<"hello world \nthe value of a is "<< a<<"\nthe value of b is "<<b ;
    sum();
    return 0;
    
}*/
/*#  include <iostream>

using namespace std;

int main(){
    int num1,num2;
    cout<<"enter value of num 1 ";
    cin>>num1;
    cout<<"enter value of num 2 ";
    cin>>num2;
    cout<<"sum of numbers is"<<num1 +num2;
    return 0;
}*/
/* ">>" is callled extraction operator
"<<" is called insertion operator*/
# include <iostream>

using namespace std;

int main(){

    int age;

    //cout<<"hello";
    cout<<"enter age";

    cin>>age;

    if(age<18){
        cout<<"person can't come to party";
    }
    else if(age == 18){
        cout<<"person can come";
    }
    else{
        cout<<"person has to come";
    }

    return 0;
}

