#ifndef MEMORY_H
#define MEMORY_H

#include <deque>

namespace mem{

	struct Page{
		// VA:				Virtual Address where the Page is stored
		// dirty:			Page changed flag
		// referenced:		Page accessed flag
		// operation:		Operation to be performed on this Page
		unsigned int VA;
		bool dirty;
		bool referenced;
		char operation;
	};
	struct Process{
		// pageRefs:		List of Virtual Addresses referring to the pages needed by the Process
		// PID:				Process ID
		std::deque<unsigned int> pageRefs;
		unsigned int PID;
	};

	bool isPageLoaded(std::deque<mem::Page>& PhysAddrSp, unsigned int VA);
	void loadPage(std::deque<mem::Page>& PhysAddrSp, unsigned int VA, char op);
}

#endif