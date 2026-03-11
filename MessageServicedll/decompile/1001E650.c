/*
 * func-name: sub_1001E650
 * func-address: 0x1001e650
 * callers: 0x1001e380
 * callees: none
 */

_DWORD *__usercall sub_1001E650@<eax>(_DWORD *result@<eax>, int a2@<ecx>, int a3@<ebx>)
{
  int v3; // edi
  _DWORD *v4; // esi
  int v5; // eax
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx

  v3 = a2;
  v4 = result;
  if ( a3 != a2 )
  {
    do
    {
      v5 = *(_DWORD *)(v3 - 8);
      v3 -= 8;
      v4 -= 2;
      *v4 = v5;
      v6 = (Outpop::Utility::Ref_Object *)v4[1];
      if ( v6 )
        Outpop::Utility::Ref_Object::release(v6);
      v7 = *(Outpop::Utility::Ref_Object **)(v3 + 4);
      v4[1] = v7;
      if ( v7 )
        Outpop::Utility::Ref_Object::addref(v7);
    }
    while ( v3 != a3 );
    return v4;
  }
  return result;
}
