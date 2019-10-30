#pragma once

#ifdef DR_PLATFORM_WINDOWS

extern Dream::Application* Dream::CreateApplication();

int main(int argc, char** argv)
{
	Dream::Log::Init();
	DR_CORE_WARN("Initialized Log!");
	int a = 5;
	DR_INFO("Hello Var={0}", a);


	auto app = Dream::CreateApplication();
	app->Run();
	delete app;
}
#endif