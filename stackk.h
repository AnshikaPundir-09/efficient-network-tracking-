#ifndef STACKK_H
#define STACKK_H
#include<stack>
using namespace std;
class stackk
{
    private:
    stack<int>track;
    public:
    void connectr(int router);
    void move_n_r(int router);
    void disconnect();
    void current_dev();
    void past_connection();
    
};
#endif