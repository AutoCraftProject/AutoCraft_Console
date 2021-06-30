#ifndef __RENDER_H__
#define __RENDER_H__

#include "../util/head.h"

namespace Render {
	class Renderer {
		std::string buff;
	public:
		Renderer();
		void write(std::string word);
		void doRender(std::ostream& stream);
	};

	interface IRenderable {
		virtual void render(Renderer &renderer) = 0;
	};
}

#endif
