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
	float x = 0;
	float y = 0;
	float z = 0;

	virtual void Update()
	{

	}

private:
};

class Vehicle : public Object
{
public:
	virtual void setSpeed(float s)
	{
		speed = s;
	}

	virtual void setAccel(float a)
	{
		accel = a;
	}

	virtual float getSpeed()
	{
		float getS = speed;
		printf("%f\n", getS);
		return getS;
	}

	virtual float getAccel()
	{
		float getA = accel;
		printf("%f\n", getA);
		return getA;
	}

private:
	float s = 0;
	float a = 0;
};

class Car : public Vehicle
{
public:
	virtual void SpeedUp()
	{
		float s = getSpeed();
		float a = getAccel();
		s += a;
		setSpeed(s);
	}

	virtual void SpeedDown()
	{
		float s = getSpeed();
		float a = getAccel();
		s -= a;
		setSpeed(s);
	}

private:

};

int main()
{
	Car car;
	car.setSpeed(80);
	car.setAccel(10);
	car.SpeedUp();
	car.getSpeed()
};