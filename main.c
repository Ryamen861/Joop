#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int JOOP = 0;
int ALPHB = 0;
char POOL[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

struct JOOPWarning {
	char msg[20];
}

struct node {
	char name[20];
	int value;
	struct node *child;
};

char *toStr(int num, char *dest_str) {
	int i = 0;
	bool isNegative;
	if (num == 0) {
		// if the number is zero, return zero
		return "0";
	} else {
		
		// check if the number is negative
		if (num < 0) {
			isNegative = true;
		} else {

			while (num != 0) {
				int rem = num % 10;
				if (rem > 9) {
					dest_str[i++] = (rem - 10) + 'a';
				} else {
					rem + "0";
				}
				num = num / 10;
			}
		}

		if (isNegative) {
			dest_str[i++] = '-';
		}

		dest_str[i] = "/0";

		reverse(dest_str, i);

		return dest_str;

	}
}

struct node make_new_node() {
	struct node newNode = {"", -1, NULL};
	return newNode;
}

char *format_num() {
	// convert int to string
	char str_ver[8];
	itoa(JOOP, str_ver, )

}

struct JOOPWarning next_num() {
	if (JOOP <= 100) {
		JOOP += 1;

		return 
	} else if (ALPHB < 26) (
		ALPHB += 1;
		return 
	) else {
		struct warning newWarning;
		strcpy(newWarning.msg, "Exhausted pager");
		return newWarning;
	}
}

void insert_ahead(struct node *ptr, struct node **curr) {
	// make a new node
	struct node newNode = make_new_node();

	// assign the new struct with some values
	int number;
	printf("What is the value for the new node?");
	scanf("%d", number);

	newNode.value = number;
	strcpy(newNode.name, "Joshua");

	// link the new node
	ptr->child = &newNode;
	// when using values of a pointer of a struct, use arrow operator

	// make curr hold the new node
	*curr = &newNode;
}

void insert_before(struct node *ptr, struct node **curr) {
	struct node newNode = make_new_node();

	

}

int main() {
	// make root
	struct node root = {
		"root", 0, NULL
	};

	// curr is the pointer to root
	struct node *curr = &root;

	bool should_continue = true;
	int order;

	while (should_continue) {
		scanf("%d", order);

		if (order == 1) {
			// give curr pointer to insert_ahead (now a double pointer)
			insert_ahead(&root, &curr);
		} else if (order == 2) {

		} else {
			break;
		}
	}

	bool go = true;
	struct node *loop = &root;


	while (go) {
		printf("name is %s\n", loop->name);
		printf("value is %i\n\n", loop->value);

		if (loop->child == NULL) {
			go = false;
		} else {
			loop = loop->child;
		}

	}	

	return 0;
	
}


// Josh is not printing consistently