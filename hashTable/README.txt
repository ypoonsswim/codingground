This is a practice from the follwoing topic:

Please complete the following hash table implementation. The hash table is defined as:

typedef size_t hash_size;
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

Here is the main and hash table create function:

HASHTBL *hashtbl_create(hash_size size, hash_size (*hashfunc)(const char *))
{
	HASHTBL *hashtbl;

	if(!(hashtbl=malloc(sizeof(HASHTBL)))) return NULL;

	if(!(hashtbl->nodes=calloc(size, sizeof(struct hashnode_s*)))) {
		free(hashtbl);
		return NULL;
	}

	hashtbl->size=size;

	if(hashfunc) hashtbl->hashfunc=hashfunc;
	else hashtbl->hashfunc=def_hashfunc;

	return hashtbl;
}

int main()
{
	HASHTBL *hashtbl;
	char *spain, *italy;

	if(!(hashtbl=hashtbl_create(16, NULL))) {
		fprintf(stderr, "ERROR: hashtbl_create() failed\n");
		exit(EXIT_FAILURE);
	}

	hashtbl_insert(hashtbl, "France", "Paris");
	hashtbl_insert(hashtbl, "England", "London");
	hashtbl_insert(hashtbl, "Sweden", "Stockholm");
	hashtbl_insert(hashtbl, "Germany", "Berlin");
	hashtbl_insert(hashtbl, "Norway", "Oslo");
	hashtbl_insert(hashtbl, "Italy", "Rome");
	hashtbl_insert(hashtbl, "Spain", "Madrid");
	hashtbl_insert(hashtbl, "Estonia", "Tallinn");
	hashtbl_insert(hashtbl, "Netherlands", "Amsterdam");
	hashtbl_insert(hashtbl, "Ireland", "Dublin");

	printf("After insert:\n");
	italy=hashtbl_get(hashtbl, "Italy");
	printf("Italy: %s\n", italy?italy:"-");
	spain=hashtbl_get(hashtbl, "Spain");
	printf("Spain: %s\n", spain?spain:"-");
	
	hashtbl_remove(hashtbl, "Spain");

	printf("After remove:\n");
	spain=hashtbl_get(hashtbl, "Spain");
	printf("Spain: %s\n", spain?spain:"-");

  	hashtbl_resize(hashtbl, 8);

	printf("After resize:\n");
	italy=hashtbl_get(hashtbl, "Italy");
	printf("Italy: %s\n", italy?italy:"-");

	hashtbl_destroy(hashtbl);

	return 0;
}

To manipulate and lookup the hash table, please implement following functions:

void hashtbl_destroy(HASHTBL *hashtbl);
int hashtbl_insert(HASHTBL *hashtbl, const char *key, void *data);
int hashtbl_remove(HASHTBL *hashtbl, const char *key);
void *hashtbl_get(HASHTBL *hashtbl, const char *key);
int hashtbl_resize(HASHTBL *hashtbl, hash_size size);
