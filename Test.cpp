#include "doctest.h" 
#include "range.hpp"

using namespace itertools;
using namespace std;

TEST_CASE("testing tests"){
	for(int i=0;i<100;i++){
		
		CHECK(i==i);
				
	}
}