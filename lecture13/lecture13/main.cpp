/*
Object�N���X
x,y,z���W��ۑ�����ϐ��AUpdate�֐������B
Update�֐���virtual�ō���Ă��������B

Vehicle(��蕨)�N���X
Object�N���X���p�������N���X�B
�����ł�SpeedUp�N���X��ǉ����Ă��������B
�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
SpeedUp�N���X��virtual�ō���Ă��������B
(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
�x�N�g�����v�Z������@�ł��\���܂���B)

Car(��)�N���X
Vehicle�N���X���p�������N���X
SpeedUp��SpeedDown��������Car�p�Ɏ������Ă��������B

����𗝉�����Ƃ����Ӗ��ŁA
���̐e�N���X����h���N���X������Ă����Ăق����̂ŁA
���̌v�Z������f�[�^�̐ݒ�̎d���́A
�K���ɍs���Ă�����Č��\�ł��B

�܂��A���̃N���X�͕K����o���Ă��������B
���тɉ������܂��B

���Ԃ�����΁A
Vehicle�N���X���p�����āA
bicycle(���]��)��bike(�I�[�g�o�C)
�Ƃ������N���X�̍쐬��A
Car������Ɍp������police car��Atruck�Ȃǂ�
�N���X���쐬���Ă݂Ă��������B
*/

#include<stdio.h>

class Object
{
public:
	Object() {};
	int x = 0;
	int y = 0;
	int z = 0;

	virtual void Update()
	{

	}

private:
};

class Vehicle : public Object
{
public:

private:
};

class Car : public Vehicle
{
public:

private:

};

int main()
{

}