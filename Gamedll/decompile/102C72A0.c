/*
 * func-name: sub_102C72A0
 * func-address: 0x102c72a0
 * callers: 0x102b7ad0, 0x102b9e20, 0x102bae90, 0x102bfb10
 * callees: none
 */

void __cdecl sub_102C72A0(int a1)
{
  int first_not_of; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _BYTE v5[28]; // [esp+8h] [ebp-44h] BYREF
  _BYTE v6[28]; // [esp+24h] [ebp-28h] BYREF
  int v7; // [esp+48h] [ebp-4h]

  first_not_of = std::string::find_first_not_of(a1, 32, 0);
  if ( first_not_of == std::string::npos )
  {
    std::string::operator=(a1, &unk_1032598B);
  }
  else if ( first_not_of )
  {
    v2 = std::string::substr(a1, v5, first_not_of, std::string::npos);
    v7 = 0;
    std::string::operator=(a1, v2);
    v7 = -1;
    std::string::~string(v5);
  }
  v3 = std::string::find_first_not_of(a1, 9, 0);
  if ( v3 == std::string::npos )
  {
    std::string::operator=(a1, &unk_1032598E);
  }
  else if ( v3 )
  {
    v4 = std::string::substr(a1, v6, v3, std::string::npos);
    v7 = 1;
    std::string::operator=(a1, v4);
    v7 = -1;
    std::string::~string(v6);
  }
}
