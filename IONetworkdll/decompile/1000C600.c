/*
 * func-name: sub_1000C600
 * func-address: 0x1000c600
 * callers: 0x1000c2d0
 * callees: none
 */

_DWORD *__cdecl sub_1000C600(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned int a10)
{
  _DWORD *v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // esi
  int v14; // edi
  unsigned int v15; // eax
  int v16; // edx
  unsigned int v17; // esi
  int v18; // edi
  unsigned int v19; // eax
  int v20; // edx
  Outpop::Utility::Ref_Object *v21; // ecx
  Outpop::Utility::Ref_Object **v22; // esi
  Outpop::Utility::Ref_Object *v23; // ecx
  bool v24; // zf
  _DWORD *result; // eax
  Outpop::Utility::Ref_Object **v26; // [esp+30h] [ebp+20h]

  while ( a4 != a7 )
  {
    v11 = a6;
    v12 = a7 - 1;
    v13 = (a7 - 1) >> 2;
    v14 = ((_BYTE)a7-- - 1) & 3;
    if ( !a6 )
    {
      invalid_parameter_noinfo();
      v11 = 0;
      v12 = a7;
    }
    if ( v12 >= v11[3] + v11[4] )
    {
      invalid_parameter_noinfo();
      v11 = a6;
    }
    v15 = v11[2];
    if ( v15 <= v13 )
      v13 -= v15;
    --a10;
    v16 = *(_DWORD *)(v11[1] + 4 * v13) + 4 * v14;
    v17 = a10 >> 2;
    v18 = a10 & 3;
    v26 = (Outpop::Utility::Ref_Object **)v16;
    if ( !a9 )
      invalid_parameter_noinfo();
    if ( a10 >= a9[3] + a9[4] )
      invalid_parameter_noinfo();
    v19 = a9[2];
    if ( v19 <= v17 )
      v17 -= v19;
    v20 = *(_DWORD *)(a9[1] + 4 * v17);
    v21 = *(Outpop::Utility::Ref_Object **)(v20 + 4 * v18);
    v22 = (Outpop::Utility::Ref_Object **)(v20 + 4 * v18);
    if ( v21 )
      Outpop::Utility::Ref_Object::release(v21);
    v23 = *v26;
    v24 = *v26 == 0;
    *v22 = *v26;
    if ( !v24 )
      Outpop::Utility::Ref_Object::addref(v23);
  }
  result = a1;
  a1[1] = a9;
  a1[2] = a10;
  *a1 = 0;
  return result;
}
