/*
 * func-name: sub_10099690
 * func-address: 0x10099690
 * callers: 0x10097220, 0x10099690
 * callees: 0x10051d20, 0x1007bd80, 0x10099690
 */

char __thiscall sub_10099690(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  unsigned int i; // edi
  int v8; // eax
  char v9; // [esp-1Ch] [ebp-70h] BYREF
  _BYTE v10[28]; // [esp+10h] [ebp-44h] BYREF
  _BYTE v11[28]; // [esp+2Ch] [ebp-28h] BYREF
  int v12; // [esp+50h] [ebp-4h]

  v3 = std::operator+<char>(v11, this + 11, "\\");
  v4 = 0;
  v12 = 0;
  std::operator+<char>(v10, v3, a2);
  LOBYTE(v12) = 2;
  std::string::~string(v11);
  v5 = std::string::c_str(v10);
  std::string::string(&v9, v5);
  if ( sub_1007BD80(v9) )
  {
    std::string::operator=(a2, v10);
LABEL_3:
    v12 = -1;
    std::string::~string(v10);
    return 1;
  }
  for ( i = 0; i < sub_10051D20(this); v4 += 104 )
  {
    v8 = this[1];
    if ( !v8 || i >= (this[2] - v8) / 104 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)sub_10099690(a2) )
      goto LABEL_3;
    ++i;
  }
  v12 = -1;
  std::string::~string(v10);
  return 0;
}
