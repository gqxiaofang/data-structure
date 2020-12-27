# main.c为单链表主要从操作的实现，这里按照码的代码
```
Lnode *insert(Lnode *first, Lnode *p,int e);
Lnode *find(Lnode *first, int e);
Lnode *delete(Lnode *first, int e);
void print(Lnode *first);
Lnode *list_create(Lnode *first,int a[],int n);
void list_destroy(Lnode *first);
Lnode *insert_order(Lnode *first,Lnode *s);
Lnode *get_front(Lnode **first);
Lnode *list_sort(Lnode *first);
```
# 顺序表和单链表的比较
```
  若线性表需频繁查找却很少进行插入和删除操作，或其操作和元素在表中的位置密切相关时，宜采用顺序表作为存储结构；若线性表需频繁进行插入和删除时，则宜采用单链表做存储结构。当线性表中元素个数变化较大或者未知
最好使用单链表实现；而如果用户事先知道线性表的大致长度，使用顺序表的空间效率更高。
  顺序表采用顺序存储结构，即用一段地址连续的存储单元以此存储线性表的数据元素，数据元素之间的逻辑关系通过存储位置来实现。单链表采用连接存储结构，即用一组任意的存储单元存放线性表的元素，用指针来反映数据元素之间的逻辑关系。
  总之，线性表的顺序实现和链表实现各有其优缺点，不能笼统地说哪种实现更好，只能根据实际问题的具体需要，并对各方面的优缺点加以综合平衡，才能最终选定比较适宜的实现方法。
```
