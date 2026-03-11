/*
 * func-name: ?GetSound@MaterialIntersect@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@0@Z
 * func-address: 0x10159690
 * callers: 0x101599b0
 * callees: none
 */

int __thiscall MaterialIntersect::GetSound(
        _DWORD *this,
        int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  int v16; // ebp
  unsigned int i; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax

  v16 = 0;
  std::string::string(a2, &unk_101CD6AA);
  for ( i = 0; ; ++i )
  {
    v19 = this[5];
    if ( !v19 || i >= (this[6] - v19) / 84 )
      break;
    v20 = this[5];
    if ( !v20 || i >= (this[6] - v20) / 84 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(&a3, v16 + this[5]) )
    {
      v21 = this[5];
      if ( !v21 || i >= (this[6] - v21) / 84 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(v16 + this[5] + 28, "default") )
      {
        v22 = this[5];
        if ( !v22 || i >= (this[6] - v22) / 84 )
          invalid_parameter_noinfo();
        std::string::operator=(a2, this[5] + v16 + 56);
      }
      if ( (unsigned __int8)std::operator==<char>(&a10, &unk_101CD6AB) )
        goto LABEL_22;
      v23 = this[5];
      if ( !v23 || i >= (this[6] - v23) / 84 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a10, v16 + this[5] + 28) )
      {
LABEL_22:
        v24 = this[5];
        if ( !v24 || i >= (this[6] - v24) / 84 )
          invalid_parameter_noinfo();
        std::string::operator=(a2, 84 * i + this[5] + 56);
        break;
      }
    }
    v16 += 84;
  }
  std::string::~string(&a3);
  std::string::~string(&a10);
  return a2;
}
