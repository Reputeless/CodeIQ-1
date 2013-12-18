
# include <Siv3D.hpp>

namespace codeIQ
{
	/**
	*	長方形の頂点配列を返します。
	*	@param x 長方形の左上座標
	*	@param y 長方形の右上座標
	*	@param w 長方形の幅
	*	@param h 長方形の高さ
	*	@return 長方形の頂点配列
	*/
	std::vector<Vec2>
		CreateRect(
		double x,
		double y,
		double w,
		double h
		);

	/**
	*	十字形の頂点配列を返します。
	*	@param r 一番離れた辺から中心点までの距離
	*	@param width 十字形を構成する 2 線分の太さ
	*	@param center 十字形の中心座標
	*	@return 十字形の頂点配列
	*/
	std::vector<Vec2>
		CreatePlus(
		double r,
		double width,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	正五角形の頂点配列を返します。
	*	@param r 外接円の半径
	*	@param angle 時計方向への回転角度[ラジアン], 0 のとき頂点が 12 時の位置と重なる
	*	@param center 正五角形の中心座標
	*	@return 正五角形の頂点配列
	*/
	std::vector<Vec2>
		CreatePentagon(
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	正六角形の頂点配列を返します。
	*	@param r 外接円の半径
	*	@param angle 時計方向への回転角度[ラジアン], 0 のとき頂点が 12 時の位置と重なる
	*	@param center 正六角形の中心座標
	*	@return 正六角形の頂点配列
	*/
	std::vector<Vec2>
		CreateHexagon(
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	正 N 角形の頂点配列を返します。
	*	@param r 外接円の半径
	*	@param angle 時計方向への回転角度[ラジアン], 0 のとき頂点が 12 時の位置と重なる
	*	@param center 正 N 角形の中心座標
	*	@return 正 N 角形の頂点配列、n<3 の場合は空の配列
	*/
	std::vector<Vec2>
		CreateNgon(
		int n,
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	五光星 (☆) の頂点配列を返します。
	*	@param r 外接円の半径
	*	@param angle 時計方向への回転角度[ラジアン], 0 のとき頂点が 12 時の位置と重なる
	*	@param center 五光星の中心座標
	*	@return 五光星の頂点配列
	*/
	std::vector<Vec2>
		CreateStar(
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	星形図形の頂点配列を返します。
	*	@param n 光の数（五光星 ☆ の場合、5）
	*	@param rOuter 中心から外側の頂点までの距離
	*	@param rInner 中心から内側の頂点までの距離
	*	@param angle 時計方向への回転角度[ラジアン], 0 のとき頂点が 12 時の位置と重なる
	*	@param center 図形の中心座標
	*	@return 星形図形の頂点配列、n<2 の場合は空の配列
	*/
	std::vector<Vec2>
		CreateNStar(
		int n,
		double rOuter,
		double rInner,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);
}
