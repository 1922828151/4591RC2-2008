/*
 * func-name: ?controlIndex@Input@@QAEHAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100db650
 * callers: 0x100db790, 0x100db860
 * callees: 0x1017a610
 */

int __thiscall Input::controlIndex(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  int i; // ebp
  int v5; // eax
  int v6; // eax
  char v7; // al
  _BYTE v9[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v10[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v11; // [esp+50h] [ebp-4h]

  std::string::string(v10, a2);
  v11 = 0;
  sub_1017A610(v10);
  v3 = 0;
  for ( i = 0; ; i += 28 )
  {
    v5 = this[7];
    if ( !v5 || v3 >= (this[8] - v5) / 28 )
      break;
    v6 = this[7];
    if ( !v6 || v3 >= (this[8] - v6) / 28 )
      invalid_parameter_noinfo();
    std::string::string(v9, i + this[7]);
    LOBYTE(v11) = 1;
    sub_1017A610(v9);
    v7 = std::operator==<char>(v10, v9);
    LOBYTE(v11) = 0;
    if ( v7 )
    {
      std::string::~string(v9);
      v11 = -1;
      std::string::~string(v10);
      return v3;
    }
    std::string::~string(v9);
    ++v3;
  }
  v11 = -1;
  std::string::~string(v10);
  return -1;
}
