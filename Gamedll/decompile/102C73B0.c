/*
 * func-name: sub_102C73B0
 * func-address: 0x102c73b0
 * callers: 0x102b7ad0, 0x102bae90, 0x102bfb10
 * callees: none
 */

void __cdecl sub_102C73B0(int a1)
{
  int last_not_of; // edi
  int v2; // eax
  int v3; // edi
  int v4; // eax
  _BYTE v5[28]; // [esp+Ch] [ebp-44h] BYREF
  _BYTE v6[28]; // [esp+28h] [ebp-28h] BYREF
  int v7; // [esp+4Ch] [ebp-4h]

  last_not_of = std::string::find_last_not_of(a1, 32, std::string::npos);
  if ( last_not_of == std::string::npos )
  {
    std::string::operator=(a1, &unk_1032598F);
  }
  else if ( last_not_of != std::string::length(a1) - 1 )
  {
    v2 = std::string::substr(a1, v5, 0, last_not_of + 1);
    v7 = 0;
    std::string::operator=(a1, v2);
    v7 = -1;
    std::string::~string(v5);
  }
  v3 = std::string::find_last_not_of(a1, 9, std::string::npos);
  if ( v3 == std::string::npos )
  {
    std::string::operator=(a1, &unk_10325993);
  }
  else if ( v3 != std::string::length(a1) - 1 )
  {
    v4 = std::string::substr(a1, v6, 0, v3 + 1);
    v7 = 1;
    std::string::operator=(a1, v4);
    v7 = -1;
    std::string::~string(v6);
  }
}
