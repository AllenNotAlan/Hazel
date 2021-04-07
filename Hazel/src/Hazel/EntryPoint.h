#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialised log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);
	HZ_CRITICAL("damnnn");

	/*printf("Hazel Engine!");*/
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif