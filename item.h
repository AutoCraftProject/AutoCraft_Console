#ifndef __ITEM__
#define __ITEM__

#include "render.h"

class Item : public IRenderable {
public:
	class Properties {
		string name;
		string id;
		int maxStack;

		Properties(string name, string id, int maxStack);
	public:
		class Builder {
			string _name;
			string _id;
			int _maxStack;

			Builder();
			Builder& name(string name);
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

#endif