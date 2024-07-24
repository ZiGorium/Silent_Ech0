#pragma once
#include "Baseheader.h"

//#include "Component.h"
#include "Entity.h"


// buncha stuff on what scenes contain and how to load them in the current scene spot??
class scene_instance
{
public:




private:




};


class Menue_type : public scene_instance
{

public:

	std::vector<Button*> List_of_buttons;

	std::vector<Text_internals*> List_of_Text;

	Menue_type()
	{
		// on craetion fill out his stuffs


		Button* new_button;
		new_button = new Button;
		List_of_buttons.push_back(new_button);
		new_button = new Button;
		List_of_buttons.push_back(new_button);
		new_button = new Button;
		List_of_buttons.push_back(new_button);



	};

	//int Scene_type = 0;

	// vector of buttons. thats it.





private:





};


class Overlay_type : public scene_instance
{

public:

	Overlay_type()
	{


		Scene_type = 1;

	};
	int Scene_type = 1;



	// vector of buttons. thats it.
	std::vector<Button*> menu_buttons;



private:







};


class Battle_type : public scene_instance
{
public:

	Battle_type()
	{






	};



private:




};


class MainMenu : public Menue_type
{
public:

	// a vector of buttons and a vector text
	// thats all. nothing else
	// And then have the full game system be able to run this when its in focus.

	std::vector<Button*> Main_menu_buttons;

	std::vector<Text_internals*> Main_menu_text;




private:






};