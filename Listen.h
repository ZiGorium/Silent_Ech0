#pragma once
#include "BaseHeader.h"
#include "graphical_functions.h"

struct communication_struct
{

	int* inputers;
	sf::TcpSocket* client;
	int* sent;
	char data[100];
	std::size_t* received;
	sf::TcpListener* listener;

};


void user_input(sf::Event& event, sf::Text& words, char& recent, std::string *user_stffs)
{
   

        // event.text.unicode < 128 && 
		
        if (event.type == sf::Event::KeyReleased)
        {
            if (recent != '^') {
                std::cout << "    ASCII character typed: " << recent << std::endl;
                std::string temp;
                temp = words.getString();
                char temper = recent;
                temp += temper;
				*user_stffs += temper;
                words.setString(temp);
                recent = '^';
                // add letter
				std::cout << *user_stffs<<"   heyyyy" << std::endl;
            }
            else 
            {
            
                std::cout << "bypass text " << std::endl;
            
            }

        }
        if (event.type == sf::Event::TextEntered)
        {
            // 33 122

            if (event.text.unicode < 32 || event.text.unicode > 122)
            {

                std::cout << "skipped text " << std::endl;

            }
            else 
            {
                recent = static_cast<char>(event.text.unicode);
                std::cout << static_cast<char>(event.text.unicode) << "\n";
            
            };


           


        };
   
		// if () {};
   //  if (event.type == sf::Event::KeyPressed)
};


void catch_recent(sf::Event& event, text_manager& list, std::string *words, int* messaged)
{

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
    {
        std::string test = list.Text_list[0]->getString();
		*words = test;



        if (!test.size() < 1) 
        {
            test.erase(test.end()-1);
            list.Text_list[0]->setString(test);
			*words = test;
            std::cout << "erased" << std::endl;
        }
    }
	if (event.type == sf::Event::KeyReleased) {
		if (event.key.code == sf::Keyboard::Enter) {
			*messaged = 0;
			std::cout << *words << "is now the main words" << std::endl;
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
	{
	
		
		
		//words->clear();
		
	
	};

};

// take in a string a use the stuff necesary to send the data
void send() 
{





};

void recive(sf::TcpSocket& socket, std::string* inbound, std::size_t received, int * messaged)
{
	char data[100];
	
	//std::cout << *inbound << std::endl;
	
	while (true) {
		
		for (int g = 0; g < 100; g++)
		{
			data[g] = ' ';
		};
		if (socket.receive(data, 100, received) != sf::Socket::Done)
		{
			std::cout << "\n\n " << "ERROR ON COMMUNICATION" << std::endl;
		}
		else
		{
			
			*inbound = "                                                                                                                                         ";
			std::cout << "\n\n " << *inbound << "   PRE INBOUD" << std::endl;
			
			for (int g = 0; g < 100; g++)
			{
				
				*inbound = data;
				std::cout << data[g];
			};
			printf("\n\n\n");
			for (int b = 0; b < 100; b++)
			{
				data[b] = ' ';
				
			};
			std::cout << "\n\n " << *inbound << " 2 INBOUD" << std::endl;
			std::cout << "\n\n " << data << "  DATA" << std::endl;
		}
	};
};

//int &inputers, sf::TcpSocket &client, int &sent, char data[100],std::size_t &received, sf::TcpListener listener
void communicate(std::string *return_valur, int *messaged, std::string* inbound)
{
	//, std::string& inbound
	int sented;
	int inputers = 0;
	//std::cout << "Test Build enter 1 for starter and 2 for connector" << std::endl;
	//std::cin >> inputers;
	std::string message;
	sf::TcpListener listener;
	std::size_t received;
	int sent = 0;
	sf::TcpSocket socket;

	sf::Event event;
	bool goober = true;

	while (goober) 
	{
		printf("Bonk\n");
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
		{
			// left key is pressed: move our character
			std::cout << "ONE" << std::endl;
			inputers = 1;
			goober = false;
			break;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
		{
			// left key is pressed: move our character
			std::cout << "Two" << std::endl;
			inputers = 2;
			goober = false;
			break;
		}
	
	
	};
	
	



	
	if (inputers == 1)
	{
		std::cout << "one" << std::endl;
		if (listener.listen(53000) != sf::Socket::Done)
		{
			std::cout << "NOT LISTENING" << std::endl;
		};

		if (listener.accept(socket) != sf::Socket::Done)
		{
			std::cout << "Connection rejected" << std::endl;
		}

		std::thread BOI([&socket, inbound ,&received, messaged] { recive(socket, inbound, received, messaged); });

		// here loop the function to do the stuffs
		
		while (true)
		{
			// sent = 0;
			char data[100];
			if (*messaged == 0)
			{

				for (int g = 0; g < 100; g++)
				{
					//std::cout << data[g] << " | ";
					data[g] = ' ';
				};
				message = *return_valur;
				for (int i = 0; i < message.size(); i++)
				{
					if (message[i] != '\0')
					{
						data[i] = message[i];
					}
				};

				if (socket.send(data, 100) != sf::Socket::Done)
				{
					std::cout << "ERROR MESSAGE" << std::endl;
				}
				else
				{
					return_valur->clear();

					for (int g = 0; g < 100; g++)
					{
						//std::cout << data[g] << " | " ;
						data[g] = ' ';
					};
					*messaged = 1;
				};

				
			};
			
			
		};
	}

	if (inputers != 1)
	{
		std::cout << "Two" << std::endl;
		sf::Socket::Status status = socket.connect("192.168.1.207", 53000);
		if (status != sf::Socket::Done)
		{
			std::cout << "PORT CREATION ERROR STUFF" << std::endl;
		}
		std::thread commune([&socket, inbound, &received,messaged] { recive(socket, inbound, received, messaged); });
		while (true) {
			// try to connect to the other guy
			char data[100];
			//std::cout << "CONNECTION AQUIRED SIDE 1" << std::endl;
			if (*messaged == 0)
			{
				for (int g = 0; g < 100; g++)
				{
					//std::cout << data[g] << " | ";
				    data[g] = ' ';
				};
				message = *return_valur;
				for (int i = 0; i < message.size(); i++)
				{
					if (message[i] != '\0')
					{
						data[i] = message[i];
					}
				};
				
				if (socket.send(data, 100) != sf::Socket::Done)
				{
					std::cout << "ERROR MESSAGE" << std::endl;
				}
				else
				{
					return_valur->clear();
					
					for (int g = 0; g < 100; g++)
					{
						//std::cout << data[g] << " | " ;
						data[g] = ' ';
					};
					*messaged = 1;
				};
				
				
			};
			
		}

	};
	
};