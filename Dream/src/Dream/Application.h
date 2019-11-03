#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Dream {
	class DREAM_API Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	private:
		bool m_Running = true;
		std::unique_ptr<Window> m_Window;
	};

	// To be defined by client
	Application* CreateApplication();
};
