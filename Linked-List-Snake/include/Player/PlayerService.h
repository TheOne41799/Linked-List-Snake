#pragma once
#include <vector>
#include <SFML/System/Vector2.hpp>

namespace Player
{
	class SnakeController;
	enum class TimeComplexity;
	enum class LinkedListOperations;


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

		void spawnPlayer();
		std::vector<sf::Vector2i> getCurrentSnakePositionList();

		int getPlayerScore();

		TimeComplexity getTimeComplexity();
		LinkedListOperations getLastOperation();
	};
}