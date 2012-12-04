#include "memory.h"

namespace{
	bool isPageLoaded(std::deque<mem::Page>& PhysAddrSp, unsigned int VA){
		// Check to see if the Page with Virtual Address VA, is in the Physical 
		// Address Space.
		for(size_t ndx = 0; ndx < PhysAddrSp.size(); ndx++){
			if(PhysAddrSp[ndx].VA == VA){
				return true;
			}
		}
		return false;
	}
	void loadPage(std::deque<mem::Page>& PhysAddrSp, unsigned int VA, char op){}
}