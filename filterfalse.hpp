#include <vector>
#include "taskIterator.hpp"
using namespace std;
namespace itertools{
	template<class T,class F> 
	DummyIterable filterfalse(T a, F b){return DummyIterable{};}
	/*class filterfalse{
		public:
		template<typename T, typename F>
		vector<int> operator ()(F func, T container){
			vector<int> out(container.size());
			for(typename T::vector i=container.begin();i<container.end();i++){
				if(!F(i))out.push_back(i);
			}
			return out;
			}
	};*/
}