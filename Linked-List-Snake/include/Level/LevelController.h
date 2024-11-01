#pragma once

namespace Level
{
    class LevelController
    {
    private:

    public:
        LevelController();
        ~LevelController();

        void initialize();
        void update();
        void render();
    };
}