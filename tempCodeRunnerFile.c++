#include<iostream>
using namespace std;
int main(){
    // 4 bytes for-integer;
    //1 byte for- character;
    //8 bytes for -float
    //8 byes for-double
    //1 bytes for bool

    cout<<"I am a Computer Programmer";
    int firstName,lastName;
    cout <<"Enter the first Name\n";
    cin>>firstName;
    cout<<"My fitsy Name is"<<firstName;
    cout<<"Enter The last Name "<<endl;
    cin>>lastName;
    cout<<"My Last Name is" <<lastName;


    float f=12.56f;
    int size=sizeof(f);
    cout<<size;
   
   // how to check aschii value
    char ch;
    cout<<"Enter the value to check aschii value";
    cin>>ch;
    cout<<"The aschii value of this character is" <<ch;
   
    //how -ve number are stored 
    //-ve number -5

    //s1:ignore the negative sign
    //s2:convert to binary number
    //s3:take 2's complement and store
   
   unsigned int a=112;
   cout<<a<<endl;
    return 0;
}