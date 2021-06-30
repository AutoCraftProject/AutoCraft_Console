#include "item.h"

Item::Properties::Properties(string name, string id, int maxStack) {
	this->name = name;
	this->id = id;
	this->maxStack = maxStack;
}

Item::Properties::Builder::Builder() {
	_name = "";
	_id = "";
	_maxStack = 99;
}

Item::Properties::Builder& Item::Properties::Builder::name(string name) {
	_name = name;
	return *this;
}

Item::Properties::Builder& Item::Properties::Builder::maxStack(int stack) {
	_maxStack = stack;
	return *this;
}

Item::Properties Item::Properties::Builder::build() {
	if (_name == "")
		throw "Item name shouldn't be ignore";
	if (_id == "")
		throw "Item id shouldn't be ignore";
	return Properties(_name, _id, _maxStack);
}

Item::Item(Properties propertiesIn) : properties(propertiesIn){
}

void Item::render(Renderer &renderer) {
	renderer.write(this->properties.name);
}
