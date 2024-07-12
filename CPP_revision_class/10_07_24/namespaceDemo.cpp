#include<iostream>
using namespace std;
#include<string.h>
namespace myNamespace {
	class myClass{
		public:
			void fun()
			{
				cout<<"\n myNamespace myClass fun() is called..";
			}
	};
}

namespace yourNamespace {
    class myClass{
    	public:
    		void fun()
    		{
    			cout<<"\n yourNamespace myClass fun() is called..";
			}
			void fun2()
			{
				cout<<"\n yourNamespace myClass fun2() is called..";
			}
	};

}
/*
using namespace yourNamespace;
int main()
{
	myClass obj;
	obj.fun();
	obj.fun2();
}*/
using namespace myNamespace;
int main()
{
	myClass obj1;
	obj1.fun();
	return 0;
}
