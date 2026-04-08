#include "stackk.h"
#include<iostream>
#include<stack>
using namespace std;
void stackk::connectr(int router)
{
    track.push(router);
    cout<<"the device connected to router"<<router<<endl;

}
void stackk::move_n_r(int router)
{
    track.push(router);
    cout<<"movement to new router"<<router<<endl;}
void stackk::disconnect()
{
    if(track.empty())
    {
        cout<<"nothing in connection at  current momment"<<endl;
        return ;
    }
    else{
        cout<<" device disconnected from router"<<track.top()<<endl;
        track.pop();
    }

}
void stackk::past_connection()
{
    if(track.empty())
    {
        cout<<"nothing was in connection and the history is empty"<<endl;
    }
    else{
        stack<int>temp_track=track;
        stack<int>rev;
        while(!temp_track.empty())
        {
            rev.push(temp_track.top());
            temp_track.pop();
        }
        cout<<"history of connection and  loaction";
        while(!rev.empty())
        {
            cout<<rev.top()<<endl;
            rev.pop();
        }
        cout<<endl;
    }

}
void stackk::current_dev()
{
    if(track.empty())
    {
        cout<<"no current device connected to  the router"<<endl;
        return;
    }
    cout<<"current router"<<track.top()<<endl;
}