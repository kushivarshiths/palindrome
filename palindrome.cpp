#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  for(int i = 0; i <= text.size()/2; i++){
    if(text[i] == text[text.size() - i - 1]){
      return true;
    }
    else{
      return false;
    }
  }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
