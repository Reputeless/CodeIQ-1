# include <Siv3D.hpp>
# include "Shapes.hpp"

void Main()
{
	const Polygon polygon(CreateRect(10, 40, 100, 200));

	//const Polygon polygon(CreatePlus(50, 20, { 20, 20 }));

	//const Polygon polygon(CreatePentagon(200));

	//const Polygon polygon(CreateHexagon(200));

	//const Polygon polygon(CreateNgon(8,200));

	//const Polygon polygon(CreateStar(200.0));

	//const Polygon polygon(CreateNStar(32,200.0,160.0));

	while (System::Update())
	{
		polygon.draw(Mouse::Pos());
	}
}

