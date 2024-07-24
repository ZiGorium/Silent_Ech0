#pragma once
#include "baseheader.h";


struct positioner
{
	int x;
	int y;
};

class text_manager
{
public:

	std::vector<sf::Text*> Text_list;

	void add_text(positioner pos, sf::Color color, std::string text, sf::Font &my_font) 
	{
	// takes in position
	// color
	// and text
	
	
		sf::Text* new_text = new sf::Text;;
		new_text->setFont(my_font);
		new_text->setFillColor(color);
		new_text->setPosition(pos.x,pos.y);
		new_text->setString(text);
		Text_list.push_back(new_text);


	};

private:




};

void display_text(text_manager &manager, sf::RenderWindow &window)
{
	
	if (manager.Text_list.size() > 0) {
		
		for (int i = 0; i < manager.Text_list.size(); i++)
		{
			window.draw(*manager.Text_list[i]);
		};
	}
	else 
	{
		std::cout << "NO TEXT LOADED" << std::endl;
	};

};

void rainbow_power(text_manager& manager, sf::RenderWindow& window)
{


	if (manager.Text_list.size() > 0) {

		for (int i = 0; i < manager.Text_list.size(); i++)
		{


			// int r = rand() % 128 + 1;
			// int g = rand() % 128 + 1;
			// int b = rand() % 128 + 1;



			int r;
			int g;
			int b;

			int killer = rand() % 3 + 1;



			if (killer == 1) 
			{
				
				r = 128;
				g = 0;
				b = 0;
			};

			if (killer == 2)
			{
				r = 0;
				g = 128;
				b = 0;

			};

			if (killer == 3)
			{
				r = 0;
				g = 0;
				b = 128;
			};

			sf::Color random_color(r, g, b);

			manager.Text_list[i]->setFillColor(random_color);
		};
	}
	else
	{
		std::cout << "NO TEXT LOADED" << std::endl;
	};




};