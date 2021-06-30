#ifndef __ITEM_H__
#define __ITEM_H__

#include "../render/render.h"

namespace GameObject {
	using namespace Render;
	class Item : public IRenderable {
	public:
		class Properties {
			std::string name;
			std::string id;
			int maxStack;

			Properties(std::string name, std::string id, int maxStack);
		public:
			class Builder {
				std::string _name;
				std::string _id;
				int _maxStack;

				Builder();
				Builder& name(std::string name);
				Builder& maxStack(int stack);
				Properties build();
			};
		friend class Item;
		};
		Item(Properties propertiesIn);
		virtual void render(Renderer &renderer) override;
	private:
		Properties properties;
	};
}

#endif