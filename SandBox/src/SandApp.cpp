#include <Navy.h>

class Sandbox : public NAVY_ENGINE::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

NAVY_ENGINE::Application* NAVY_ENGINE::CreateApplication() {
	return new Sandbox();
}