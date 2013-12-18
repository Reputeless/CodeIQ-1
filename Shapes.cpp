# include "Shapes.hpp"

namespace s3d
{
	std::vector<Vec2> CreateRect(double x, double y, double w, double h)
	{
		return{ { x, y }, { x + w, y }, { x + w, y + h }, { x, y + h } };
	}

	std::vector<Vec2> CreatePlus(double r, double width, const Vec2& center)
	{
		return{};
	}

	std::vector<Vec2> CreatePentagon(double r, double angle, const Vec2& center)
	{
		return{};
	}

	std::vector<Vec2> CreateHexagon(double r, double angle, const Vec2& center)
	{
		return{};
	}

	std::vector<Vec2> CreateNgon(int n, double r, double angle, const Vec2& center)
	{
		return{};
	}

	std::vector<Vec2> CreateStar(double r, double angle, const Vec2& center)
	{
		return{};
	}

	std::vector<Vec2> CreateNStar(int n, double rOuter, double rInner, double angle, const Vec2& center)
	{
		return{};
	}
}
