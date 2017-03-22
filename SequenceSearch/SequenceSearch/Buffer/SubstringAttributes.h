#ifndef SEQUENCE_SEARCH_SUBSTRING_ATTRIBUTES_H
#define SEQUENCE_SEARCH_SUBSTRING_ATTRIBUTES_H

#include "..\Config\config.h"

namespace SequenceSearch
{
	class SubstringAttributes
	{
	public:
		SubstringAttributes(unsigned int _prefixLength, unsigned int suffixLength) : 
			prefixLength(_prefixLength), suffixLength(suffixLength) {}
		
		const unsigned int prefixLength;
		const unsigned int suffixLength;
	};
}

#endif // !SEQUENCE_SEARCH_SUBSTRING_ATTRIBUTES_H
