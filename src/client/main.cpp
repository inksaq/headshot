#include "core/core.h"
#include "fmt/core.h"
#include "runtime/runtime.h"
#include "menu_scene.h"
#include "GLFW/glfw3.h"
#include "runtime/starter.h"
#include "thread"
#include <iostream>


core::graphics::Window window(1600, 900, "Atlas");
core::Scene* current_scene;
Runtime::Starter starter;



void logic(){

    std::clock_t end = 0;

    while (window.is_open())
    {
        std::clock_t start = std::clock();
        double delta = (double)(start - end) / CLOCKS_PER_SEC;
        end = std::clock();
        starter.postLoad();
        current_scene->update(delta);
    }
}

void client(){
    starter.postLoad();
    while (window.is_open()){
        core::Event event;

        glfwPollEvents();

        while (window.poll_event(event)){
            
            if (event.type == GLEQ_WINDOW_CLOSED){
                window.close();
            }

            if (!window.imgui_want_capture(event)){
                current_scene->handle_event(event);
            }

            core::free_event(event);
        }

        window.new_frame();
        //std::cout << "drawing" << std::endl;
        current_scene->draw(window);
        window.render();
    }
}

int main(){
     window.create_opengl_context();
    //window.create_context();
    starter.init();
     current_scene = new scenes::MainMenu(window);
     current_scene->init();

     std::thread logic_thread(logic);
     starter.startup();

     client();
         
    
     logic_thread.join();
    starter.terminate();
     return 0;
}
