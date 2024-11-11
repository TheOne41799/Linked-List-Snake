#pragma once
#include <vector>
#include <SFML/System/Vector2.hpp>
#include "Level/LevelConfig.h"

namespace Player
{
	class SnakeController;
	enum class TimeComplexity;
	enum class LinkedListOperations;
	enum class SnakeState;


	class PlayerService
	{
	private:
		SnakeController* snake_controller;

		void createController();
		void destroy();

	public:
		PlayerService();
		~PlayerService();

		void initialize();
		void update();
		void render();

		//void spawnPlayer();

		void spawnPlayer(Level::LinkedListType level_type);
		std::vector<sf::Vector2i> getCurrentSnakePositionList();

		int getPlayerScore();

		TimeComplexity getTimeComplexity();
		LinkedListOperations getLastOperation();

		//int getSnakeSize();
		//bool isSnakeSizeMinimum();
		//SnakeState getSnakeState();
	};
}