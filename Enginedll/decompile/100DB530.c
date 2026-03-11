/*
 * func-name: ?GetControlHandle@Input@@QAEHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100db530
 * callers: 0x1007f170, 0x10091db0, 0x100c9cb0, 0x10162f00
 * callees: 0x10097800, 0x1017a610
 */

int __thiscall Input::GetControlHandle(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebx
  unsigned int i; // edi
  int v11; // eax
  int v12; // eax
  const char *v14; // eax

  v9 = 0;
  sub_1017A610(&a2);
  for ( i = 0; ; ++i )
  {
    v11 = this[7];
    if ( !v11 || i >= (this[8] - v11) / 28 )
      break;
    v12 = this[7];
    if ( !v12 || i >= (this[8] - v12) / 28 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(v9 + this[7], &a2) )
    {
      std::string::~string(&a2);
      return i;
    }
    v9 += 28;
  }
  v14 = (const char *)std::string::c_str(&a2);
  Warning("GetControlHandle(): Control: '%s' wasn't found in the config file", v14);
  std::string::~string(&a2);
  return -1;
}
