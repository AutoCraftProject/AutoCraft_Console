#include "render.h"

Renderer::Renderer() {
	buff = "";
}

void Renderer::write(string word) {
	buff += word;
}

void Renderer::doRender(ostream& stream) {
	system("cls");
	stream << buff;
	buff = "";
}
