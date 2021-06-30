#include "./util/head.h"

#include "./render/render.h"
#include "./gmobj/item.h"

int main() {
	Render::Renderer renderer;
	while (true) {
		renderer.doRender(std::cout);
		Sleep(100);
	}
}