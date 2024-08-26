#pragma once

#ifdef NV_PLATFORM_WINDOWS

extern NAVY_ENGINE::Application* NAVY_ENGINE::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = NAVY_ENGINE::CreateApplication();
	app->Run();
	delete app;
}

#endif
