#pragma once

#include "dank_shader.h"
#include "dank_batch_renderer.h"
#include "dank_sprite.h"
#include "dank_widget.h"
#include <vector>

class dank_ui_layer {
private:
	float _depth;
	std::vector<dank_widget*> _widgets;
public:
	dank_ui_layer();
	dank_ui_layer(float depth);
	~dank_ui_layer();

	void add(dank_widget* widget);
	void render();
};