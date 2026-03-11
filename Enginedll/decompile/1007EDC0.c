/*
 * func-name: sub_1007EDC0
 * func-address: 0x1007edc0
 * callers: 0x10083770
 * callees: none
 */

int sub_1007EDC0(int a1, ...)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int last_of; // eax
  int v5; // eax
  _BYTE v7[28]; // [esp+Ch] [ebp-28h] BYREF
  int v8; // [esp+30h] [ebp-4h]
  va_list va; // [esp+3Ch] [ebp+8h] BYREF

  va_start(va, a1);
  v8 = 1;
  v1 = std::string::length(va);
  if ( *(_BYTE *)std::string::operator[](va, v1 - 1) == 92 )
  {
    v2 = std::string::length(va);
    v3 = std::string::substr(va, v7, 0, v2 - 1);
    LOBYTE(v8) = 2;
    std::string::operator=(va, v3);
    LOBYTE(v8) = 1;
    std::string::~string(v7);
  }
  last_of = std::string::find_last_of(va, "\\", std::string::npos);
  v5 = std::string::substr(va, v7, last_of + 1, std::string::npos);
  LOBYTE(v8) = 3;
  std::string::operator=(va, v5);
  LOBYTE(v8) = 1;
  std::string::~string(v7);
  std::string::string(a1, va);
  LOBYTE(v8) = 0;
  std::string::~string(va);
  return a1;
}
