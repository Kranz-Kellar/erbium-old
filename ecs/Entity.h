#pragma once

#include "..//Logger.h"

#include "..//util/UniqueId.h"
#include "Component.h"
#include <vector>
#include <bitset>

namespace Erbium {

	typedef std::vector<bool> ComponentsMask;
	typedef std::vector<Component> Components;

	class Entity
	{
	public:
		Entity();
		~Entity();
		UniqueId id;
		ComponentsMask componentsMask;
		Components components;
		void* operator new(std::size_t count) = delete;
		void* operator new[](std::size_t count) = delete;
		void operator delete(void* ptr) = delete;
		void operator delete[](void* ptr) = delete;
	};
}
