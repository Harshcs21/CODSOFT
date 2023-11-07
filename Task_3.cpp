#include<bits/stdc++.h>
using namespace std;

char board[3][3];
int flag = 0;

void display()
{
    int k = 1;
    cout<< "   1  2  3\n";
    for(int i =0 ;i <3; i++)
    {
        cout<<k<<" ";
        k++;
        for(int j =0 ; j<3; j++)
        {
            cout<<board[i][j];
            if(j<2)
            {
                cout<<" | ";
            }
        }
        cout<<endl;
        if(i<2)
        {
            cout<<"  ---------"<<endl; 
        }
    }
        cout<<endl;
}

bool validMove(int row, int col) {
    return (row >0 && row <= 3 && col > 0 && col <= 3 && board[row - 1][col - 1] == ' ');
}


int gameover()
{
    for(int i =0 ;i<3;i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return 1;
        }
    }
    
    for(int i =0 ;i<3;i++)
    {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return 1;
        }
    }
    
    if(board[0][0] != ' ' && (board[0][0] == board[1][1]) && board[1][1] == board[2][2])
    {
        return 1;
    }
    
    if(board[0][2] != ' ' && (board[0][2] == board[1][1]) && board[1][1] == board[2][0])
    {
        return 1;
    }
    
    for(int i =0 ;i<3;i++)
    {
        for(int j=0 ;j<3;j++)
        {
          if( board[i][j] == ' ')
          {
              
              return 0;
              
          }
        }
    }
    
    
    int count =0 ;
    
    for(int i =0 ;i<3;i++)
    {
        for(int j=0 ;j<3;j++)
        {
          if( board[i][j] != ' ')
          {
              count++;
          }
        }
    }
    if(count == 9)
    {
        flag = 1;
    }
    
    
    return 1;
    
}


int main()
{
    for(int i=0 ;i <=2; i++)
    {
        for(int j =0 ;j<=2; j++)
        {
            board[i][j] = ' ';
        }
    }
    
    int cPlayer = 0;
    int row , col;
    
    display();
    
    while(!gameover())
    {
        cout<<"Player " << cPlayer + 1 << " turn. Enter the index of box \n";  
        cin>>row>>col;
        
        if(validMove(row,col) == true)
        {
            if(cPlayer == 0)
            {
                board[row - 1][col-1] = 'X';
                cPlayer = 1;
            }
            else
            {
                board[row - 1][col - 1] = 'Y';
                cPlayer = 0;
            }
            display();
        }
        else
        {
            cout<<"Invalid Move\n";
        }
        
        
    }
    
    if(gameover() == 1 && flag == 1)
        {
            cout<<"The game is draw\n";
        }
        else
        {
            cout<<"Player " << (cPlayer == 0 ? 2 : 1) << " Wins\n"; 
        }
        
        
    
}
