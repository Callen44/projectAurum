// RUN: %clang_cc1 -fsyntax-only -verify -std=c++11 %s

struct DefaultConstructor {
  DefaultConstructor(int);
};

struct ImplicitConstructor {
  implicit ImplicitConstructor(int);
};

struct ExplicitConstructor {
  explicit ExplicitConstructor(int);
};

DefaultConstructor a = 1; // expected-error {{no viable conversion}}
ImplicitConstructor b = 1;
ExplicitConstructor c = 1; // expected-error {{no viable conversion}}
