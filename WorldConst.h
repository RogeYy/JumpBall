#pragma once





enum class SolidMaterials
{
	Osmium, 
	Iridium,
	Platinum,
	Gold,
	Lead,
	Silver,
	Copper,
	Brass,
	Steel,
	Tin,
	Zinc,
	CastIron,
	Corundum, Aluminum,
	Marble,
	WindowGlass,
	Porcelain,
	Concrete,
	Brick,
	RefinedSugar,
	Plexiglass,
	Nylon,
	Polyethylene,
	Paraffin,
	Ice,
	OakDry,
	PineDry,
	TrafficJam
};

enum class LiquidMaterials
{
	Mercury,
	SulfuricAcid,
	Honey, 
	SeaWater,
	Milk,
	PureWater,
	SunflowerOil,
	EngineOil,
	Kerosene, 
	Alcohol, 
	Petroleum, 
	Acetone,
	Ether, 
	Gasoline, 
	LiquidAir
};

enum class Gases
{
	Chlorine, 
	CarbonDioxide, 
	Oxygen, 
	Air, 
	Nitrogen, 
	CarbonMonoxide, 
	NaturalGas,
	WaterVapor, 
	Helium, 
	Hydrogen
};



//solid
//�����, ������, ������� ,������ ������, �������, ����, ������,  �����, �����, ����, ����� ,������, ��������, 
// ������, ������ �������, ������,  �����, ������, �����-�������, ���������, ������, ����������, �������, ˸�, 
// ��� (�����), ����� (�����), ������

//liquids
//�����, ������ �������, ̸�, ���� �������, ������, ���� ������, 
// ����� ������������, ����� ��������, �������, �����, �����, ������, ����, ������, ������ ������

//gases
// ����, ���������� ���, ��������, ������,  ����, ������� ���, ��������� ��� , ������� ���, �����,  �������

const float g = 9.80665f, pi = 3.14159265f, metr = 0.00002f, k = 0.65;




////////// 1 metr = 0.00001 pixel
// k - ���������� ������