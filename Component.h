
#ifndef COMPONENT_H
#define COMPONENT_H
#include "Baseheader.h"





// #include "SFML/Graphics.hpp"
// #include "SFML/Window.hpp"
// #include "SFML/System.hpp"
// #include <SFML/System/Clock.hpp>
// #include "iostream";



// using namespace sf;


struct Abillity
{

	// The trigger

	// and its effect

	// both readble by the CI and can be compiled into a game action.



};



class Component
{
private:



public:
	std::string Component_name;

	Component()
	{


		//cout << "Heyo" << endl;


	};
	// here like an array or somthing of variables to store the dadgum components



};

class Outline : public Component
{
public:



private:



};

class Text_internals : public Component
{
private:



public:
	std::vector<std::string> text_internals;






};

class ID_NUM : public Component
{
private:

public:
	ID_NUM()
	{
		Component_name = "ID_NUMBER";

	};
	long int ID_NUMBER;












};

class Appearance : public Component
{


private:



public:

	sf::RectangleShape* rectangle;

	sf::Texture* slf_texture;





	// and so on...

};

class name : public Component
{
private:


public:

	std::string entity_name = "Enemy";



};

class Cost :public Component
{

public:



private:







};

class Type : public Component
{

public:



private:







};

class Abillities_list : public Component
{

public:


	// A vector of structs that the CARD_INTERPRETER can easily read







	// what the actual frick will go into here?????????
	// hmmmmm.... HHHMMMMM.......
	//  
	//  
	//     ?
	// _       _
	//  \ o_0 /
	//     I
	//    /I\
	//    \I/
	//    / \
	//   /   \
	//
	//



private:







};

class Statline : public Component
{

public:

	long long int power;
	long long int toughness;

private:







};

class position : public Component
{
private:






public:


	float x_pos = 0;
	float y_pos = 0;





	position()
	{
		Component_name = "POSITION";

		// set the positions to be randomized at the start.

		x_pos = rand() % 2000 + 1;
		y_pos = rand() % 1400 + 1;
	};





};

class Component_sprite : public Component
{
public:


private:



};

class click_box : public Component
{
public:
	// two points that create an area to check with


	sf::Vector2f top_left;
	sf::Vector2f bottom_right;
	click_box()
	{





	};

private:



};

class button_function
{
public:
	long int button_function;

private:


};





#endif