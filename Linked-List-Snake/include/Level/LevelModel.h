#pragma once
#include <SFML/System/Vector2.hpp>
#include "Element/ElementService.h"
#include "Element/ElementData.h"
#include "Level/LevelData.h"
#include <vector>

namespace Level
{
    class LevelModel
    {
    private:
        std::vector<Element::ElementData> level_one_element_list;
        std::vector<Element::ElementData> level_two_element_list;
        std::vector<LevelData> level_configurations;

        float cell_width;
        float cell_height;

        void initializeLevelData();

    public:
        static const int number_of_rows = 28;
        static const int number_of_columns = 50;

        LevelModel();
        ~LevelModel();

        void initialize(int width, int height);

        float getCellWidth();
        float getCellHeight();

        const std::vector<Element::ElementData>& getElementDataList(int level_to_load);
    };
}