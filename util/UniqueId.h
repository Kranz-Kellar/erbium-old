#pragma once
#include <cstdint>


class UniqueId
{
	static uint32_t nextId;

	static uint32_t GetId() {
		return ++nextId;
	}

public:
	uint32_t id;

	UniqueId() {
		this->id = GetId();
	}

	bool operator==(const UniqueId& other) {
		if (this->id == other.id) {
			return true;
		}

		return false;
	}
};

unsigned int UniqueId::nextId = 0;