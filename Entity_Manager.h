#pragma once
#include "BaseHeader.h"

#include "Entity.h"
#include "Component.h"




#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H







class Entity_manager
{
private:




public:



	long long int ttl_nmb_entities;
	friend class Entity;
	std::vector <Entity*> create_new_entity;
	std::vector <Entity*> set_to_be_removed;
	int tag;
	std::vector <player*> list_of_players;
	std::vector <Battle_instance*> list_of_battles;
	player User;

	Battle_instance Current;



	Entity_manager()
	{

		player* new_player = new player();

		new_player->ID_ENTITY_NMB = ttl_nmb_entities;

		list_of_players.push_back(new_player);

		std::cout << ttl_nmb_entities << std::endl;

		Current.Game_over = false;

	};


	void update();


	void Entity_loader(int tag);


	void remove_Entity();

	void add_player();

	// this can be made a system but IDC
	void check_for_dead_Entities();


};


#endif
