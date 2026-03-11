/*
 * func-name: sub_102C7DB0
 * func-address: 0x102c7db0
 * callers: none
 * callees: 0x102c7520
 */

void *__cdecl sub_102C7DB0(void *a1, int a2)
{
  int first_of; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edi
  _DWORD *i; // eax
  int v7; // eax
  int last_of; // eax
  int v9; // eax
  _BYTE v11[28]; // [esp+18h] [ebp-28h] BYREF
  int v12; // [esp+3Ch] [ebp-4h]

  v12 = 1;
  std::string::string(a1, &a2);
  first_of = std::string::find_first_of(a1, ":", 0);
  if ( first_of != std::string::npos )
  {
    v3 = std::string::substr(a1, v11, first_of + 1, std::string::npos);
    LOBYTE(v12) = 2;
    std::string::operator=(a1, v3);
    LOBYTE(v12) = 1;
    std::string::~string(v11);
  }
  if ( !std::string::find_first_of(a1, "\\/", 0) )
  {
    v4 = std::string::substr(a1, v11, 1, std::string::npos);
    LOBYTE(v12) = 3;
    std::string::operator=(a1, v4);
    LOBYTE(v12) = 1;
    std::string::~string(v11);
  }
  v5 = std::string::find_first_of(a1, "/\\", 0);
  for ( i = (_DWORD *)std::string::npos; v5 != std::string::npos; i = (_DWORD *)std::string::npos )
  {
    v7 = std::string::replace(a1, v5, 1, "$");
    std::string::operator=(a1, v7);
    v5 = std::string::find_first_of(a1, "/\\", v5 + 1);
  }
  last_of = std::string::find_last_of(a1, ".", *i);
  v9 = std::string::substr(a1, v11, 0, last_of);
  LOBYTE(v12) = 4;
  std::string::operator=(a1, v9);
  LOBYTE(v12) = 1;
  std::string::~string(v11);
  sub_102C7520((int)a1);
  LOBYTE(v12) = 0;
  std::string::~string(&a2);
  return a1;
}
