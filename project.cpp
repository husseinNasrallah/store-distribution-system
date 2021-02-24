#include<iostream>
#include<list>
#include<queue>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
//class date
class Date {
private:
	//a check to check if the year is a leaf year
	bool check = true;
public:
	int day;
	int month;
	int year;
	//constructor
	Date() {
		day = 1;
		month = 1;
		year = 1;
	}
	//constructor
	Date(int day1, int month1, int year1)
	{
		setDate(day1, month1, year1);
	}
	//function to set the date
	void setDate(int day1, int month1, int year1)
	{
		//check if the day exist in each month before seting the date
		check = true;
		if (month1 == 1)
		{
			if (day1 < 1 || day1>31)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 2)
		{
			//leap year there are 29 days
			if (year1 % 4 == 0)
			{
				if (day1 < 1 || day1>29)
				{
					cout << "This day doesnt exist" << endl;
					check = false;
				}
				else
				{
					day = day1;
					month = month1;
					year = year1;
				}
			}
			//non leap year so there are 28 days
			else
			{
				if (day1 < 1 || day1>28)
				{
					cout << "This day doesnt exist" << endl;
					check = false;
				}
				else
				{
					day = day1;
					month = month1;
					year = year1;
				}

			}
		}
		else if (month1 == 3)
		{
			if (day1 < 1 || day1>31)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 4)
		{
			if (day1 < 1 || day1>30)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 5)
		{
			if (day1 < 1 || day1>31)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 6)
		{
			if (day1 < 1 || day1>30)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 7)
		{
			if (day1 < 1 || day1>31)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 8)
		{
			if (day1 < 1 || day1>31)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 9)
		{
			if (day1 < 1 || day1>30)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 10)
		{
			if (day1 < 1 || day1>31)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 11)
		{
			if (day1 < 1 || day1>30)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else if (month1 == 12)
		{
			if (day1 < 1 || day1>31)
			{
				cout << "This day doesnt exist" << endl;
				check = false;
			}
			else
			{
				day = day1;
				month = month1;
				year = year1;
			}
		}
		else
		{
			cout << "This month doesnt exist" << endl;
			check = false;
		}
	}
	//a print function
	void display() {
		if (check == true)
		{
			cout << day << "/" << month << "/" << year << endl;
		}
		else
		{
			cout << "This date doesnt exist" << endl;
		}
	}
};
//class employee
struct  employee {

	int employee_id;
	string employee_name;
	//constructor
	employee() {
		employee_id = 0;
		employee_name = " ";
	}
	//constructor
	employee(int id1, string name1) {
		employee_id = id1;
		employee_name = name1;
	}
};
//Street/store class
struct Street_Store {
	int size = 0;
	int Store_id;
	string Street_name;
	string Manager_name;
	string Telephone;
	Date date_open;
	bool valid = false;
	employee* A_emplyee = new employee[size];
	//constructor
	Street_Store() {
		Store_id = 0;
		Street_name = "";
		Manager_name = "";
		Telephone = "";
		date_open;
	}
	//constructor
	Street_Store(int Store_id1, string Street_name1, string Manager_name1, string Telephone1, int day, int month, int year) {
		Store_id = Store_id1;
		Street_name = Street_name1;
		Manager_name = Manager_name1;
		Telephone = Telephone1;
		date_open.setDate(day, month, year);

	}
	//a function to extend the array length 
	employee* extendarray(employee* oldArray, int& size) {
		int newSize = size + 1;
		employee* newArray = new employee[newSize];
		for (int i = 0; i < size; i++) {
			newArray[i] = oldArray[i];
		}
		delete[] oldArray;
		size++;
		oldArray = new employee[size];
		oldArray = newArray;
		return oldArray;
	}
	//a function to decrement the array lenght
	employee* decremnetdarray(employee* oldArray, int& size) {
		int newSize = size - 1;
		employee* newArray = new employee[newSize];
		for (int i = 0; i < newSize; i++) {
			newArray[i] = oldArray[i];
		}
		delete[] oldArray;
		size--;
		oldArray = new employee[size];
		oldArray = newArray;
		return oldArray;
	}
	// a function to add an employee to the array
	void insertemployee(employee emp) {
		if (size < 10)
		{
			A_emplyee = extendarray(A_emplyee, size);
			A_emplyee[size - 1] = emp;
		}
		else
		{
			cout << "The store has reached its max capacity of employees" << endl;
		}
	}
	//a function to check if a certain employee exist in the array
	bool searchemployeecheck(employee emp)
	{
		for (int i = 0; i < size; i++)
		{
			if (A_emplyee[i].employee_id == emp.employee_id)
			{
				return true;
			}
		}
		return false;
	}
	//a function that returns the position of the employee
	int searchemployeeindex(employee emp)
	{
		for (int i = 0; i < size; i++)
		{
			if (A_emplyee[i].employee_id == emp.employee_id)
			{
				return i;
			}
		}
		return -1;
	}
	// a function that deletes an employee from the array
	void deleteemployee(employee emp) {
		if (searchemployeecheck(emp) == true)
		{
			employee temp = A_emplyee[searchemployeeindex(emp)];
			A_emplyee[searchemployeeindex(emp)] = A_emplyee[size - 1];
			A_emplyee[size - 1] = temp;
			A_emplyee = decremnetdarray(A_emplyee, size);
		}
		else
		{
			cout << "This employee doesnt exist in this store" << endl;
		}
	}
	//a print function
	void print()
	{
		cout << "The Store id is " << Store_id << endl;
		cout << "The street name is " << Street_name << endl;
		cout << "The manager of the Store is " << Manager_name << endl;
		cout << "The Store phone number is " << Telephone << endl;
		cout << "The Store was openned in ";
		date_open.display();
		if (size == 0)
		{
			cout << "There are no employees in the store" << endl;
		}
		else
		{
			cout << "The employees that work in the store are : ";
			cout << A_emplyee[0].employee_name;
			for (int i = 1; i < size; i++)
			{
				cout << ", " << A_emplyee[i].employee_name;
			}
			cout << endl;
		}
	}
};
//city class
struct  City {
	Street_Store* Stores = new Street_Store[100];
	int City_id;
	string City_name;
	//constructor
	City() {
		City_id = 0;
		City_name = " ";
	}
	//constructor
	City(int id1, string name1) {
		City_id = id1;
		City_name = name1;
	}
	//function to get the hashkey
	int hashkey(Street_Store Store)
	{
		return Store.Store_id % 10;
	}
	//function to insert in the array depending on the hashkey
	void insertStore(Street_Store Store)
	{
		bool inserted = false;
		for (int i = hashkey(Store); i < 100; i = i + 10)
		{
			if (Stores[i].valid == false)
			{
				Stores[i] = Store;
				Stores[i].valid = true;
				inserted = true;
				break;
			}
		}
		if (inserted == false)
		{
			cout << "The array for this hash is full" << endl;
		}
	}
	//check if a store exists in the city
	bool searchstorebool(Street_Store Store)
	{
		for (int i = hashkey(Store); i < 100; i = i + 10)
		{
			if ((Stores[i].Store_id == Store.Store_id) && (Stores[i].valid == true))
			{
				return true;
			}
		}
		return false;
	}
	//return the position of the store in the array
	int searchstoreint(Street_Store Store)
	{

		for (int i = hashkey(Store); i < 100; i = i + 10)
		{
			if ((Stores[i].Store_id == Store.Store_id) && (Stores[i].valid == true))
			{
				return i;
			}
		}
		return -1;
	}
	//delete a store
	void deletestore(Street_Store Store)
	{
		if (searchstorebool(Store) == true)
		{
			Stores[searchstoreint(Store)].valid = false;
		}
		else
		{
			cout << "The store doesnt exist" << endl;
		}
	}
	//print function
	void print()
	{
		cout << "The city " << City_name << " of id " << City_id << " Contains the following stores :" << endl;
		for (int i = 0; i < 100; i++)
		{
			if (Stores[i].valid == true)
			{
				Stores[i].print();
			}
		}
	}
	int countstoreincity()
	{
		int count = 0;
		for (int i = 0; i < 100; i++)
		{
			if (Stores[i].valid == true)
			{
				count++;
			}
		}
		return count;
	}
};
//structures for the bst
struct node {
	City value;
	node* left;
	node* right;

};
class btree {
public:

	node* root;

	btree() {
		root = NULL;
	}

	//function to destroy the whole tree
	void destroy_tree(node* leaf) {
		if (leaf != NULL) {
			destroy_tree(leaf->left);
			destroy_tree(leaf->right);
			delete leaf;
		}
	}
	void destroy_tree() {
		destroy_tree(root);
	}
	//function to insert
	void insert(City key, node* leaf) {

		if (key.City_id < leaf->value.City_id) {
			if (leaf->left != NULL) {
				insert(key, leaf->left);
			}
			else {
				leaf->left = new node;
				leaf->left->value = key;
				leaf->left->left = NULL;
				leaf->left->right = NULL;
			}
		}
		else if (key.City_id >= leaf->value.City_id) {

			if (leaf->right != NULL) {
				insert(key, leaf->right);
			}
			else {
				leaf->right = new node;
				leaf->right->value = key;
				leaf->right->right = NULL;
				leaf->right->left = NULL;
			}
		}

	}
	void insert(City key) {

		if (root != NULL) {
			insert(key, root);
		}
		else {
			root = new node;
			root->value = key;
			root->left = NULL;
			root->right = NULL;
		}

	}
	//search that returns a pointer to the node if found
	node* search(City key, node* leaf) {
		if (leaf != NULL) {
			if (key.City_id == leaf->value.City_id) {
				return leaf;
			}
			if (key.City_id < leaf->value.City_id) {
				return search(key, leaf->left);
			}
			else {
				return search(key, leaf->right);
			}
		}
		else {
			return NULL;
		}
	}
	node* search(City key) {
		return search(key, root);
	}

	
//inorder print function 
	void inorder_print() {
		inorder_print(root);
		cout << "\n";
	}
	void inorder_print(node* leaf) {
		if (leaf != NULL) {
			inorder_print(leaf->left);
			leaf->value.print();
			inorder_print(leaf->right);
		}
	}
	//delete a city if it contains no stores
	void deletecityifnostores()
	{
		deletecityifnostores(root);
	}
	void deletecityifnostores(node* leaf)
	{
		if (leaf != NULL)
		{
			deletecityifnostores(leaf->left);
			deletecityifnostores(leaf->right);
			if (leaf->value.countstoreincity() == 0)
			{
				deleteNode(leaf->value);
			}
		}
	}
	//delete country if it contains no stores 
	int countstoreofcountry() {
		return countstoreofcountry(root);

	}
	int countstoreofcountry(node* leaf)
	{
		int count = 0;
		if (leaf != NULL) {
			count = count + leaf->value.countstoreincity();
			count = count + countstoreofcountry(leaf->left);
			count = count + countstoreofcountry(leaf->right);
		}
		return count;
	}
	//search bool fucntion for the delete function
	bool searchifthere(City key, node* leaf) {
		if (leaf != NULL) {
			if (key.City_id == leaf->value.City_id) {
				return true;
			}
			if (key.City_id < leaf->value.City_id) {
				return search(key, leaf->left);
			}
			else {
				return search(key, leaf->right);
			}
		}
		else {
			return NULL;
		}
	}
	bool searchifthere(City key) {
		return searchifthere(key, root);
	}
	//find min node to help the delete function
	node* findMin(node* root)
	{
		while (root->left != NULL)
		{
			root = root->left;
		}
		return root;
	}

	// Iterative function to search in subtree rooted at curr & set its parent
// Note that curr & parent are passed by reference
	void searchKey(node*& curr, City key, node*& parent)
	{
		// traverse the tree and search for the key
		while (curr != nullptr && curr->value.City_id != key.City_id)
		{
			// update parent node as current node
			parent = curr;

			// if given key is less than the current node, go to left subtree
			// else go to right subtree
			if (key.City_id < curr->value.City_id)
				curr = curr->left;
			else
				curr = curr->right;
		}
	}

	// Function to delete node from a BST
	void deleteNode(node*& root, City key)
	{
		// pointer to store parent node of current node
		node* parent = nullptr;

		// start with root node
		node* curr = root;

		// search key in BST and set its parent pointer
		searchKey(curr, key, parent);

		// return if key is not found in the tree
		if (curr == nullptr)
			return;

		// Case 1: node to be deleted has no children i.e. it is a leaf node
		if (curr->left == nullptr && curr->right == nullptr)
		{
			// if node to be deleted is not a root node, then set its
			// parent left/right child to null
			if (curr != root)
			{
				if (parent->left == curr)
					parent->left = nullptr;
				else
					parent->right = nullptr;
			}
			// if tree has only root node, delete it and set root to null
			else
				root = nullptr;

			// deallocate the memory
			free(curr);	 // or delete curr;
		}


		// Case 2: node to be deleted has two children
		else if (curr->left && curr->right)
		{
			// find its in-order successor node
			node* successor = findMin(curr->right);

			// store successor value
			City val = successor->value;

			// recursively delete the successor. Note that the successor
			// will have at-most one child (right child)
			deleteNode(root, successor->value);

			// Copy the value of successor to current node
			curr->value = val;
		}

		// Case 3: node to be deleted has only one child
		else
		{
			// find child node
			node* child = (curr->left) ? curr->left : curr->right;

			// if node to be deleted is not a root node, then set its parent
			// to its child
			if (curr != root)
			{
				if (curr == parent->left)
					parent->left = child;
				else
					parent->right = child;
			}

			// if node to be deleted is root node, then set the root to child
			else
				root = child;

			// deallocate the memory
			free(curr);
		}
	}
	void deleteNode(City key)
	{
		deleteNode(root, key);
	}
};
//country struct
struct  Country {
	int country_id;
	string country_name;
	btree tree;
	//constructor
	Country() {
		country_id = 0;
		country_name = " ";
	}
	//constructor
	Country(int id1, string name1, btree tree1) {
		country_id = id1;
		country_name = name1;
		tree = tree1;
	}
	//constructor
	Country(int id1, string name1) {
		country_id = id1;
		country_name = name1;
	}
	//function to add a tree to the country
	void addtree(btree tree1)
	{
		tree = tree1;
	}

};
//structures for the linked list
struct listnode
{
	Country data;
	listnode* next;
};
class linked_list
{
public:
	listnode* head;
	listnode* tail;
	listnode* fence;
	linked_list()
	{
		head = NULL;
		tail = NULL;
		fence = NULL;
	}
	//add function
	void add_node(Country n)
	{
		listnode* tmp = new listnode;
		tmp->data = n;
		tmp->next = NULL;

		if (head == NULL)
		{
			head = tmp;
			tail = tmp;
			fence = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tail->next;
		}
	}
	//function to check if this element exist 
	bool searchifthere(Country n)
	{
		fence = head;
		if (head == NULL)
		{
			return false;
		}
		else
		{
			if (head->data.country_id == n.country_id)
			{
				return true;
			}
			else
			{

				while (fence->next != NULL)
				{
					if (fence->next->data.country_id == n.country_id)
					{
						return true;
					}
					else
					{
						fence = fence->next;
					}
				}
				return false;
			}
		}
	}
	//function to search for the elemnet and return it
	listnode* search(Country n)
	{
		fence = head;
		if (head->data.country_id == n.country_id)
		{
			return head;
		}
		else
		{

			while (fence->next != NULL)
			{
				if (fence->next->data.country_id == n.country_id)
				{
					return fence;
				}
				else
				{
					fence = fence->next;
				}
			}
			return head;
		}
	}
	//delete function
	void deletefunction(Country n)
	{

		if (searchifthere(n) == true)
		{
			fence = head;
			if (head->next == NULL)
			{
				head = NULL;
				tail = NULL;
				fence = NULL;
			}
			else if (head->data.country_id == n.country_id)
			{
				head = head->next;
				fence = head;
			}
			else
			{
				while (fence->next != NULL)
				{
					if (fence->next->data.country_id == n.country_id)
					{
						fence->next = fence->next->next;
					}
					else
					{
						fence = fence->next;
					}
				}
			}

		}
		else
		{
			cout << "This country doenst exist" << endl;
		}
	}
	//delete countries that has no stores
	void deleteifnostores()
	{
		fence = head;
		if (head == NULL)
		{
			
		}
		else if (head->next == NULL)
		{
			if (head->data.tree.countstoreofcountry() == 0)
			{
				deletefunction(head->data);
			}
		}
		else
		{	
			while (fence->next != NULL)
			{
				
				if (fence->data.tree.countstoreofcountry() == 0)
				{
					deletefunction(fence->data);
					
				}
				else
				{
					fence = fence->next;
				}
			}
			if (fence->data.tree.countstoreofcountry() == 0)
			{

				deletefunction(fence->data);
				
			}	
		}
	}
	void deleteifnostorescities()
	{
		fence = head;
		if (head == NULL)
		{

		}
		else
		{
			if (head->data.tree.root != NULL) 
			{
				head->data.tree.deletecityifnostores();
				while (fence->next != NULL)
				{
					if (fence->data.tree.countstoreofcountry() == 0)
					{
						fence->data.tree.deletecityifnostores();
					}
					else
					{
						fence = fence->next;
					}
				}
			}
		}

	}
	//print function
	void print()
	{
		fence = head;
		if (head == NULL)
		{
			cout << "There are no countries that contains stores" << endl;
		}
		else
		{

			while (fence->next != NULL)
			{
				cout << "The country " << fence->data.country_name << " of id " << fence->data.country_id << " contains :" << endl;
				fence->data.tree.inorder_print();
				fence = fence->next;
			}
			cout << "The country " << fence->data.country_name << " of id " << fence->data.country_id << " contains :" << endl;
			fence->data.tree.inorder_print();
		}
	}

};

int main() {
	linked_list Countries;
	//menu
	while (true)
	{
		int temp;
		cout << "press 1 to access country " << endl;
		cout << "press 2 to access city " << endl;
		cout << "press 3 to access street/store " << endl;
		cout << "press 4 to access employee" << endl;
		cout << "press 5 to access print" << endl;
		cout << "press 6 to exit" << endl;
		cin >> temp;
		if (temp == 1)
		{
			int temp1;
			cout << "press 1 to add" << endl;
			cout << "press 2 to delete" << endl;
			cout << "press 3 to print the number of stores in a country" << endl;
			cin >> temp1;
			if (temp1 == 1)
			{
				//ask for the id and name of the country and then check if it exists and add it if it doesnt
				int country_id;
				string country_name;
				cout << "Please enter the id of the country you want to add" << endl;
				cin >> country_id;
				cout << "Please enter the name of the country you want to add" << endl;
				cin >> country_name;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "This country already exist" << endl;
				}
				else
				{
					Countries.add_node(firstcountry);
					cout << "The country has been added" << endl;
				}
			}
			else if (temp1 == 2)
			{
				//ask for the id and then delete the country of that id if it exists
				int country_id;
				string country_name = "";
				cout << "Please enter the id of the country you want to delete " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					Countries.deletefunction(firstcountry);
					cout << "The city has been deleted" << endl;
				}
				else
				{
					cout << "The country doesnt exist" << endl;
				}

			}
			else if (temp1 == 3)
			{
				//prints the number of stores in a country
				int country_id;
				string country_name = "";
				cout << "Please enter the id of the country you want to print the number of stores of " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "the number of stores in the country of id " << country_id << " is " << Countries.search(firstcountry)->data.tree.countstoreofcountry() << endl;
				}
				else
				{
					cout << "The country doesnt exist" << endl;
				}

			}
			else
			{
				cout << "Such command doesnt exist" << endl;
			}
		}
		else if (temp == 2)
		{
			int temp1;
			cout << "press 1 to add" << endl;
			cout << "press 2 to delete" << endl;
			cout << "press 3 to print the number of stores in a city" << endl;
			cin >> temp1;
			if (temp1 == 1)
			{
				//add a city to a specific country while checking
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				cout << "Please enter the id of the country you want to add to " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to add" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "This city already exists" << endl;
					}
					else
					{
						cout << "Please enter the name of the city you want to add" << endl;
						cin >> city_name;
						City firstcity(city_id, city_name);
						Countries.search(firstcountry)->data.tree.insert(firstcity);
						cout << "The city has been added" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else if (temp1 == 2)
			{
				//delete a city from a specific country
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				cout << "Please enter the id of the country you want to delete from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to delete" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						Countries.search(firstcountry)->data.tree.deleteNode(firstcity);
						cout << "The city has been deleted" << endl;
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else if (temp1 == 3)
			{
				//print the number of stores in a specific city
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				cout << "Please enter the id of the country you want to print the number of stores from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to print the number of stores of" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "the number of stores in the city of id " << firstcity.City_id << " is " << Countries.search(firstcountry)->data.tree.search(firstcity)->value.countstoreincity() << endl;
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else
			{
				cout << "Such command doesnt exist" << endl;
			}
		}
		else if (temp == 3)
		{
			int temp1;
			cout << "press 1 to add" << endl;
			cout << "press 2 to delete" << endl;
			cout << "press 3 to update" << endl;
			cin >> temp1;
			if (temp1 == 1)
			{
				//add a store to a specifc city
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				int store_id;
				string Street_name = "";
				string Manager_name = "";
				string Telephone = "";
				int day = 1;
				int month = 1;
				int year = 1;
				cout << "Please enter the id of the country you want to add to " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to add to" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "Please enter the id of the store you want to add" << endl;
						cin >> store_id;
						Street_Store firststore(store_id, Street_name, Manager_name, Telephone, day, month, year);
						if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(firststore) == true)
						{
							cout << "This Store already exist" << endl;
						}
						else
						{
							cout << "Please enter the name of the street you want to add" << endl;
							cin >> Street_name;
							cout << "Please enter the name of the manager you want to add" << endl;
							cin >> Manager_name;
							cout << "Please enter the telephone number you want to add" << endl;
							cin >> Telephone;
							cout << "Please enter the day you want to open the store" << endl;
							cin >> day;
							cout << "Please enter the month you want to open the store" << endl;
							cin >> month;
							cout << "Please enter the year you want to open the store" << endl;
							cin >> year;
							Street_Store firststore(store_id, Street_name, Manager_name, Telephone, day, month, year);
							Countries.search(firstcountry)->data.tree.search(firstcity)->value.insertStore(firststore);
							cout << "The store has been added" << endl;
						}

					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else if (temp1 == 2)
			{
				//delete a store from a specifc city
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				int store_id;
				string Street_name = "";
				string Manager_name = "";
				string Telephone = "";
				int day = 1;
				int month = 1;
				int year = 1;
				cout << "Please enter the id of the country you want to delete from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to delete from" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "Please enter the id of the store you want to delete" << endl;
						cin >> store_id;
						Street_Store firststore(store_id, Street_name, Manager_name, Telephone, day, month, year);
						if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(firststore) == true)
						{
							Countries.search(firstcountry)->data.tree.search(firstcity)->value.deletestore(firststore);
							cout << "The store has been deleted" << endl;
						}
						else
						{
							cout << "This store doesnt exist" << endl;
						}

					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}


			}
			else if (temp1 == 3)
			{
				//update the information of a store in a specific city
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				int store_id;
				string Street_name = "";
				string Manager_name = "";
				string Telephone = "";
				int day = 1;
				int month = 1;
				int year = 1;
				cout << "Please enter the id of the country you want to update to " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to update to" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "Please enter the id of the store you want to update" << endl;
						cin >> store_id;
						Street_Store firststore(store_id, Street_name, Manager_name, Telephone, day, month, year);
						if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(firststore) == true)
						{
							cout << "Please enter the new street name of the store" << endl;
							cin >> Street_name;
							cout << "Please enter the name of the new manager of the store" << endl;
							cin >> Manager_name;
							cout << "Please enter the new telephone number of the store" << endl;
							cin >> Telephone;
							cout << "Please enter the new day of the store's openning" << endl;
							cin >> day;
							cout << "Please enter the new month of the store's openning" << endl;
							cin >> month;
							cout << "Please enter the new year of the store's openning" << endl;
							cin >> year;
							Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].Street_name = Street_name;
							Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].Manager_name = Manager_name;
							Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].Telephone = Telephone;
							Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].date_open.setDate(day, month, year);
							cout << "The store has been updated" << endl;

						}
						else
						{
							cout << "This Store doesnt exist" << endl;
						}
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else
			{
				cout << "Such command doesnt exist" << endl;
			}
		}
		else if (temp == 4)
		{
			int temp1;
			cout << "press 1 to add" << endl;
			cout << "press 2 to delete" << endl;
			cout << "press 3 to transfer" << endl;
			cin >> temp1;
			if (temp1 == 1)
			{
				//add an employee to a specifc store
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				int store_id;
				string Street_name = "";
				string Manager_name = "";
				string Telephone = "";
				int day = 1;
				int month = 1;
				int year = 1;
				int employee_id;
				string employee_name = "";
				cout << "Please enter the id of the country you want to add to " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to add to" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "Please enter the id of the store you want to add to" << endl;
						cin >> store_id;
						Street_Store firststore(store_id, Street_name, Manager_name, Telephone, day, month, year);
						if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(firststore) == true)
						{
							cout << "Please enter the employee id" << endl;
							cin >> employee_id;
							employee firstemployee(employee_id, employee_name);
							if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].searchemployeecheck(firstemployee) == true)
							{
								cout << "The employee already exist" << endl;
							}
							else
							{
								cout << "Please enter the employee name " << endl;
								cin >> employee_name;
								employee firstemployee(employee_id, employee_name);
								Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].insertemployee(firstemployee);
								cout << "The employee has been added" << endl;
							}
						}
						else
						{
							cout << "The store doesnt exist" << endl;
						}
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else if (temp1 == 2)
			{
				//delete an employee from a specific store
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				int store_id;
				string Street_name = "";
				string Manager_name = "";
				string Telephone = "";
				int day = 1;
				int month = 1;
				int year = 1;
				int employee_id;
				string employee_name = "";
				cout << "Please enter the id of the country you want to delete from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want delete from" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "Please enter the id of the store you want to delete from" << endl;
						cin >> store_id;
						Street_Store firststore(store_id, Street_name, Manager_name, Telephone, day, month, year);
						if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(firststore) == true)
						{
							cout << "Please enter the employee id you want to remove" << endl;
							cin >> employee_id;
							employee firstemployee(employee_id, employee_name);
							if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].searchemployeecheck(firstemployee) == true)
							{
								Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].deleteemployee(firstemployee);
								cout << "The employee has been removed" << endl;
							}
							else
							{
								cout << "The employee doesnt exist" << endl;
							}
						}
						else
						{
							cout << "The store doesnt exist" << endl;
						}
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else if (temp1 == 3)
			{
				//transfer an emplyee from a store to a store by deleting him from the first store and then adding it to the second
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				int store1_id;
				int store2_id;
				string Street_name = "";
				string Manager_name = "";
				string Telephone = "";
				int day = 1;
				int month = 1;
				int year = 1;
				int employee_id;
				string employee_name = "";
				cout << "Please enter the id of the country you want to move from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want move from" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "Please enter the id of the store you want to move from" << endl;
						cin >> store1_id;
						Street_Store firststore(store1_id, Street_name, Manager_name, Telephone, day, month, year);
						if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(firststore) == true)
						{
							cout << "Please enter the employee id you want to move" << endl;
							cin >> employee_id;
							employee firstemployee(employee_id, employee_name);
							if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].searchemployeecheck(firstemployee) == true)
							{
								employee_name = Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].A_emplyee[Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].searchemployeeindex(firstemployee)].employee_name;
								Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].deleteemployee(firstemployee);
								employee firstemployee(employee_id, employee_name);
								cout << "Please enter the id of the store you want to move to" << endl;
								cin >> store2_id;
								Street_Store secondstore(store2_id, Street_name, Manager_name, Telephone, day, month, year);
								if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(secondstore) == true)
								{
									if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(secondstore)].searchemployeecheck(firstemployee) == true)
									{
										cout << "This employee already exist in this store" << endl;
									}
									else
									{
										Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(secondstore)].insertemployee(firstemployee);
										cout << "The employee has been transfered from store of id " << firststore.Store_id << " to store of id " << secondstore.Store_id << endl;
									}
								}
								else
								{
									cout << "The store you want to trasnfer to doesnt exist" << endl;
								}
							}
							else
							{
								cout << "The employee doesnt exist" << endl;
							}
						}
						else
						{
							cout << "The store you want to transfer from doesnt exist" << endl;
						}
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else
			{
				cout << "Such command doesnt exist" << endl;
			}
		}
		else if (temp == 5)
		{

			int temp1;
			cout << "press 1 to print information of stores in all countries" << endl;
			cout << "press 2 to print information of stores in a specific country" << endl;
			cout << "press 3 to print information of stores in a specific city" << endl;
			cout << "press 4 to print information of specific store" << endl;
			cin >> temp1;
			//deleting all the cities and countries that doesnt contain any stores before printing

			Countries.deleteifnostorescities();
			Countries.deleteifnostores();

			if (temp1 == 1)
			{
				//print everything
				Countries.print();
			}
			else if (temp1 == 2)
			{
				//print everything in a specific country
				int country_id;
				string country_name = "";
				cout << "Please enter the id of the country you want to print the number of stores from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "The stores in the country " << Countries.search(firstcountry)->data.country_name << " of id " << Countries.search(firstcountry)->data.country_id << "is :" << endl;
					Countries.search(firstcountry)->data.tree.inorder_print();
				}
				else
				{
					cout << "This Country doesnt exist" << endl;
				}
			}
			else if (temp1 == 3)
			{
				//print everything in a specifc city
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				cout << "Please enter the id of the country you want to print the number of stores from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to print the number of stores from" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "The stores in the city " << Countries.search(firstcountry)->data.tree.search(firstcity)->value.City_name << " of id " << city_id << "is :" << endl;
						Countries.search(firstcountry)->data.tree.search(firstcity)->value.print();
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}
			}
			else if (temp1 == 4)
			{
				//print information for a specific store
				int country_id;
				string country_name = "";
				int city_id;
				string city_name = "";
				int store_id;
				string Street_name = "";
				string Manager_name = "";
				string Telephone = "";
				int day = 1;
				int month = 1;
				int year = 1;
				cout << "Please enter the id of the country you want to print the number of stores from " << endl;
				cin >> country_id;
				Country firstcountry(country_id, country_name);
				if (Countries.searchifthere(firstcountry) == true)
				{
					cout << "Please enter the id of the city you want to print the number of stores from" << endl;
					cin >> city_id;
					City firstcity(city_id, city_name);
					if (Countries.search(firstcountry)->data.tree.searchifthere(firstcity) == true)
					{
						cout << "Please enter the id of the store you want to print the number of stores from" << endl;
						cin >> store_id;
						Street_Store firststore(store_id, Street_name, Manager_name, Telephone, day, month, year);
						if (Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstorebool(firststore) == true)
						{

							Countries.search(firstcountry)->data.tree.search(firstcity)->value.Stores[Countries.search(firstcountry)->data.tree.search(firstcity)->value.searchstoreint(firststore)].print();
						}
						else
						{
							cout << "This store doesnt exist" << endl;
						}
					}
					else
					{
						cout << "This city doesnt exist" << endl;
					}
				}
				else
				{
					cout << "This country doesnt exist" << endl;
				}

			}
		}
		//exit
		else if (temp == 6)
		{
			break;
		}
	}

}
