#ifndef __RENDER__
#define __RENDER__

#include "head.h"

class Renderer {
	string buff;
public:
	Renderer();
	void write(string word);
	void doRender(ostream& stream);
};

interface IRenderable {
	virtual void render(Renderer &renderer) = 0;
};

#endif
