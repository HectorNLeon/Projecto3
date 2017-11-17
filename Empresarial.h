#ifndef EMPRESARIAL_H_INCLUDED
#define EMPRESARIAL_H_INCLUDEDE
class Empresarial:public Servicio{
    private:
        double costoxDia;
        int maximaCantidad;
        string descripcion;
    public:
        Empresarial();
        Empresarial(string, char, double, int, string);
        void setCostoxDia(double);
        void setMaximaCantidad(int);
        void setDescripcion(string);
        double getCostoxDia();
        int getMaximaCantidad();
        string getDescripcion();
        void muestra();
        double calculaCosto(int duraHrs);
};
Empresarial::Empresarial():Servicio(){
    costoxDia=0;
    maximaCantidad=0;
    descripcion=" ";
}
Empresarial::Empresarial(string c, char t, double cos, int m, string d):Servicio(c,t){
    costoxDia=cos;
    maximaCantidad=m;
    descripcion=d;
}
void Empresarial::setCostoxDia(double cos){
    costoxDia=cos;
}
void Empresarial::setMaximaCantidad(int m){
    maximaCantidad=m;
}
void Empresarial::setDescripcion(string d){
    descripcion=d;
}
double Empresarial::getCostoxDia(){
    return costoxDia;
}
int Empresarial::getMaximaCantidad(){
    return maximaCantidad;
}
string Empresarial::getDescripcion(){
    return descripcion;
}
void Empresarial::muestra(){
    cout<<"Clave "<<cveServicio<<"\nTipo "<<tipo<<"\nCosto por dia "<<costoxDia<<"\nMaxima cantidad "<<maximaCantidad<<"\nDescripcion "<<descripcion<<endl;
}
double Empresarial::calculaCosto(int duraHrs){
    return costoxDia*duraHrs/8;

}





#endif // EMPRESARIAL_H_INCLUDED
