#include "render.h"

namespace Render {
	Renderer::Renderer() {
		buff = "";
	}

	void Renderer::write(std::string word) {
		buff += word;
	}

	void Renderer::doRender(std::ostream& stream) {
		system("cls");
		stream << buff;
		buff = "";
	}
}