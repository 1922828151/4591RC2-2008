/*
 * func-name: sub_1000C6F0
 * func-address: 0x1000c6f0
 * callers: 0x1000c390
 * callees: none
 */

_DWORD *__cdecl sub_1000C6F0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        unsigned int a10)
{
  _DWORD *v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // ecx
  int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // eax
  Outpop::Utility::Ref_Object **v17; // esi
  Outpop::Utility::Ref_Object *v18; // ecx
  bool v19; // zf
  _DWORD *result; // eax
  Outpop::Utility::Ref_Object **v21; // [esp+30h] [ebp+20h]

  while ( a4 != a7 )
  {
    v11 = a3;
    v12 = a4 >> 2;
    if ( !a3 )
    {
      invalid_parameter_noinfo();
      v11 = 0;
    }
    if ( a4 >= v11[3] + v11[4] )
    {
      invalid_parameter_noinfo();
      v11 = a3;
    }
    v13 = v11[2];
    if ( v13 <= v12 )
      v12 -= v13;
    v14 = *(_DWORD *)(v11[1] + 4 * v12) + 4 * (a4 & 3);
    v15 = a10 >> 2;
    v21 = (Outpop::Utility::Ref_Object **)v14;
    if ( !a9 )
      invalid_parameter_noinfo();
    if ( a10 >= a9[3] + a9[4] )
      invalid_parameter_noinfo();
    v16 = a9[2];
    if ( v16 <= v15 )
      v15 -= v16;
    v17 = (Outpop::Utility::Ref_Object **)(*(_DWORD *)(a9[1] + 4 * v15) + 4 * (a10 & 3));
    if ( *v17 )
      Outpop::Utility::Ref_Object::release(*v17);
    v18 = *v21;
    v19 = *v21 == 0;
    *v17 = *v21;
    if ( !v19 )
      Outpop::Utility::Ref_Object::addref(v18);
    ++a10;
    ++a4;
  }
  result = a1;
  a1[2] = a10;
  a1[1] = a9;
  *a1 = 0;
  return result;
}
