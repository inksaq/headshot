#pragma once



namespace Runtime {

class Starter {

    public:
        void init();
        void startup();
        void postLoad();
        void terminate();


    private:
        bool startingPhase;
        bool finishedPhase;





};




}
