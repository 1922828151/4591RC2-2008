/*
 * func-name: sub_102BD940
 * func-address: 0x102bd940
 * callers: 0x102bdb40, 0x102bdcd0, 0x102bde10, 0x102bdf50, 0x102be010
 * callees: 0x10011b7b, 0x102c7520
 */

void *__thiscall sub_102BD940(
        _DWORD *this,
        void *a2,
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
  void *v16; // ebx
  int v17; // ebp
  unsigned int v19; // edi
  int v20; // eax
  int v21; // eax
  void (**v22)(int, const char *, ...); // edi
  int v23; // eax
  int v25; // eax
  int v26; // [esp-4h] [ebp-2Ch]

  v16 = a2;
  v17 = 0;
  sub_102C7520(&a3);
  v19 = 0;
  if ( sub_10011B7B() )
  {
    while ( 1 )
    {
      v20 = this[1];
      if ( !v20 || v19 >= (this[2] - v20) / 28 )
        _invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a3, v17 + this[1]) )
      {
        if ( !std::string::length(&a10) )
          break;
        v21 = this[9];
        if ( !v21 || v19 >= (this[10] - v21) / 28 )
          _invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(&a10, v17 + this[9]) )
          break;
      }
      ++v19;
      v17 += 28;
      if ( v19 >= sub_10011B7B() )
      {
        v16 = a2;
        goto LABEL_13;
      }
    }
    v25 = this[5];
    if ( !v25 || v19 >= (this[6] - v25) / 28 )
      _invalid_parameter_noinfo();
    std::string::string(a2, (void *)(this[5] + 28 * v19));
    std::string::~string(&a3);
    std::string::~string(&a10);
    return a2;
  }
  else
  {
LABEL_13:
    v22 = (void (**)(int, const char *, ...))(*(_DWORD *)dword_103B9580 + 4);
    v26 = std::string::c_str(this + 16);
    v23 = std::string::c_str(&a3);
    (*v22)(
      dword_103B9580,
      "ConfigFile::Get failed. Key '%s' was not found in file '%s'\nNote: Case is irrelevant.",
      v23,
      v26);
    std::string::string(v16, &unk_103254D6);
    std::string::~string(&a3);
    std::string::~string(&a10);
    return v16;
  }
}
