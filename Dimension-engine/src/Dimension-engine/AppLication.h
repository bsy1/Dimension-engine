#pragma once
# include "Core.h"
namespace de {
	class DE_API Appliction {
	public:
		Appliction();
		virtual ~Appliction();
		void Run();
	};
	//To be defined in your app.
	Appliction* CreateAppliction();
}