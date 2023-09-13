//
// Created by charles on 11/09/23.
//

#ifndef LAMP_LAMPMENUS_H
#define LAMP_LAMPMENUS_H

#include "imgui/imgui.h"

namespace Lamp {
    namespace Core {
        class lampMenus {
        public:
            enum Menus{
                LAMP_INTRO_MENU,
                LAMP_GAME_SELECT,
                GAME_MOD_MENU,
                GAME_CONFIG_MENU
            };

            Menus currentMenu = LAMP_INTRO_MENU;

            void CreateMenus();


        private:

            bool deployCheck = false;

            void IntroMenu();
            void GameSelect();
            void ModMenu();
            void GameConfigMenu();

            ImGuiWindowFlags DefaultFlags();
            void DefaultMenuBar();

            void SelectLibary();
        };
    }
}

#endif //LAMP_LAMPMENUS_H
