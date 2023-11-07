#include<bits/stdc++.h>
using namespace std;
float guessNumber;
int RandomNumber;

int guess()
{
    cout<<"Guess the number: ";
    cin>>guessNumber;
    
    if(RandomNumber > guessNumber)
    {
        if((abs(RandomNumber - guessNumber)/RandomNumber) > 0.5)
        {
            cout<<"Very low\n";
        }
        else if((abs(RandomNumber - guessNumber)/RandomNumber) > 0.15 && (abs(RandomNumber - guessNumber)/RandomNumber) <= 0.5)
        {
            cout<<"Low\n";
        }
        else if((abs(RandomNumber - guessNumber)/RandomNumber) <= 0.15)
        {
            cout<<"very close but low\n";
        }
        return guess();
    }
    else if(RandomNumber < guessNumber)
    {
        if((abs(RandomNumber - guessNumber)/RandomNumber) > 0.5)
        {
            cout<<"Very high\n";
        }
       else if((abs(RandomNumber - guessNumber)/RandomNumber) > 0.15 && (abs(RandomNumber - guessNumber)/RandomNumber) <= 0.5)
        {
            cout<<"high\n";
        }
        
        else if((abs(RandomNumber - guessNumber)/RandomNumber) <= 0.15)
        {
            cout<<"very close but high\n";
        }
        return guess();
    }
    else
    {
        cout<<"\nYou guessed the correct number !!"<<endl;
        return 0;
    }
    return 0;
}


int main()
{
    int n;
    cout<<"Enter the range of random number:\n";
    cin>>n;
    srand((unsigned)time(NULL));
    RandomNumber = rand()%n;
    cout<<"\nThe random number is generated between 0 to "<<n<<endl; 
    cout<<"\nPlease start guessing the number\n";
    guess();
    
}
