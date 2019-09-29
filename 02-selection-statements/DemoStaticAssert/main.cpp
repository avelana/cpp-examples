#include <limits>

//static_assert(sizeof(long) == 8, "long must be 8 bytes");
static_assert(sizeof(int) == 4, "int must be 4 bytes");
static_assert(4 <= sizeof(int), " int is too small ");
//static_assert(!std::numeric_limits<char>::is_signed, "signed char");

int main() {
  return 0;
}

//{
//init_statement
//while ( condition ) {
//statement
//    iteration_expression;
//}
//}