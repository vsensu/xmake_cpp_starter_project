#ifndef HELLO_H_
#define HELLO_H_

#ifdef __cplusplus
extern "C" {
#endif

void say(const char* str);

#ifdef __cplusplus
}
#endif

template <typename T1, typename T2>
auto add(const T1& lhs, const T2& rhs) {
  return lhs + rhs;
}

#endif