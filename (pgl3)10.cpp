#include<iostream>
using namespace std;
class max
{
	private:
		int n1,n2,n3;

	public:
		void large()
		{
			cout<<"Enter Number 1 :: ";
			cin>>n1;

			cout<<"Enter Number 2 :: ";
			cin>>n2;

			cout<<"Enter Number 3 :: ";
			cin>>n3;

			if(n1>n2)
			{
				if(n1>n3)
				{
					cout<<"Number 1 is Maximum...";
				}
				else
				{
					cout<<"Number 3 is Maximum...";
				}
			}
			else
			{
				if(n2>n3)
				{
					cout<<"Number 2 is Maximum...";
				}
				else
				{
					cout<<"Number 3 is Maximum...";
				}
			}
			{}
		}
}m1;
int main()
{


	m1.large();

	return 0;
}
