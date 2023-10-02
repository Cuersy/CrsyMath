#pragma once
#include<iostream>
#include<cmath>
struct bilinmeyen { float deger; }; struct LINE { float a, k; bilinmeyen* x; LINE() {}LINE(int a) :a(a), k(0), x(0) {}LINE(bilinmeyen& v) :a(0), k(1), x(&v) {} }; LINE operator + (LINE A, LINE B) { LINE R; R.a = A.a + B.a; R.k = A.k + B.k; if (A.x) { R.x = A.x; } else { R.x = B.x; }return R; }LINE operator - (LINE A, LINE B) { LINE R; R.a = A.a - B.a; R.k = A.k - B.k; if (A.x) { R.x = A.x; } else { R.x = B.x; }return R; }LINE operator * (LINE A, LINE B) { LINE R; R.a = A.a * B.a; R.k = A.k * B.a + B.k * A.a; if (A.x) { R.x = A.x; } else { R.x = B.x; }return R; }LINE operator / (LINE A, LINE B) { LINE R; R.a = A.a / B.a; R.k = A.k / B.a; R.x = A.x; return R; }void operator == (LINE A, LINE B) { LINE C = A - B; C.x->deger = -C.a / C.k; }
