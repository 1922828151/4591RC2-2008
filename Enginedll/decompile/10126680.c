/*
 * func-name: sub_10126680
 * func-address: 0x10126680
 * callers: 0x10125020
 * callees: none
 */

_BYTE *__thiscall sub_10126680(
        _BYTE *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char a16,
        char a17,
        char a18)
{
  char v19; // dl
  char v20; // al

  std::string::string(this);
  std::string::string(this + 28);
  std::string::operator=(this, &a2);
  std::string::operator=(this + 28, &a9);
  v19 = a16;
  v20 = a17;
  this[58] = a18;
  this[56] = v19;
  this[57] = v20;
  std::string::~string(&a2);
  std::string::~string(&a9);
  return this;
}
