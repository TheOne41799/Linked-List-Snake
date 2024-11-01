#pragma once
#include "Level/LevelService.h"

namespace Level
{
    enum class LevelNumber;


    struct LevelData
    {
        LevelData(LevelNumber ind)
        {
            level_index = ind;
        }

        LevelNumber level_index;
    };
}