#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2,op;
    
    cout<<"Enter the two numbers\n"<<endl;
    cout<<"Number 1: ";
    cin>>num1;
    cout<<"Number 2: ";
    cin>>num2;
    
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Devision\n";
    cout<<"\nChoose the operation: \n";
    cin>>op;
    
    switch(op)
    {
        case 1: cout<<"\n The addition of two number are " << num1+ num2;
                break;
        
        case 2: cout<<"\n The subtraction of two number are " << num1 - num2;
                break;
                
        case 3: cout<<"\n The multiplication of two number are " <<num1*num2;
                break;
                
        case 4: if(num2 != 0)
                {
                    cout<<"\n The devision of two number are " <<(float)num1/num2;
                }
                else
                {
                    cout<< "\nNumber 2 cannot be 0\n";
                }
    }
    
    
    
}
