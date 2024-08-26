#pragma once

#include "Core.h"

namespace NAVY_ENGINE {

	class NAVY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// to be define in client
	Application* CreateApplication();
}

