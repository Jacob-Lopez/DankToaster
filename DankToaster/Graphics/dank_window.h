#pragma once

#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

class dank_window {
private:
	int _width, _height;
	const char* _title;
	GLFWwindow* _window;
	const static int MAX_KEYS = 500;
public:
	bool keys[MAX_KEYS];

	dank_window(const int width, const int height, const char* title);
	~dank_window();
	void update();
	inline void clear() { glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); };
	inline bool open() { return !glfwWindowShouldClose(_window); };
};
