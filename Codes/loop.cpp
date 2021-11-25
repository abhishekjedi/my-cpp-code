/* type of loops in c++
   1.for loop 
   2.while loop
   3.do while loop


**************SYNTAX FOR "FOR" LOOOP*****************   
for(initialsation;conditiion;upgradation){
    loop body
} 
example to print first 100 number
for(int i=0;i<100;i++){
    cout<<i<<endl;
}
****************SYNTAX OF WHILE LOOP*****************
while(condition){
    c++ body
}
example to print number between 1 to 40
int i =1;
while(i<=40){
    cout<<i<<endl;
    i++;
} 
**************SYNTAX OF DO WHILE LOOP**********************
******LOOP WILL RUN ATLEAST ONCE IN ANY CASE
int i =1
do{
    cout<<i;
    i++;
}while(i<=40);
*/

#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "enter the number" << endl;
    cin >> i;
    cout << "the table of " << i << " is " << endl;
    int m = 1;
    while (m < 11)
    {
        cout << i << " x " << m << " = " << m * i << endl;
        m++;
    }

    return 0;
}