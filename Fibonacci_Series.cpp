//Q(1.)
//Bitwise Operator:
/*
#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<" a&b "<<(a&b)<<endl;
    cout<<" a|b "<<(a|b)<<endl;
    cout<<" ~a "<<(~a)<<endl;
    cout<<" a^b "<<(a^b)<<endl; 
}    */

//Q(2.)
//Fibonacci Series:
/*
#include<iostream>
using namespace std;
int main()
{
   int n=10;
   int a=0;
   int b=1;
   cout<<a<<" "<<b<<" ";
   int i;
   for(i=1;i<=n;i++)
   {
     int NextNumber=a+b;
     cout<<NextNumber<<" ";
     
     a=b;
     b=NextNumber;
   }

}   */

//Q(3.)
// WAP to check the progrm is Prime or NOt Prime :

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    
    bool isPrime=1;

    for(int i=2;i<n;i++)
    {
        //rem = 0, Not a Prime
        if(n%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime==0)
    {
        cout<<"Number is not Prime";
    }
    else
    {
        cout<<"Number is Prime";
    }

}  

//Q(4.)
//Use of contine:
/*
#include<iostream>
using namespace std;
int main()
{
    for (int i=0;i<5;i++)
    {
        cout<<"Hii"<<endl;
        cout<<"Helo"<<endl;
        continue;
        cout<<"Reply To Kr De"<<endl;
    }
}         */
