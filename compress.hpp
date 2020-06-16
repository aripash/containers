#include <vector>
#include "taskIterator.hpp"
using namespace std;
namespace itertools{
	template<class T,class F> 
	DummyIterable compress(T a, F b){return DummyIterable{};}
	/*class compress{
		public:
		template<typename T1,typename T2>
		vector<int> operator()(T1 container1,T2 container2){
			vector<int> out(container1.size());
			typename T2::vector j=container2.begin();
			for(typename T1::vector i=container1.begin();i<container1.end();i++){
				if(j)out.push_back(i);
				j++;
			}
			return out;
		}
	};*/
}