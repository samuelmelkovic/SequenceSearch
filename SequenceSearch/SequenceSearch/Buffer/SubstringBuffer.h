#ifndef SEQUENCE_SEARCH_SUBSTRING_BUFFER_H
#define SEQUENCE_SEARCH_SUBSTRING_BUFFER_H

#include ".\Buffer.h"

#include ".\SubstringAttributes.h"

#include "..\Exceptions\ObjectNotReadyException.h"

#include <deque>

#include <istream>

namespace SequenceSearch
{
	template <typename T>
	class SubstringBuffer : Buffer<T, std::deque<T> >
	{
		std::deque <T> data;
		long position;
		static unsigned int bufferMaxSize = 0;
	public:
		SubstringBuffer()
		{
			if (bufferMaxSize == 0)
			{
				throw new ObjectNotReadyException;
			}
			data.resize(bufferMaxSize);
		}

		const std::deque<T>& getData() const noexcept
		{
			return data;
		}

		long getPosition() const noexcept
		{
			return position;
		}

		std::istream & readFrom(std::istream & input);
	};
}

#endif // !SEQUENCE_SEARCH_BUFFER_BUFFER_H
