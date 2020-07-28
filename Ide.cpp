#include <iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
#include<string>
char a[9]={'0','1','2','3','4','5','6','7','8'};
int checkwin()
{
    if(a[0]==a[1] && a[1]==a[2])
    {
        if(a[0]=='x')
        return 1;
        else
        return 2;
    }
    else if(a[0]==a[3] && a[3]==a[6])
    {
        if(a[0]=='x')
        return 1;
        else
        return 2;
    }
    else if(a[6]==a[7] && a[7]==a[8])
    {
        if(a[6]=='x')
        return 1;
        else
        return 2;
    }
    else if(a[2]==a[5] && a[5]==a[8])
    {
        if(a[2]=='x')
        return 1;
        else
        return 2;
    }
    else if(a[0]==a[4] && a[4]==a[8])
    {
        if(a[0]=='x')
        return 1;
        else
        return 2;
    }
    else if(a[2]==a[4] && a[4]==a[6])
    {
        if(a[2]=='x')
         return 1;
         else
         return 2;
    }
    else if(a[1]==a[4] && a[4]==a[7])
    {
        if(a[1]=='x')
        return 1;
        else
        return 2;
    }
    else if(a[3]==a[4] && a[4]==a[5])
    {
        if(a[3]=='x')
        return 1;
        else
        return 2;
    }
    else 
    return 0;
}
void mark(int player,int box)
{
    if(player==1)
    a[box]='x';
    else
    a[box]='o';
}
void display()
{
    for(int i=0;i<9;i++)
    {
        cout<<a[i]<<" ";
        if(i==2 || i==5 || i==8)
        cout<<endl;
    }
}
int main() 
{   
    int player1=1,player2=2;
    int box,result=0,flag=0;
    for(int i=0;i<5;i++)
    {
        cout<<"player1 enter the box"<<endl;
        cin>>box;
        mark(player1,box);
        display();
        result=checkwin();
        if(result==1)
        {
            cout<<"\nplayer"<<player1<<" has won the game";
            flag=1;
            break;
        }
        else if(result==2)
        {
            cout<<"\nplayer2 has won the game";
            flag=1;
            break;
        }
        cout<<"\nplayer"<<player2<<" enter the box";
        cin>>box;
        mark(player2,box);
        display();
        result=checkwin();
        if(result==1)
        {
            cout<<"\nplayer1 has won the game";
            flag=1;
            break;
        }
        else if(result==2)
        {
            cout<<"\nplayer2 has won the game";
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"\nThe game is draw";
	 return 0;
}
