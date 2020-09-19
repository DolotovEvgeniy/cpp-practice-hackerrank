#include<bits/stdc++.h>

using namespace std;

class Box {
public:
    Box() = default;

    Box(int l, int b, int h)
        : l_(l), b_(b), h_(h)
    {}

    int getLength() const {
        return l_;
    }

    int getBreadth() const {
        return b_;
    }

    int getHeight() const {
        return h_;
    }
     long long CalculateVolume() const {
         return l_ * b_ * h_;
     }

     bool operator<(const Box& other) const {
         return tie(l_, b_, h_) < tie(other.l_, other.b_, other.h_);
     }

    friend ostream& operator<<(ostream& os, const Box& box);

private:
    long long l_{0}, b_{0}, h_{0};
};

ostream& operator<<(ostream& os, const Box& box) {
    os << box.l_ << " " << box.b_ << " " << box.h_;
    return os;
}

void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}