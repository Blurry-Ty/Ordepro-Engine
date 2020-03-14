#pragma once

#ifdef FK_PLATFORM_WINDOWS

extern folk::Application* folk::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = folk::CreateApplication();
	app->Run();
	delete app;
}

#endif