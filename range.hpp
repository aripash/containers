namespace itertools{
	template<typename T>class range{
		public:
		T _begin, _end;
		range(T begin,T  end):_begin(begin),_end(end){}
		
		class iterator{
			public:
			T pointer;
			iterator(T p):pointer(p){}
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
				++pointer;
				return *this;
			}
		};
		range::iterator begin(){
			return range::iterator(_begin);
		}
		range::iterator end(){
			return range::iterator(_end);
		}
	};
}