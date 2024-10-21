class Wektor2D
{   
    private:
    float x;
    float y;

    public:
    // Tutaj napisz implementacje klasy Wektor2D
    public:
    void setX(float gx){
        //std::cout<<"zmieniono wspolrzedna X z "<<x;
        x=gx;
        //std::cout<<" na "<<gx<<std::endl;
        }
    void setY(float gy){
        
        //std::cout<<"zmieniono wspolrzedna Y z "<<y;
        y=gy;
        //std::cout<<" na "<<gy<<std::endl;
    }

    float getX(){
        //std::cout<<"X="<<x<<std::endl;
        return x;}
    float getY(){
        //std::cout<<"Y="<<y<<std::endl;
        return y;}

    Wektor2D(float xx=0, float yy=0){
        x=xx;
        y=yy;
        //std::cout<<"Utworzono wektor ["<<x<<";"<<y<<"]"<<std::endl;
        float norm;
        norm=sqrt(x*x+y*y);
        //std::cout<<"Norma wektora = "<<norm<<std::endl;

    }
    ~Wektor2D(){
        //std::cout<<"Usunieto wektor ["<<x<<";"<<y<<"]"<<std::endl;
    }

    
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2) {
    return Wektor2D(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}

double operator*(Wektor2D v1, Wektor2D v2) {
    double prod;
    prod=v1.getX()*v2.getX()+v1.getY()*v2.getY();
    return prod;
}


