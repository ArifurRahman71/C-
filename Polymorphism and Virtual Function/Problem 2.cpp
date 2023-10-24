#include<iostream>
#include<cmath>
using namespace std;
class dist
{
    public:
    double a=2,b=4,c=6,d=8,distance,time;
    virtual void trav_time()
    {
        distance=sqrt(pow(b-a,2)+pow(d-c,2));
        time=(distance/60);
        cout<<"Travel Distance   "<<distance<<"  Miles"<<endl;
        cout<<"travel Time  "<<time<<"  hour"<<endl;

    }

};
class metric: public dist 
{
    void trav_time()
    {
        distance=sqrt(pow(b-a,2)+pow(d-c,2));
        time=(distance/100);
        cout<<"Travel Distance   "<<distance<<"  Kilometer"<<endl;
        cout<<"travel Time  "<<time<< "  Hour"<<endl;

    }
};
int main()
{
    dist *p;
    metric q;
    p=&q;
    p->dist::trav_time();  // This will call the virtual function
    p-> trav_time();// this will call the non-virtual function
    
}