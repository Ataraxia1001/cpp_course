#include <iostream>


class Stove{
    private:
        int temperature = 0;
    public:
        Stove(int temperature){
            setTemperature(temperature);
        }

        // getter
        int getTemperature(){
            return temperature;
        }
        void setTemperature(int temperature){
            if(temperature < 0){
                this->temperature = 0;
            }
            else if(temperature >= 10){
                this->temperature = 10;
            }
            else{
                this->temperature = temperature;
            }
        }            
};


int main(){

    // Encapsulation = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove(5);

    //stove.setTemperature(8);
    std::cout << "Stove temperature: " << stove.getTemperature() << '\n';

    return 0;
}