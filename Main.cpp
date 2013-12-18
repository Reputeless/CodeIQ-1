# include <Siv3D.hpp>
# include "Shapes.hpp"

void Main()
{
	const Polygon polygon(codeIQ::CreateRect(10, 40, 100, 200));

	//const Polygon polygon(codeIQ::CreatePlus(100, 60, { 20, 20 }));

	//const Polygon polygon(codeIQ::CreatePentagon(120,Radians(25)));

	//const Polygon polygon(codeIQ::CreateHexagon(120));

	//const Polygon polygon(codeIQ::CreateNgon(8,120));

	//const Polygon polygon(codeIQ::CreateStar(120.0));

	//const Polygon polygon(codeIQ::CreateNStar(32,120.0,80.0));

	while (System::Update())
	{
		polygon.draw(Mouse::Pos());
	}
}

