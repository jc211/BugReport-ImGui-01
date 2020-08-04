#pragma once
#include <string>
#include <memory>
#include <filesystem>
#include <vector>
#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_glfw.h>

void draw_central_dockspace();

struct GLFWwindow;
class window {
public:
	window(std::string window_name = "Main", int width = 640, int height = 480);
	~window();
	void imgui_begin();
	void imgui_end();
	void poll_and_swap();
	bool should_close();
	void clear();
	std::pair<int, int> size();
	void viewport(int x, int y, int width, int height);

public:
	GLFWwindow* glfw_window;
	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

private:
	bool initialized = false;
};

