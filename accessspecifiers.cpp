class AccessSpecifierDemo
{
    private:
        int priVar;
    protected:
        int proVar;
    public:
        int pubVar;

        void setVar(int privatevar,int protectedvar, int publicvar)
        {

                priVar = privatevar;
                proVar = protectedvar;
                pubVar = publicvar;
        }

        void getVar()
        {
            cout<<"Private Variable :- "<<priVar<<endl;
            cout<<"Protected Variable :- "<<proVar<<endl;
            cout<<"Public Variable :- "<<pubVar<<endl;
        }
};

int main()
{
    AccessSpecifierDemo obj;
    obj.setVar(23,234,2345);
    obj.getVar();
    return 0;
}
