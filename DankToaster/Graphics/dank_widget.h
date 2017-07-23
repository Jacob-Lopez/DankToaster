#pragma once

#include "dank_renderable.h"
#include <vector>
#include "Math/dank_mat4.h"
#include "dank_sprite.h"

class dank_widget {
private:
	dank_vec3 _position;
public:
	dank_widget();
	dank_widget(dank_sprite* background);
	~dank_widget();

	dank_mat4 transformation;
	dank_sprite* background;
	std::vector<dank_sprite*> components;

	void add_component(dank_sprite* component);
	void transform(dank_mat4 transform);
};