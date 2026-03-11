/*
 * func-name: sub_101326D0
 * func-address: 0x101326d0
 * callers: 0x1012f070, 0x1012f380
 * callees: 0x10131ae0, 0x101322b0
 */

int *__thiscall sub_101326D0(_DWORD *this, int a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v3; // esi
  int *v4; // edi
  int *v5; // eax
  _DWORD v7[5]; // [esp+0h] [ebp-48h] BYREF
  _DWORD v8[12]; // [esp+14h] [ebp-34h] BYREF
  int v9; // [esp+44h] [ebp-4h]

  v9 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v8[11] = &loc_101B3128;
  v8[10] = ExceptionList;
  v3 = (int)this;
  v4 = sub_10131AE0(this, a2);
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == *(int **)(v3 + 4) || (unsigned __int8)std::operator<<char>(a2, v4 + 3) )
  {
    *(float *)&v7[2] = 0.0;
    *(float *)&v7[3] = 0.0;
    *(float *)&v7[4] = 0.0;
    std::string::string(v8, a2);
    *(float *)&v8[7] = 0.0;
    *(float *)&v8[8] = 0.0;
    *(float *)&v8[9] = 0.0;
    v9 = 0;
    v5 = sub_101322B0(v3, v7, v3, v4, v8);
    v3 = *v5;
    v4 = (int *)v5[1];
    v9 = -1;
    std::string::~string(v8);
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == *(int **)(v3 + 4) )
    invalid_parameter_noinfo();
  return v4 + 10;
}
