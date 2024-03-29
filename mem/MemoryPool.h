#pragma once
#include "Allocator.h"

namespace Erbium {

	template<class T>
	class MemoryPool
	{
		Allocator memoryAllocator;
		size_t sizeOfChunk;
		uint32_t countOfChunks;
		uint32_t countOfUsedChunks;

		T* head;
		const T type;

	public:

		MemoryPool(uint32_t countOfMemoryChunks);

		T Allocate();
		void Free(T object);

		void CreateNewPool();
		void ResetPool();

		size_t getSizeOfChunk();
		uint32_t getCountOfChunk();
		uint32_t getCountOfUsedChunks();

	};

}