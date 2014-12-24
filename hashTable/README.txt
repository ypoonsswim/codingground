This is a practice from the follwoing topic:

Please complete following hash table implementation. The hash table is defined as:

typedef size_t hash_size:
typedef struct_hashtbl
{
  hash_size size;
  struct hashnode_s **nodes;
  hash_size(*hashfunc)(const char *);
} HASHTBL;

A hash node is defined as:

struct hashnode_s
{
  char *key;
  void *data;
  struct hashnode_s *next;
}


