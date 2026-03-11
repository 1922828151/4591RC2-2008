/*
 * func-name: sub_1017BED0
 * func-address: 0x1017bed0
 * callers: 0x1017c0d0, 0x1017c260, 0x1017c3a0, 0x1017c4e0, 0x1017c5a0
 * callees: 0x100993b0, 0x1017a610
 */

int __thiscall sub_1017BED0(
        _DWORD *this,
        int a2,
        int a3,
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
  int v16; // ebx
  int v17; // ebp
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  void (**v22)(void *, const char *, ...); // edi
  int v23; // eax
  int v25; // eax
  int v26; // [esp-4h] [ebp-2Ch]

  v16 = a2;
  v17 = 0;
  sub_1017A610((int)&a3);
  v19 = 0;
  if ( sub_100993B0(this) )
  {
    while ( 1 )
    {
      v20 = this[1];
      if ( !v20 || v19 >= (this[2] - v20) / 28 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a3, v17 + this[1]) )
      {
        if ( !std::string::length(&a10) )
          break;
        v21 = this[9];
        if ( !v21 || v19 >= (this[10] - v21) / 28 )
          invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(&a10, v17 + this[9]) )
          break;
      }
      ++v19;
      v17 += 28;
      if ( v19 >= sub_100993B0(this) )
      {
        v16 = a2;
        goto LABEL_13;
      }
    }
    v25 = this[5];
    if ( !v25 || v19 >= (this[6] - v25) / 28 )
      invalid_parameter_noinfo();
    std::string::string(a2, this[5] + 28 * v19);
    std::string::~string(&a3);
    std::string::~string(&a10);
    return a2;
  }
  else
  {
LABEL_13:
    v22 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v26 = std::string::c_str(this + 16);
    v23 = std::string::c_str(&a3);
    (*v22)(
      dword_11249F38,
      "ConfigFile::Get failed. Key '%s' was not found in file '%s'\nNote: Case is irrelevant.",
      v23,
      v26);
    std::string::string(v16, &unk_101CE856);
    std::string::~string(&a3);
    std::string::~string(&a10);
    return v16;
  }
}
