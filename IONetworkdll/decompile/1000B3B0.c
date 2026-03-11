/*
 * func-name: sub_1000B3B0
 * func-address: 0x1000b3b0
 * callers: 0x1000a280, 0x1000ada0, 0x1000b110
 * callees: 0x1000bd90, 0x1000be00
 */

_DWORD *__userpurge sub_1000B3B0@<eax>(
        _DWORD *a1@<esi>,
        _DWORD *a2,
        int a3,
        _DWORD *a4,
        int a5,
        char a6,
        _DWORD *a7,
        int a8)
{
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  int v12; // edi
  Outpop::Utility::Ref_Object *v13; // ecx
  int v14; // ecx
  bool v15; // zf
  unsigned int v16; // edi
  unsigned int v17; // eax
  int v18; // edi
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  Outpop::Utility::Ref_Object *v23; // ecx
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // edi
  _DWORD *result; // eax
  int v28; // [esp+Ch] [ebp-8h]
  unsigned int v29; // [esp+10h] [ebp-4h]

  v8 = a1[3];
  if ( v8 > v8 + a1[4] )
    invalid_parameter_noinfo();
  if ( !a4 || a4 != a1 )
    invalid_parameter_noinfo();
  v29 = a5 - v8;
  if ( !a7 || a7 != a4 )
    invalid_parameter_noinfo();
  v28 = a8 - a5;
  v9 = a1[3];
  v10 = v9 + a1[4];
  if ( v9 > v10 )
    invalid_parameter_noinfo();
  if ( a1 != a7 )
    invalid_parameter_noinfo();
  if ( v29 >= v10 - a8 )
  {
    v16 = a1[3] + a1[4];
    v17 = a1[3];
    if ( v17 > v16 || v16 > v17 + a1[4] )
      invalid_parameter_noinfo();
    sub_1000BE00(0, a7, a8, 0);
    v18 = a8 - a5;
    if ( v28 )
    {
      do
      {
        v19 = a1[4];
        if ( v19 )
        {
          v20 = a1[2];
          v21 = v19 + a1[3] - 1;
          v22 = v21 >> 2;
          if ( v20 <= v21 >> 2 )
            v22 -= v20;
          v23 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(a1[1] + 4 * v22) + 4 * (v21 & 3));
          if ( v23 )
            Outpop::Utility::Ref_Object::release(v23);
          v15 = a1[4]-- == 1;
          if ( v15 )
            a1[3] = 0;
        }
        --v18;
      }
      while ( v18 );
    }
  }
  else
  {
    v11 = a1[3];
    if ( v11 > v11 + a1[4] )
      invalid_parameter_noinfo();
    sub_1000BD90(0, a1, v11, 0, a4, a5, 0, a7, a8);
    v12 = a8 - a5;
    if ( v28 )
    {
      do
      {
        if ( a1[4] )
        {
          v13 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(a1[1] + 4 * (a1[3] >> 2)) + 4 * (a1[3] & 3));
          if ( v13 )
            Outpop::Utility::Ref_Object::release(v13);
          v14 = a1[2];
          if ( (unsigned int)(4 * v14) <= ++a1[3] )
            a1[3] = 0;
          v15 = a1[4]-- == 1;
          if ( v15 )
            a1[3] = 0;
        }
        --v12;
      }
      while ( v12 );
    }
  }
  v24 = a1[3];
  if ( v24 > v24 + a1[4] )
    invalid_parameter_noinfo();
  v25 = a1[3];
  v26 = v29 + v24;
  if ( v26 > v25 + a1[4] || v26 < v25 )
    invalid_parameter_noinfo();
  result = a2;
  a2[2] = v26;
  *a2 = 0;
  a2[1] = a1;
  return result;
}
