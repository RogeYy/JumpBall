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
//Осмий, Иридий, Платина ,Золото Свинец, Серебро, Медь, Латунь,  Сталь, Олово, Цинк, Чугун ,Корунд, Алюминий, 
// Мрамор, Стекло оконное, Фарфор,  Бетон, Кирпич, Сахар-рафинад, Оргстекло, Капрон, Полиэтилен, Парафин, Лёд, 
// Дуб (сухой), Сосна (сухая), Пробка

//liquids
//Ртуть, Серная кислота, Мёд, Вода морская, Молоко, Вода чистая, 
// Масло подсолнечное, Масло машинное, Керосин, Спирт, Нефть, Ацетон, Эфир, Бензин, Жидкий воздух

//gases
// Хлор, углекислый газ, Кислород, Воздух,  Азот, угарный газ, Природный газ , Водяной пар, Гелий,  Водород

const float g = 9.80665f, pi = 3.14159265f, metr = 0.00002f, k = 0.65;




////////// 1 metr = 0.00001 pixel
// k - коофициент трения