/*
 * func-name: sub_100281D0
 * func-address: 0x100281d0
 * callers: 0x10027b30
 * callees: none
 */

_DWORD *__usercall sub_100281D0@<eax>(_DWORD *result@<eax>, int a2@<ecx>, int a3)
{
  int v3; // edi
  _DWORD *v4; // esi
  int v5; // eax
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx

  v3 = a2;
  v4 = result;
  if ( a3 != a2 )
  {
    do
    {
      v5 = *(_DWORD *)(v3 - 12);
      v3 -= 12;
      v4 -= 3;
      *v4 = v5;
      v6 = (Outpop::Utility::Ref_Object *)v4[1];
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
      v7 = *(Outpop::Utility::Ref_Object **)(v3 + 4);
      v4[1] = v7;
      if ( v7 )
        Outpop::Utility::Ref_Object::addref(v7);
      v8 = (Outpop::Utility::Ref_Object *)v4[2];
      if ( v8 )
        Outpop::Utility::Ref_Object::release(v8);
      v9 = *(Outpop::Utility::Ref_Object **)(v3 + 8);
      v4[2] = v9;
      if ( v9 )
        Outpop::Utility::Ref_Object::addref(v9);
    }
    while ( v3 != a3 );
    return v4;
  }
  return result;
}
