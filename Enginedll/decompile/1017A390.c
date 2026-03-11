/*
 * func-name: sub_1017A390
 * func-address: 0x1017a390
 * callers: 0x10097ea0, 0x100dbc90, 0x100dcbd0, 0x1017e0a0
 * callees: none
 */

int __cdecl sub_1017A390(int a1)
{
  int first_not_of; // eax
  int v2; // eax
  int result; // eax
  int v4; // eax
  _BYTE v5[28]; // [esp+8h] [ebp-44h] BYREF
  _BYTE v6[28]; // [esp+24h] [ebp-28h] BYREF
  int v7; // [esp+48h] [ebp-4h]

  first_not_of = std::string::find_first_not_of(a1, 32, 0);
  if ( first_not_of == std::string::npos )
  {
    std::string::operator=(a1, &unk_101CE7BB);
  }
  else if ( first_not_of )
  {
    v2 = std::string::substr(a1, v5, first_not_of, std::string::npos);
    v7 = 0;
    std::string::operator=(a1, v2);
    v7 = -1;
    std::string::~string(v5);
  }
  result = std::string::find_first_not_of(a1, 9, 0);
  if ( result == std::string::npos )
    return std::string::operator=(a1, &unk_101CE7BE);
  if ( result )
  {
    v4 = std::string::substr(a1, v6, result, std::string::npos);
    v7 = 1;
    std::string::operator=(a1, v4);
    v7 = -1;
    return std::string::~string(v6);
  }
  return result;
}
