#include<iostream>
using namespace std;

class square
{
   private:
        float n1,r1;
        public:
                void input();
        void calc();
                void display();
};

inline void square::input()
{
        cout<<"\nEnter a float no. :: ";
        cin>>n1;
}
inline void square::calc()
{
        r1=n1*n1;
}
inline void square::display()
{
        cout<<"\nSquare of float [ "<<n1<<" ] = "<<r1<<"\n";
}
int main ()
{
        square s;
        s.input();
        s.calc();
        s.display();
        return 0;
}
