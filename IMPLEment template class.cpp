#include<iostream>
using namespace std;
template <typename T>
class Pair{
	private:
		T first,second;
		public:
			Pair(T a,T b){
				first+a;
				second=b;
				
			}
			T getMax(){
				return(first>second)?first:second;
			}
			void display(){
				cout<<"first:"<<first<<",second:"<<second<<endl;
			}
};
int main()
{
	Pair<int>P1(10,20);
	P1.display();
	cout<<"max:"<<P1.getMax()<<endl;
    Pair<double>p2(15.5,12.3);
	p2.display();
	cout<< "Max: "<<p2.getMax() <<endl;
	Pair<char>p3('K','S');
	p3.display();
	cout<<"max:"<<p3.getMax()<<endl;
	
	return 0;
}
