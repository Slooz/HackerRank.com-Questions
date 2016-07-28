// Copyright [2016] <Krzysztof Czelusniak>

#ifndef TUTORIALS_DAY_4_CLASS_VS_INSTANCE_DAY_4_CLASS_VS_INSTANCE_PERSON_H_
#define TUTORIALS_DAY_4_CLASS_VS_INSTANCE_DAY_4_CLASS_VS_INSTANCE_PERSON_H_

class Person {
 public:
  explicit Person(int initial_age);

  void YearPasses();
  void AmIOld();
 private:
  int age;
};

#endif  // TUTORIALS_DAY_4_CLASS_VS_INSTANCE_DAY_4_CLASS_VS_INSTANCE_PERSON_H_
