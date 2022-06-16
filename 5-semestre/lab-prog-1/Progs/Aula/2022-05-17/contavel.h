#ifndef CONTAVEL
#define CONTAVEL

class contavel {
  private:
    static int quantidade_;
  public:
    contavel();
    ~contavel();
    bool validar_quantidade();
    int quantidade() { return quantidade_; }
    virtual int max() const = 0;
    virtual int min() const = 0;
};

#endif