#pragma once
#ifdef DE_PLATFORM_WINDOWS
extern de::Appliction* de::CreateAppliction();
int main(int argc,char** argv)
{
	auto app= de::CreateAppliction();
	app->Run();
	delete app;
	return 0;
}
#else
    #error Dimension-engine is only in Windows!
#endif