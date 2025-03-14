class Point{
public:
    void set_X(int x){
        m_X=x;
    }
    int get_X(){
        return m_X;
    }
    void set_Y(int y){
        m_Y=y;
    }
    int get_Y(){
        return m_Y;
    }
private:
    int m_X;
    int m_Y;
}

class Circle
{
public:
    void set_R(int r){
        m_R=r;
    }
    int get_R(){
        return m_R;
    }
    void setCenter(Point center){
        m_Center=center;
    }
    Point getCenter(){
        return m_Center;
    }
    void isInCircle(Point &p,Circle &c){
        int distance=(c.getCenter().get_X()-p.get_X())*(c.getCenter().get_X()-p.get_X())+(c.getCenter().get_Y()-p.get_Y())*(c.getCenter().get_Y()-p.get_Y());
        if(distance==c.get_R()*c.get_R()){
            cout<<"点在圆上"<<endl;
        }else if(distance>c.get_R()*c.get_R()){
            cout<<"点在圆外"<<endl;
        }else{
            cout<<"点在圆内"<<endl;
        }
    }

private:
    int m_R;
    
}