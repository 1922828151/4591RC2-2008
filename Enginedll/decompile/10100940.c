/*
 * func-name: sub_10100940
 * func-address: 0x10100940
 * callers: 0x100fb120
 * callees: 0x1000e7f0, 0x100f9000, 0x100fe1f0, 0x101004c0, 0x101a2500
 */

int *__thiscall sub_10100940(_DWORD *this, float *a2)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v3; // esi
  int *v4; // edi
  float v5; // edx
  float v6; // eax
  int *v7; // eax
  int v9; // [esp+0h] [ebp-40h] BYREF
  _BYTE v10[4]; // [esp+8h] [ebp-38h] BYREF
  void *v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+10h] [ebp-30h]
  int v13; // [esp+14h] [ebp-2Ch]
  float v14[3]; // [esp+18h] [ebp-28h] BYREF
  int v15; // [esp+24h] [ebp-1Ch] BYREF
  void *v16; // [esp+28h] [ebp-18h]
  int v17; // [esp+2Ch] [ebp-14h]
  int v18; // [esp+30h] [ebp-10h]
  struct _EXCEPTION_REGISTRATION_RECORD *v19; // [esp+34h] [ebp-Ch]
  void *v20; // [esp+38h] [ebp-8h]
  int v21; // [esp+3Ch] [ebp-4h]

  v21 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v20 = &loc_101B02F0;
  v19 = ExceptionList;
  v3 = (int)this;
  v4 = sub_100FE1F0(this, a2);
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == *(int **)(v3 + 4) || sub_100F9000(a2, (float *)v4 + 3) )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v5 = a2[1];
    v6 = a2[2];
    v14[0] = *a2;
    v21 = 0;
    v14[1] = v5;
    v14[2] = v6;
    sub_1000E7F0(&v15, (int)v10);
    LOBYTE(v21) = 1;
    v7 = sub_101004C0(v3, &v9, v3, (int)v4, v14);
    v3 = *v7;
    v4 = (int *)v7[1];
    if ( v16 )
      operator delete(v16);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    if ( v11 )
      operator delete(v11);
    v11 = 0;
    v12 = 0;
    v13 = 0;
  }
  if ( !v3 )
    invalid_parameter_noinfo();
  if ( v4 == *(int **)(v3 + 4) )
    invalid_parameter_noinfo();
  return v4 + 6;
}
