/*
 * func-name: sub_10028170
 * func-address: 0x10028170
 * callers: 0x10027a50
 * callees: none
 */

_DWORD *__usercall sub_10028170@<eax>(_DWORD *result@<eax>, _DWORD *a2@<ecx>, _DWORD *a3@<ebx>)
{
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx

  v3 = a2;
  v4 = result;
  if ( a2 != a3 )
  {
    do
    {
      *v4 = *v3;
      v5 = (Outpop::Utility::Ref_Object *)v4[1];
      if ( v5 )
        Outpop::Utility::Ref_Object::release(v5);
      v6 = (Outpop::Utility::Ref_Object *)v3[1];
      v4[1] = v6;
      if ( v6 )
        Outpop::Utility::Ref_Object::addref(v6);
      v7 = (Outpop::Utility::Ref_Object *)v4[2];
      if ( v7 )
        Outpop::Utility::Ref_Object::release(v7);
      v8 = (Outpop::Utility::Ref_Object *)v3[2];
      v4[2] = v8;
      if ( v8 )
        Outpop::Utility::Ref_Object::addref(v8);
      v3 += 3;
      v4 += 3;
    }
    while ( v3 != a3 );
    return v4;
  }
  return result;
}
