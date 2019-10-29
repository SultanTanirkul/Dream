#pragma once

#ifdef DR_PLATFORM_WINDOWS

extern Dream::Application* Dream::CreateApplication();

int main(int argc, char** argv)
{
	printf("Dream Engine Starting!");
	auto app = Dream::CreateApplication();
	app->Run();
	delete app;
}
#endif