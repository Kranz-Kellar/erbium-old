#pragma once
#include "..//Shader.h"
#include "..//Texture2D.h"

namespace Erbium {

	struct IDrawData
	{
		std::shared_ptr<Shader> shader;
		std::shared_ptr<Texture2D> texture;

		virtual ~IDrawData() {};
	};

}
