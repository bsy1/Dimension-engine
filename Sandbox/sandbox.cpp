#include <Dimension-engine.h>
#include <bits\stdc++.h>
class Sandbox : public de::Appliction
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};
de::Appliction* de::CreateAppliction()
{
	return new Sandbox();
}
