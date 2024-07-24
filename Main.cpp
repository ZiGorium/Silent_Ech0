// basic 

#include "BaseHeader.h"
#include "connection.cpp"
#include "temp_functions.h"
#include "graphical_functions.h"
#include "Listen.h"
#include "Scenes.h"
#include "Entity_Manager.h"
#include "Systems.h"
using namespace sf;

RenderWindow window(VideoMode(1200, 800, 32), "Sech0");

Event event;

sf::TcpListener listener;

sf::Font my_font;

Text test;

text_manager Text_manager;

Entity_manager E_Manager;

Sys_mouse MOUSE;


int GLOBAL_FOCUS = 1;


communication_struct send_recieve;



int main() 
{

	std::string  *WORDS = new std::string;
	std::string* inbound = new std::string;
	int * messaged = new int;
	*inbound = " ";
	
	
	sf::Font* font_pointer = &my_font;
	my_font.loadFromFile("PerfectDOSVGA437.ttf");
	test.setFont(my_font);
	test.setString("ASCII will ALways Be CooL");
	

	/*
	if (inputers == 1)
	{



		if (listener.listen(53000) != sf::Socket::Done)
		{
			std::cout << "ERROR FOR CONNECTION" << std::endl;
		};



		if (listener.accept(client) != sf::Socket::Done)
		{
			std::cout << "Connection rejected" << std::endl;
		}
		else
		{

			if (sent == 0)
			{
				if (client.send(data, 100) != sf::Socket::Done)
				{
					// error...
				}
				else
				{

					sent = 1;
				};


			};

		};

		if (client.receive(data, 100, received) != sf::Socket::Done)
		{
			// error...
		}

		std::cout << "\n\n " << data << " \n End Message" << std::endl;

	}

	if (inputers != 1)
	{

		// try to connect to the other guy
		sf::TcpSocket socket;
		sf::Socket::Status status = socket.connect("192.168.1.176", 53000);
		if (status != sf::Socket::Done)
		{
			// error...
		}
		else
		{
			//std::cout << "CONNECTION AQUIRED SIDE 1" << std::endl;
			if (sent == 0)
			{
				if (socket.send(data, 100) != sf::Socket::Done)
				{
					// error...
				}
				else
				{

					sent = 1;
				};


			};

		};
		if (socket.receive(data, 100, received) != sf::Socket::Done)
		{
			// error...
		}
		std::cout << "\n\n " << data << " \n End Message" << std::endl;

	};
	*/
	std::cout << "AFTER" << std::endl;
	
	positioner kewl;
	kewl.x = 0;
	kewl.y = 750;
	positioner sugma;
	sugma.x = 450;
	sugma.y = 450;
	std::string wr = " ";
	Text_manager.add_text(kewl,sf::Color::Red, wr, my_font);
	Text_manager.add_text(sugma, sf::Color::Green, wr, my_font);
	
	/// ABOVE IS TEST STUFFS 

	char recent = NULL;
	// main program starts here
	// communicate, inputers, client, sent, data[100], received, listener

	/// start here

	 std::thread thread_obj(communicate , WORDS, messaged, inbound);



	while (window.isOpen()) 
	{
		
		// get the user's input
		// if they have hit enter
		// set sending to 0
		while (window.pollEvent(event))
		{


			user_input(event, *Text_manager.Text_list[0], recent, WORDS);
			// catch_recent(event, recent);

			
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed) {
				window.close();
			};
			catch_recent(event, Text_manager, WORDS, messaged);
		}
		
		
		// here send the data


		window.clear(Color::Black);
		Text_manager.Text_list[1]->setString(*inbound);
		Text_manager.Text_list[0]->setString(*WORDS);
		
		



		// stuff below you must turn into a function that users complete on luanch and make the 
		// message sending a funct

		
		// communicate();


		display_text(Text_manager,window);

		// rainbow_power(Text_manager, window);


		window.display();
		
		
		// graphics update

		// input update

		// System update
	};




	return 0;

};