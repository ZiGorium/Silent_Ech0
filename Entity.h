#pragma once

#ifndef ENTITY_H
#define ENTITY_H

#include "Baseheader.h"

#include "Component.h"

class Entity
{
private:

	friend class Entity_manager;




public:
	long long int ID_ENTITY_NMB;
	// std::vector<Component> Components_vector;
	// std::vector<Shape> appearance_vec;

};

class Card : public Entity
{


public:
	ID_NUM Entity_ID;
	// might not be necesary

	name CardName;
	Cost CardCost;
	Type CardType;
	Abillities_list CardAbillities;
	Statline CardStats;
	// CARD (more or less) Assembled
private:





};

class Deck
{
private:


public:
	// a big list of cards or somthing??
	// How they are stored is not a big deal. the limits of memory will... *probably* not be tested...


	std::vector<Card> cards_within_Deck;


};

class Library : public Entity
{
public:



	std::vector<Deck*> players_decks;
	std::vector<Card*> all_of_the_players_Card;



private:





};

class player : public Entity
{
public:

	// that should be all thats needed

	Deck Players_deck;
	name Players_name;
	std::vector<Card*> hand;


private:


};

class user_data : public Entity
{
public:


	Deck main_users_deck;


private:




};

class Battle_instance : public Entity
{

public:

	bool Game_over = false;

	player P1;
	player p2;

	int health1 = 25, health2 = 25;

	std::vector<Card> side_1;
	std::vector<Card> side_2;


	std::vector<Card> hand_1;
	std::vector<Card> hand_2;

private:




};

class Button : public Entity
{
public:

	position position_slf;

	Component_sprite sprite_slf;

	click_box clickbox_slf;

	button_function slf_function;

	sf::Texture slf_texture;

	sf::Sprite slf_sprite;

	Button()
	{
		sf::Texture texture;
		if (!texture.loadFromFile("sprites/Button_holder.png"))
		{

		}

		slf_sprite.setTexture(texture);

		position_slf.x_pos = rand() % 2000 + 1;
		position_slf.y_pos = rand() % 1400 + 1;

		slf_sprite.setOrigin(15, 15);
		//Slf_shape.setSize(sf::Vector2f(100, 100));
		//Slf_shape.setFillColor(sf::Color::Green);
		///Slf_shape.setPosition(position_slf.x_pos, position_slf.y_pos);

		slf_sprite.setScale(1, 1);

		std::cout << position_slf.x_pos << std::endl;
		std::cout << position_slf.y_pos << std::endl;

		// sprite section above
		// clickbox below


		clickbox_slf.bottom_right = sf::Vector2f(position_slf.x_pos + 15, position_slf.y_pos - 15);
		clickbox_slf.top_left = sf::Vector2f(position_slf.x_pos - 15, position_slf.y_pos + 15);


	};
	// this will be useful
	Button(int x)
	{


		std::cout << "oi" << std::endl;

	};




private:





};






/*

BEYOND IS A TEST AREA

*/


class Button_Switch_to_another_menu : public Button
{
public:

	void switch_scene(int& global_focus)
	{
		// perhaps depending on the context of the scene the buttons function can change.
		// using an entirely different class would be a headache.


	};

	Button_Switch_to_another_menu() {

		sf::Texture texture;
		if (!texture.loadFromFile("sprites/Button_holder.png"))
		{

		}

		slf_sprite.setTexture(texture);

		position_slf.x_pos = rand() % 2000 + 1;
		position_slf.y_pos = rand() % 1400 + 1;


		slf_sprite.setOrigin(50, 50);
		//Slf_shape.setSize(sf::Vector2f(100, 100));
		//Slf_shape.setFillColor(sf::Color::Green);
		//Slf_shape.setPosition(position_slf.x_pos, position_slf.y_pos);


		slf_sprite.setScale(5, 5);


		std::cout << position_slf.x_pos << std::endl;
		std::cout << position_slf.y_pos << std::endl;
	};




private:







};
#endif