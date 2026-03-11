/*
 * func-name: sub_10036B10
 * func-address: 0x10036b10
 * callers: 0x10005943
 * callees: 0x102c9d62
 */

void *__cdecl sub_10036B10(void *a1, void *a2)
{
  int first_of; // ebp
  _BYTE *v3; // ecx
  int v4; // eax
  int v5; // eax
  _BYTE v7[28]; // [esp+18h] [ebp-64h] BYREF
  _BYTE v8[28]; // [esp+34h] [ebp-48h] BYREF
  _BYTE v9[28]; // [esp+50h] [ebp-2Ch] BYREF
  int v10; // [esp+78h] [ebp-4h]

  first_of = std::string::find_first_of(a2, 32, 0);
  if ( first_of == std::string::npos )
  {
    std::string::string(v8, a2);
    v10 = 1;
    std::string::operator=(a2, &unk_1030A0E1);
    std::string::string(a1, v8);
    v3 = v8;
  }
  else
  {
    std::string::substr(a2, v9, 0, first_of);
    v10 = 2;
    v4 = std::string::length(a2);
    v5 = std::string::substr(a2, v7, first_of + 1, v4);
    LOBYTE(v10) = 3;
    std::string::operator=(a2, v5);
    LOBYTE(v10) = 2;
    std::string::~string(v7);
    std::string::string(a1, v9);
    v3 = v9;
  }
  LOBYTE(v10) = 0;
  std::string::~string(v3);
  return a1;
}
