// CoolStack.java - Solution for stack lab
// Author: Zachary Klausner
// Date:   2/15/16
// Class:  CS165

import java.util.ArrayList;
import java.util.EmptyStackException;

class CoolStack<E> implements StackInterface<E> {

    // Underlying data structure
    public ArrayList<E> stack = new ArrayList<E>();
	
    // Default constructor

	public String toString() {
		
		String returnString = "";
		returnString += "[";
		for (E object: stack) {
			
			returnString += object;
			if (object == stack.get(stack.size() - 1)) {
				returnString += "]";
				return returnString;
			}
			returnString += ", ";
			
		}
		returnString += "]";
		return returnString;
		
	}
    
	@Override
	public E push(E item) {
		
		stack.add(item);
		return item;
		
	}

	@Override
	public E pop() throws EmptyStackException {
		
		if (isEmpty()) {
			EmptyStackException e = new EmptyStackException();
			throw e;
		}
		E lastOn = stack.get(stack.size() - 1);
		stack.remove(stack.size() - 1);
		return lastOn;
		
	}

	@Override
	public E peek() {

		return stack.get(stack.size() - 1);
		
	}

	@Override
	public boolean isEmpty() {

		if (stack.size() == 0) {
			return true;
		}
	
		return false;
		
	}

	@Override
	public int size() {

		return stack.size();
		
	}

	@Override
	public void clear() {

		stack.clear();
		
	}

	@Override
	public int search(Object o) {
		
		int position = stack.size();
		for (E object: stack) {
			if (object.equals(o)) {
				return position;
			}
			position--;
		}
		return -1;
	}

	@Override
	public boolean contains(Object o) {

		for (E object: stack) {
			if (object.equals(o)) {
				return true;
			}
		}
		return false;
	}

	@Override
	public int indexOf(Object o) {

		int index = 0;
		for (E object: stack) {
			if (object.equals(o)) {
				return index;
			}
			index++;
		}
		return -1;
	}

	@Override
	public int lastIndexOf(Object o) {
		
		int index = 0;
		ArrayList<Integer> indexes = new ArrayList<Integer>();
		for (E object: stack) {
			if (object.equals(o)) {
				indexes.add(index);
			}
			index++;
		}
		indexes.trimToSize();
		return indexes.get(indexes.size() - 1);
	}

}
