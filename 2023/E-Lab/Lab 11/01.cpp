#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist {
    private:
        string Songs[20];
        int count = 0, current = 0;
    public:
        void add(string name) {
            Songs[count] = name;
            count += 1;
        }
        void setCurrentTrack(int n) {
            current = n-1;
        }
        string play() {
            return Songs[current];
        }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}