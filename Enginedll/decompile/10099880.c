/*
 * func-name: sub_10099880
 * func-address: 0x10099880
 * callers: 0x10097220, 0x10097ea0
 * callees: 0x10051d20, 0x1017a1a0
 */

int __thiscall sub_10099880(_DWORD *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int v4; // ebp
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  char v9; // bl
  int v11; // eax
  int i; // [esp+0h] [ebp-2Ch]
  _BYTE v13[28]; // [esp+4h] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v14; // [esp+20h] [ebp-Ch]
  void *v15; // [esp+24h] [ebp-8h]
  int v16; // [esp+28h] [ebp-4h]

  v16 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v15 = &loc_101AC209;
  v14 = ExceptionList;
  v4 = 0;
  if ( !sub_10051D20(this) )
    return 0;
  for ( i = 0; ; i += 104 )
  {
    v5 = this[1];
    if ( !v5 || v4 >= (this[2] - v5) / 104 )
      invalid_parameter_noinfo();
    v6 = i + this[1];
    v7 = std::string::length(this + 19);
    v8 = std::string::substr(v6 + 44, v13, v7 + 1, std::string::npos);
    v16 = 0;
    v9 = sub_1017A1A0(v8, a2);
    v16 = -1;
    std::string::~string(v13);
    if ( v9 )
      break;
    if ( ++v4 >= sub_10051D20(this) )
      return 0;
  }
  v11 = this[1];
  if ( !v11 || v4 >= (this[2] - v11) / 104 )
    invalid_parameter_noinfo();
  return this[1] + 104 * v4;
}
