#ifndef SEQUENCE_SEARCH_SUBSTRING_ATTRIBUTES_H
#define SEQUENCE_SEARCH_SUBSTRING_ATTRIBUTES_H

#include "..\Config\config.h"

namespace SequenceSearch
{
	class SubstringAttributes
	{
	public:
		SubstringAttributes(unsigned int _prefixLength, unsigned int _suffixLength, unsigned int _substringLength) : 
			prefixLength(_prefixLength), suffixLength(_suffixLength), substringLength(_substringLength) {}
		
		const unsigned int prefixLength;
		const unsigned int suffixLength;
		const unsigned int substringLength;
	};
}

#endif // !SEQUENCE_SEARCH_SUBSTRING_ATTRIBUTES_H
