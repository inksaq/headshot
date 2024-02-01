#include "menu_scene.h"


using namespace core;

namespace scenes {

    MainMenu::MainMenu(graphics::Window& window):
        Scene(window),
        _view3D(0,0,0,0)
        
    {
        
    }

    void MainMenu::init(){
        _view3D.create(80,16.9);
    }

    void MainMenu::update(float delta){}

    void MainMenu::draw(graphics::Window& window){
            window.clear(graphics::Color(0,0,0,255));
           


            _view3D.set_active();
            
    }
    void MainMenu::handleEvent(Event event){
    }
}
