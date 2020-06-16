#include <vector>
#include "taskIterator.hpp"
using namespace std;
namespace itertools{
	template<class T,class F> 
	DummyIterable accumulate(T a, F b){return DummyIterable{};}
	template<class T> 
	DummyIterable accumulate(T a){return DummyIterable{};}
	/*
	class accumulate{
		public:
		T _begin,_end;
		F _func;
		bool flag=false;
		accumulate(T container){
			_begin=container.begin();
			_end=container.end();
		}
		
		
		accumulate(T container,F func){
			_begin=container.begin();
			_end=container.end();
			_func=func;
			flag=true;
		}
	
	
		class iterator{
			public:
			T pointer;
			F func;
			bool flag=false;
			iterator(T p):pointer(p){}
			iterator(T p,F f):pointer(p),func(f){flag=true;}
			
			bool operator==(iterator r){
				return pointer==r.pointer;
			}
			bool operator!=(iterator r){
				return pointer!=r.pointer;
			}
			T operator*(){
				return pointer;
			}
			iterator &operator++(){
				if(flag){
					auto prev=*pointer; 
					++pointer;
					*pointer=func(*pointer,prev);
					return *this;
				}
				T prev=pointer; 
				++pointer;
				pointer=pointer+prev;
				return *this;
			}
		};
		accumulate::iterator begin(){
			if(flag)return accumulate::iterator(_begin,_func);
			return accumulate::iterator(_begin);
		}
		accumulate::iterator end(){
			if(flag)return accumulate::iterator(_begin,_func);
			return accumulate::iterator(_end);
		}
	};*/
}