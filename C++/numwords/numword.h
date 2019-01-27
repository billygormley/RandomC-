#ifndef NUMWORD_H
#define NUMWORD_H


class numword {
    public:
        numword(int n);
        int getNumword(const int n) const;
        virtual ~numword();

    protected:

    private:
        numword();
        int n;

};

#endif // NUMWORD_H
