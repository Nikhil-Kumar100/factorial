#include<iostream>
using namespace std;
int main(){
    int num;
    long double factroial=1.0;
    cout<<"Enter an Integer number  ";
    cin>>num;
    if(num<0){
        cout<<"factorial of negative number is not possible";
    }
    else{
for(int i=1;i<=num;i++){
factroial *=i ;
}
cout <<"Factroial :-  "<<factroial;
}
return 0;
}
