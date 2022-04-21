class NODE{
      int size;
      NODE* next;
public:
        NODE(int);
        void show_node();
        void insert(NODE*&);
        NODE* move_next();
         ~NODE();
        void survive();
      };
