/*
 * func-name: ?GetType@MaterialManager@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
 * func-address: 0x100e3020
 * callers: 0x10003a50, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x100e40e0, 0x100e6db0
 * callees: 0x1017a610
 */

int __thiscall MaterialManager::GetType(_DWORD *this, int a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v10; // edi
  int i; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // eax

  sub_1017A610(&a3);
  std::string::string(a2, &unk_101C6EF3);
  v10 = 0;
  for ( i = 0; ; i += 28 )
  {
    v12 = this[11];
    if ( !v12 || v10 >= (this[12] - v12) / 28 )
      break;
    v13 = this[11];
    if ( !v13 || v10 >= (this[12] - v13) / 28 )
      invalid_parameter_noinfo();
    if ( std::string::find(&a3, i + this[11], 0) != -1 )
    {
      v14 = this[11];
      if ( !v14 || v10 >= (this[12] - v14) / 28 )
        invalid_parameter_noinfo();
      std::string::operator=(a2, i + this[11]);
    }
    ++v10;
  }
  std::string::~string(&a3);
  return a2;
}
