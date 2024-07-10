#ifndef EMP__H_
#define EMP__H_
class emp {
  protected:
     int empno;
     char *name;
     float bsal;

  public:
    emp();
    emp(int,char *,float);
    virtual ~emp();
    virtual float cal_netSal()=0;
  };
#endif
