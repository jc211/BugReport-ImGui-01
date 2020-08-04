#include <imgui.h>
#include "window.h"

int main(int argc, char* argv[]) {
	window win;
	while (!win.should_close()) {
		win.imgui_begin();
		win.clear();
		draw_central_dockspace();

		ImGui::ShowDemoWindow();

		win.imgui_end();
		win.poll_and_swap();
	}
}