
# include <Siv3D.hpp>

namespace s3d
{
	/**
	*	�����`�̒��_�z���Ԃ��܂��B
	*	@param x �����`�̍�����W
	*	@param y �����`�̉E����W
	*	@param w �����`�̕�
	*	@param h �����`�̍���
	*	@return �����`�̒��_�z��
	*/
	std::vector<Vec2>
		CreateRect(
		double x,
		double y,
		double w,
		double h
		);

	/**
	*	�\���`�̒��_�z���Ԃ��܂��B
	*	@param r ��ԗ��ꂽ�ӂ��璆�S�_�܂ł̋���
	*	@param width �\���`���\������ 2 �����̑���
	*	@param center �\���`�̒��S���W
	*	@return �\���`�̒��_�z��
	*/
	std::vector<Vec2>
		CreatePlus(
		double r,
		double width,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	���܊p�`�̒��_�z���Ԃ��܂��B
	*	@param r �O�ډ~�̔��a
	*	@param angle ��]�p�x[���W�A��], 0 �̂Ƃ����_�� 12 ���̈ʒu�Əd�Ȃ�
	*	@param center ���܊p�`�̒��S���W
	*	@return ���܊p�`�̒��_�z��
	*/
	std::vector<Vec2>
		CreatePentagon(
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	���Z�p�`�̒��_�z���Ԃ��܂��B
	*	@param r �O�ډ~�̔��a
	*	@param angle ��]�p�x[���W�A��], 0 �̂Ƃ����_�� 12 ���̈ʒu�Əd�Ȃ�
	*	@param center ���Z�p�`�̒��S���W
	*	@return ���Z�p�`�̒��_�z��
	*/
	std::vector<Vec2>
		CreateHexagon(
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	�� N �p�`�̒��_�z���Ԃ��܂��B
	*	@param r �O�ډ~�̔��a
	*	@param angle ��]�p�x[���W�A��], 0 �̂Ƃ����_�� 12 ���̈ʒu�Əd�Ȃ�
	*	@param center �� N �p�`�̒��S���W
	*	@return �� N �p�`�̒��_�z��An<3 �̏ꍇ�͋�̔z��
	*/
	std::vector<Vec2>
		CreateNgon(
		int n,
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	�܌��� (��) �̒��_�z���Ԃ��܂��B
	*	@param r �O�ډ~�̔��a
	*	@param angle ��]�p�x[���W�A��], 0 �̂Ƃ����_�� 12 ���̈ʒu�Əd�Ȃ�
	*	@param center �܌����̒��S���W
	*	@return �܌����̒��_�z��
	*/
	std::vector<Vec2>
		CreateStar(
		double r,
		double angle = 0.0,
		const Vec2& center = { 0.0, 0.0 }
		);

	/**
	*	���`�}�`�̒��_�z���Ԃ��܂��B
	*	@param n
	*	@param rOuter ���S����O���̒��_�܂ł̋����O�ډ~�̔��a
	*	@param rInner ���S��������̒��_�܂ł̋����O�ډ~�̔��a
	*	@param angle ��]�p�x[���W�A��], 0 �̂Ƃ����_�� 12 ���̈ʒu�Əd�Ȃ�
	*	@param center �}�`�̒��S���W
	*	@return ���`�}�`�̒��_�z��
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
