


class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time (){
        hour = 18;
        minute = 51;
        second = 33;
        get();
        get1();
    }
    void set (int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
    }
 
    void get ();
    
    void get1 ();
    
    ~Time ();
};
