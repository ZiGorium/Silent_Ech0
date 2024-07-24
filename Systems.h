#pragma once


#include "BaseHeader.h"
#include "Entity_Manager.h"
#include "Scenes.h"
#include "Sys_mouse.h"

#ifndef SYSTEMS_H
#define SYSTEMS_H


struct IO_placement_info
{




	// either an anchor point or somthing else
	int x = 0;
	int y = 0;

	int z = 0;

	int spacing;

	int button_scale;






};


/******************************************/
// overhaul NEEDED
void initialize_menus(std::vector<Menue_type*>& stuff_to_initialize)
{



	/*
	// these three buttons should.... be placed at the center in a stack

	//Main_menu->List_of_buttons[0]->position_slf.x_pos = 1100;
	//Main_menu->List_of_buttons[0]->position_slf.y_pos = 800;

	//Main_menu->List_of_buttons[1]->position_slf.x_pos = 1100;
	//Main_menu->List_of_buttons[1]->position_slf.y_pos = 900;

	//	Main_menu->List_of_buttons[2]->position_slf.x_pos = 1100;
	//Main_menu->List_of_buttons[2]->position_slf.y_pos = 1000;






	/*

	Main_menu->List_of_buttons[0]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[0]->position_slf.x_pos + 25;
	Main_menu->List_of_buttons[0]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[0]->position_slf.y_pos - 25;
	Main_menu->List_of_buttons[0]->clickbox_slf.top_left.x = Main_menu->List_of_buttons[0]->position_slf.x_pos - 25 ;
	Main_menu->List_of_buttons[0]->clickbox_slf.top_left.y = Main_menu->List_of_buttons[0]->position_slf.y_pos + 25;


	Main_menu->List_of_buttons[1]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[1]->position_slf.x_pos + 25;
	Main_menu->List_of_buttons[1]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[1]->position_slf.y_pos - 25;
	Main_menu->List_of_buttons[1]->clickbox_slf.top_left.x = Main_menu->List_of_buttons[1]->position_slf.x_pos - 25;
	Main_menu->List_of_buttons[1]->clickbox_slf.top_left.y = Main_menu->List_of_buttons[1]->position_slf.y_pos + 25;



	Main_menu->List_of_buttons[2]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[2]->position_slf.x_pos + 25;
	Main_menu->List_of_buttons[2]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[2]->position_slf.y_pos - 25;
	Main_menu->List_of_buttons[2]->clickbox_slf.top_left.x = Main_menu->List_of_buttons[2]->position_slf.x_pos - 25;
	Main_menu->List_of_buttons[2]->clickbox_slf.top_left.y = Main_menu->List_of_buttons[2]->position_slf.y_pos + 25;

	*/




	/*

	Main_menu->List_of_buttons[0]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[0]->position_slf.x_pos + 500;
	Main_menu->List_of_buttons[0]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[0]->position_slf.y_pos - 500;

	Main_menu->List_of_buttons[1]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[1]->position_slf.x_pos + 500;
	Main_menu->List_of_buttons[1]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[1]->position_slf.y_pos - 500;

	Main_menu->List_of_buttons[2]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[2]->position_slf.x_pos + 500;
	Main_menu->List_of_buttons[2]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[2]->position_slf.y_pos - 500;


	*/





	//Main_menu->List_of_buttons.push_back(switch_button);

	//stuff_to_initialize.push_back(Main_menu);












	/******************************************/

	// CONSOLIDATE THE FOLLOWING INTO A FUNCTION THAT CAN BE CALLED AND RE-USED
	// IF CODE IS IMPORTANT, MAKE IT PORTABLE

	/******************************************/

	// main menu:

	Button_Switch_to_another_menu* switch_button;

	switch_button = new Button_Switch_to_another_menu;

	Menue_type* Main_menu;

	Main_menu = new Menue_type;








	// SERIOUS OVERHAUL INCOMING

	// **************************************/

	Main_menu->List_of_buttons[0]->position_slf.x_pos = 90;
	Main_menu->List_of_buttons[0]->position_slf.y_pos = 50;

	Main_menu->List_of_buttons[1]->position_slf.x_pos = 90;
	Main_menu->List_of_buttons[1]->position_slf.y_pos = 70;

	Main_menu->List_of_buttons[2]->position_slf.x_pos = 90;
	Main_menu->List_of_buttons[2]->position_slf.y_pos = 90;


	// **************************************/


	Main_menu->List_of_buttons[0]->clickbox_slf.top_left.x = Main_menu->List_of_buttons[0]->position_slf.x_pos - 15;
	Main_menu->List_of_buttons[0]->clickbox_slf.top_left.y = Main_menu->List_of_buttons[0]->position_slf.y_pos + 15;

	Main_menu->List_of_buttons[1]->clickbox_slf.top_left.x = Main_menu->List_of_buttons[1]->position_slf.x_pos - 15;
	Main_menu->List_of_buttons[1]->clickbox_slf.top_left.y = Main_menu->List_of_buttons[1]->position_slf.y_pos + 15;

	Main_menu->List_of_buttons[2]->clickbox_slf.top_left.x = Main_menu->List_of_buttons[2]->position_slf.x_pos - 15;
	Main_menu->List_of_buttons[2]->clickbox_slf.top_left.y = Main_menu->List_of_buttons[2]->position_slf.y_pos + 15;

	// **************************************/

	Main_menu->List_of_buttons[0]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[0]->position_slf.x_pos + 15;
	Main_menu->List_of_buttons[0]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[0]->position_slf.y_pos - 15;

	Main_menu->List_of_buttons[1]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[1]->position_slf.x_pos + 15;
	Main_menu->List_of_buttons[1]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[1]->position_slf.y_pos - 15;

	Main_menu->List_of_buttons[2]->clickbox_slf.bottom_right.x = Main_menu->List_of_buttons[2]->position_slf.x_pos + 15;
	Main_menu->List_of_buttons[2]->clickbox_slf.bottom_right.y = Main_menu->List_of_buttons[2]->position_slf.y_pos - 15;

	stuff_to_initialize.push_back(Main_menu);

	/******************************************/



















	// other menu?:




};


void initialize_menus(std::vector<Menue_type*>& stuff_to_initialize, IO_placement_info anchorPoint_other_stuff)
{

	// similar function just anchors the buttons off of a specified place
	// as well as size scaling for not just the graphics but click box



}
/******************************************/


namespace USER_INPUT_GENERAL
{
#include "BaseHeader.h"

	struct inputs
	{

		bool mouse1;
		bool mouse2;

		bool up;
		bool down;
		bool left;
		bool right;

		double x;
		double y;

	};

	inputs user_input()
	{
		// this should also work for the ascii version lol
		inputs player_inputs;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			player_inputs.left = true;

		};
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			player_inputs.right = true;

		};
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player_inputs.up = true;

		};
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player_inputs.down = true;

		};
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			// left mouse button is pressed: shoot
			player_inputs.mouse1 = true;
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
		{
			// left mouse button is pressed: shoot
			player_inputs.mouse2 = true;
		}


		// getting the mouse position sf::Vector2i localPosition = sf::Mouse::getPosition(window);
		player_inputs.x = 0;
		player_inputs.y = 0;

		return player_inputs;
	};




};


// player input Sys

void Mouse_update(Sys_mouse& mouse)
{
	bool updated = false;

	if (mouse.just_pressed == true)
	{
		mouse.just_pressed = false;

		mouse.holding = true;

		updated = true;
		std::cout << "YOU ARE HOLDING" << std::endl;
	};
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && updated == false && mouse.holding == false)
	{

		mouse.just_pressed = true;
		mouse.released = false;
		std::cout << "YOU JUST PRESSED THE MOUSE " << std::endl;
	};
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left) == false && mouse.holding == true && updated == false)
	{

		mouse.released = true;

		mouse.holding = false;

		updated = true;
		std::cout << "YOU LET GO" << std::endl;
	};
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left) == false && mouse.holding == false && updated == false && mouse.released == true)
	{
		mouse.released = false;
	};


};

mouse_output Mouse_check(Sys_mouse mouse)
{
	mouse_output output;









	return output;
};


// ****************

void call_button_function()
{





};



// button stuff

void Sys_Button_graphics(std::vector<Menue_type*> stuff_to_be_draw, sf::RenderWindow& Target_window)
{

	for (int i = 0; i < stuff_to_be_draw[0]->List_of_buttons.size(); i++)
	{
		sf::Texture texture;
		if (!texture.loadFromFile("sprites/Button_holder.png"))
		{

		}
		sf::Sprite sprite;

		sprite.setTexture(texture);
		sprite.setScale(1, 1);


		stuff_to_be_draw[0]->List_of_buttons[i]->slf_sprite.setTexture(texture);

		//stuff_to_be_draw[0]->List_of_buttons[i]->Slf_shape.setPosition(stuff_to_be_draw[0]->List_of_buttons[i]->position_slf.x_pos, stuff_to_be_draw[0]->List_of_buttons[i]->position_slf.y_pos);
		stuff_to_be_draw[0]->List_of_buttons[i]->slf_sprite.setPosition(stuff_to_be_draw[0]->List_of_buttons[i]->position_slf.x_pos, stuff_to_be_draw[0]->List_of_buttons[i]->position_slf.y_pos);


		// first match the sprite to the entities position
		Target_window.draw(stuff_to_be_draw[0]->List_of_buttons[i]->slf_sprite);
		//Target_window.draw(stuff_to_be_draw[0]->List_of_buttons[i]->Slf_shape);



	};







};

void Sys_Button_clicked(std::vector<Menue_type*> stuff_to_be_checked, sf::RenderWindow& Target_window, Sys_mouse& mouse)
{





	for (int i = 0; i < stuff_to_be_checked[0]->List_of_buttons.size(); i++)
	{
		// new_cell->slf_pos.x_pos > TOP_LEFT_x && new_cell->slf_pos.x_pos < TOP_LEFT_x + 480) &&
		//  (new_cell->slf_pos.y_pos > TOP_LEFT_y && new_cell->slf_pos.y_pos < TOP_LEFT_y + 320


		// so for each button that we have, run a function that can return wether a point click at once place
		// is within its area.

		// then run that button if it is and be done
		sf::Vector2i m_c = sf::Mouse::getPosition(Target_window);


		// change this to one little function i dont like how long this is
		if ((m_c.x > stuff_to_be_checked[0]->List_of_buttons[i]->clickbox_slf.top_left.x && m_c.x < stuff_to_be_checked[0]->List_of_buttons[i]->clickbox_slf.bottom_right.x) && (m_c.y < stuff_to_be_checked[0]->List_of_buttons[i]->clickbox_slf.top_left.y && m_c.y > stuff_to_be_checked[0]->List_of_buttons[i]->clickbox_slf.bottom_right.y))
		{
			// if mouse.released is true, activate the button_mouse_function to find out what function to activate
			if (mouse.released == true)
			{
				std::cout << "you clicked on a button!!!" << std::endl;
				// now check the buttons purpose determined by its
				//  purpose integer, and then use that to 
				// find its function within the list of button functions!!!!


			};

		};


	};


};





// TEMP FOR NOW BEFORE FULL IMPLEMENTATION
// Menu Sys
void Sys_Main_menu(std::vector<Menue_type*> SCENE_VEC, Entity_manager E_manager, sf::RenderWindow& Target_window, Sys_mouse& x)
{

	if (SCENE_VEC.size() <= 0)
	{

		std::cout << "NO SCENES LOADED" << std::endl;

	}
	else
	{
		Mouse_update(x);

		Sys_Button_graphics(SCENE_VEC, Target_window);

		Sys_Button_clicked(SCENE_VEC, Target_window, x);

	}




};
























#endif

