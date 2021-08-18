class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  private:
    int studentId;
    char name[20];
  
  // public section
  public:
  //    assignDetails() method declaration
    void assignDetails(int sId, char sName[]);
  //    display() method declaration
    void display();
};
