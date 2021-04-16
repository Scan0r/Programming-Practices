#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
class Box {
//l,b,h are integers representing the dimensions of the box
    private:
        int l, b, h;

    public:
// The class should have the following functions : 
// Constructors:

// Box();
    Box(){
        this->l = 0;
        this->b = 0;
        this->h = 0;
    }

// Box(int,int,int);
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
// Box(Box);
    Box(Box& box) {
        this->l = box.l;
        this->b = box.b;
        this->h = box.h;
    }

// int getLength(); // Return box's length
    int getLength() {
        return this->l;    
    }
// int getBreadth (); // Return box's breadth
    int getBreath() {
        return this->b;
    }
// int getHeight ();  //Return box's height
    int getHeigth() {
        return this->h;
    }
// long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume() {
        return (long long) this->l * this->b * this->h;
    }

//Overload operator < as specified
//bool operator<(Box& b)
    bool operator<(Box& box) {
        return (this->l < box.l) || (this->b < box.b && this->l == box.l) ||
        (this->h < box.h && this->b == box.h && this->l == box.l);
    }
};

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
    ostream& operator<<(ostream& out, Box& B) {
        out << B.getLength() << " " << B.getBreath() << " " << B.getHeigth();
        return out;
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
