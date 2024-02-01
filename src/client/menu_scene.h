#include "core/graphics/sprite.h"
#include "core/graphics/view.h"
#include "core/system/scene.h"
#include "core/graphics/graphics.h"
#include "gui.h"


using namespace core;

namespace scenes {
    class MainMenu : public core::Scene {
        public:
            graphics::View3D _view3D;
            //graphics::Sprite _sprite;
            //graphics::Texture _texture;

            //need mesh matrix
            //
            //
            
            int _drawMode = 0;

            MainMenu(graphics::Window& window);

            void init();
            void handleEvent(Event event);
            void update(float delta);
            void draw(graphics::Window& window);


    };




}

