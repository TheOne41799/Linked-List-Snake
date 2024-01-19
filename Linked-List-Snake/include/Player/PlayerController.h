#pragma once
#include <SFML/System/Vector2.hpp>
#include "LinkedList/Node.h"
#include "LinkedList/SingleLinkedList.h"
#include "Food/FoodType.h"

namespace Player
{
	enum class TimeComplexity
	{
		ONE,
		N,
	};

	enum class PlayerState
	{
		ALIVE,
		DEAD,
	};

	class PlayerController
	{
	private:
		const int initial_snake_length = 10;
		const float movement_frame_duration = 0.1f;
		const float restart_duration = 2.f;

		const sf::Vector2i default_position = sf::Vector2i(25, 13);
		const LinkedList::Direction default_direction = LinkedList::Direction::RIGHT;

		PlayerState current_player_state;
		float elapsed_duration;
		float restart_counter;
		LinkedList::Direction current_player_direction;

		int player_score;
		TimeComplexity time_complexity;

		LinkedList::SingleLinkedList* single_linked_list;

		void createLinkedList();
		void processPlayerInput();
		void processLinkedListUpdate();
		void processPlayerCollision();
		void processNodeCollision();
		void processElementsCollision();
		void processFoodCollision();

		void performLinkedListOperation(Food::FoodType food_type);
		int getRandomNodeIndex();

		void handleRestart();
		void reset();
		void destroy();

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		void spawnPlayer();
		void respawnPlayer();
		void setPlayerState(PlayerState state);
		PlayerState getPlayerState();

		std::vector<sf::Vector2i> getCurrentPlayerPositionList();
		TimeComplexity getTimeComplexity();
		int getPlayerScore();
		int getPlayreSize();
	};
}