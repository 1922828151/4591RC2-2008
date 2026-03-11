/*
 * func-name: ?GetFX@MaterialIntersect@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@0@Z
 * func-address: 0x10159490
 * callers: 0x101598a0
 * callees: 0x10159280
 */

int __thiscall MaterialIntersect::GetFX(
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
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v16 = 0;
  std::string::string(a2, &unk_101CD686);
  v18 = 0;
  if ( sub_10159280(this) )
  {
    while ( 1 )
    {
      v19 = this[1];
      if ( !v19 || v18 >= (this[2] - v19) / 84 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a3, v16 + this[1]) )
      {
        v20 = this[1];
        if ( !v20 || v18 >= (this[2] - v20) / 84 )
          invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(v16 + this[1] + 28, "default") )
        {
          v21 = this[1];
          if ( !v21 || v18 >= (this[2] - v21) / 84 )
            invalid_parameter_noinfo();
          std::string::operator=(a2, this[1] + v16 + 56);
        }
        if ( (unsigned __int8)std::operator==<char>(&a10, &unk_101CD687) )
          break;
        v22 = this[1];
        if ( !v22 || v18 >= (this[2] - v22) / 84 )
          invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(&a10, v16 + this[1] + 28) )
          break;
      }
      ++v18;
      v16 += 84;
      if ( v18 >= sub_10159280(this) )
        goto LABEL_25;
    }
    v23 = this[1];
    if ( !v23 || v18 >= (this[2] - v23) / 84 )
      invalid_parameter_noinfo();
    std::string::operator=(a2, 84 * v18 + this[1] + 56);
  }
LABEL_25:
  std::string::~string(&a3);
  std::string::~string(&a10);
  return a2;
}
