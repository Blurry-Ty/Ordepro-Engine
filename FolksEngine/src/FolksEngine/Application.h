#pragma once

#include "Core.h"

namespace folk {

	class FK_API Application
	{
	public:
		Application();
		virtual ~Application();


		void Run();
	};
	Application* CreateApplication();

}

