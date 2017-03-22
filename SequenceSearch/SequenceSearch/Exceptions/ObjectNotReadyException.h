#ifndef SEQUENCE_SEARCH_OBJECT_NOT_READY_EXCEPTION_H
#define SEQUENCE_SEARCH_OBJECT_NOT_READY_EXCEPTION_H

#include <exception>

namespace SequenceSearch
{
	class ObjectNotReadyException : public std::exception
	{
	public:
		virtual const char * what() const throw()
		{
			return "Attempted to initialize object before initializing static attributes "
				"(would result in object in incorrect state).\n"
				"These attributes can be initialized using \'Manager\' class.";
		}
	};
}

#endif // !SEQUENCE_SEARCH_OBJECT_NOT_READY_EXCEPTION_H
