void show(struct myArray *a){
    for(int i=0;i<(*a).used_size;i++){
        printf("%d\n",(*a).ptr[i]);
    }
}