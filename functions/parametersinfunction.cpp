#include<iostream>
using namespace std ;
void play_music(int songId,int duration){
    cout<<"playing music"<<songId<<"for"<<duration<<"minutes"<<endl;

}
int main(){
    play_music(1,5);
    play_music(2,6);
    play_music(3,8);
    return 0;

} 