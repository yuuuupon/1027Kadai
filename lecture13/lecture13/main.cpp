/*
Objectクラス
x,y,z座標を保存する変数、Update関数を持つ。
Update関数はvirtualで作ってください。

Vehicle(乗り物)クラス
Objectクラスを継承したクラス。
ここではSpeedUpクラスを追加してください。
またspeedとaccelの変数をここで追加してください。
SpeedUpクラスはvirtualで作ってください。
(正確な速度の処理を行いたい場合は、向きと加速度で、
ベクトルを計算する方法でも構いません。)

Car(車)クラス
Vehicleクラスを継承したクラス
SpeedUpとSpeedDownをここでCar用に実装してください。

流れを理解するという意味で、
この親クラスから派生クラスを作っていってほしいので、
中の計算処理やデータの設定の仕方は、
適当に行ってもらって結構です。

また、このクラスは必ず提出してください。
成績に加味します。

時間があれば、
Vehicleクラスを継承して、
bicycle(自転車)やbike(オートバイ)
といったクラスの作成や、
Carをさらに継承したpolice carや、truckなどの
クラスを作成してみてください。
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