/*
 * func-name: sub_10005350
 * func-address: 0x10005350
 * callers: none
 * callees: none
 */

int __cdecl sub_10005350(int a1)
{
  int last_not_of; // edi
  int v2; // eax
  int v3; // edi
  int result; // eax
  int v5; // eax
  _BYTE v6[28]; // [esp+Ch] [ebp-44h] BYREF
  _BYTE v7[28]; // [esp+28h] [ebp-28h] BYREF
  int v8; // [esp+4Ch] [ebp-4h]

  last_not_of = std::string::find_last_not_of(a1, 32, std::string::npos);
  if ( last_not_of == std::string::npos )
  {
    std::string::operator=(a1, &unk_1001BE7B);
  }
  else if ( last_not_of != std::string::length(a1) - 1 )
  {
    v2 = std::string::substr(a1, v6, 0, last_not_of + 1);
    v8 = 0;
    std::string::operator=(a1, v2);
    v8 = -1;
    std::string::~string(v6);
  }
  v3 = std::string::find_last_not_of(a1, 9, std::string::npos);
  if ( v3 == std::string::npos )
    return std::string::operator=(a1, &unk_1001BE7F);
  result = std::string::length(a1) - 1;
  if ( v3 != result )
  {
    v5 = std::string::substr(a1, v7, 0, v3 + 1);
    v8 = 1;
    std::string::operator=(a1, v5);
    v8 = -1;
    return std::string::~string(v7);
  }
  return result;
}
