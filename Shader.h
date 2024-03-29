#pragma once

#include <GL/glew.h>
#include <iostream>
#include <glm/glm.hpp>
//#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace Erbium {

	class Shader
	{
		enum ShaderType {
			VERTEX,
			GEOMETRY,
			FRAGMENT,
		};


		GLuint Compile(const char* source, ShaderType type);
		bool IsCompileSuccess(GLuint shader);
		GLuint id;


	public:
		Shader(const char* vertexShaderPath, const char* fragmentShaderPath);
		~Shader();


		void Bind() const;
		void SetUniform4f(const char* uniformName, float x, float y, float z, float w) const;
		//TODO: setters for all kind of uniforms
		void SetMat4f(const char* uniformName, glm::mat4 mat) const;

	};

}
