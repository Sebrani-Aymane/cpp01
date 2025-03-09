#include "Zombie.hpp"

int main(){
 Zombie *zombies;
int N = 10;
 zombies = zombieHorde(N,"alllooawat");
 for(int i =0;i<N;i++)
 {
    zombies[i].annouce();
 }
    delete []zombies;

}