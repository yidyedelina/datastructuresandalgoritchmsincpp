#include <iostream> 
#include <string>
using namespace std;
typedef string Elem;
class CNode{
	Elem elem;
	CNode* next;
	friend class CircleList;
};

class CircleList {
	public:
		CircleList();
		~CircleList();
		bool empty() const;
		const Elem& front() const;
		const Elem& back() const;
		void advance();
		void add(const Elem& e);
		void remove();
	private:
		CNode* cursor;
};

CircleList::CircleList() : cursor(NULL) { }
CircleList::~CircleList(){
	while(!empty()) remove();
}

bool CircleList::empty() const {
	return cursor == NULL;
}
const Elem& CircleList::back() const {
	return cursor->elem;
}
const Elem& CircleList::front() const {
	return cursor->next->elem;
}
void CircleList::advance()
{
	cursor = cursor->next;
}

void CircleList::add(const Elem& e){
	CNode* v = new CNode;
	v->elem = e;
	if(cursor == NULL){
		v->next = v;
		cursor = v;
	}
	else {
		v->next = cursor->next;
		cursor->next = v;
	}
}
void CircleList::remove(){
	CNode* v  = cursor->next;
	if(v == cursor)
		cursor = NULL;
	else 
		cursor->next = v->next;
	delete v;

}

int main(){
	CircleList playList;
	playList.add("Staying alive");
	playList.add("Le freak");
	playList.advance();
	playList.advance();
	


}