#include<bits/stdc++.h>
using namespace std;
list<string> s;

void add()
{
    cout<<"Enter the task : \n";
    string a;
    getline(cin >> ws, a);
    
    s.push_back(a);
    cout<<endl;
}

void del()
{   
    int y= 1;
    cout<<"Enter the task number to delete : \n";
    for(auto i : s)
    {
        cout<<"Task "<<y<<" : "<<i<<endl;
        y++;
    }
    
    int rem ;
    cin>>rem;
    
    list<string>::iterator ptr = s.begin(); 
    
    for(int i =0 ;i <rem - 1; i++)
    {
        *ptr++;
    }
    
    s.erase(ptr);
    
    
    cout<<"Task coresponding to number " << rem <<" has been deleted\n";

}

void display()
{
    cout<<"The follwing task are : \n";
    int y=1 ;
    
    for(auto i : s)
    {
        cout<<"Task "<<y<<" : "<<i<<endl;
        y++;
    }
    cout<<"\n";
}

int main()
{
    while(1)
    {
        int n;
        cout<<"1. Add\n2. Delete\n3. Display\n4. Exit\n";
        cout<<"Choose the follwing: ";
        cin>>n;
        cout<<endl;
        
        switch(n)
        {
            case 1: add();
                    break;
                        
            case 2: del();
                    break;
            
            case 3: display();
                    break;
            
            case 4: return 0;
            
            default : cout<<"Incorrect Input!! \n";
        }
        
        
    }    
}
