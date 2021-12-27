enum Direction {North, South, East, West};

class MapSite {
  public:
    virtual void Enter() = 0;
};

class Room : public Map Site {

};
