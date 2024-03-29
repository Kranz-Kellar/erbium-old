#pragma once
#include <string>
#include <memory>
#include "Image.h"

namespace Erbium {

	class ImageLoader
	{
	public:
		std::shared_ptr<Image> virtual LoadImage(std::string path) = 0;
		virtual ~ImageLoader() {};
	};


}