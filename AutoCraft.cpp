#include "head.h"

#include "render.h"
#include "item.h" 

int main() {
	Renderer renderer;
	while (true) {
		renderer.doRender(cout);
		Sleep(100);
	} 
}