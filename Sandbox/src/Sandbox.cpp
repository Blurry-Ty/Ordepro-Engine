#include <Folk.h>

class SandBox : public folk::Application {
public:
	SandBox() {

	}
	~SandBox() {

	}
};

folk::Application* folk::CreateApplication() {
	return new SandBox();
}