/*
 * func-name: sub_10023360
 * func-address: 0x10023360
 * callers: 0x10021c40
 * callees: none
 */

_DWORD *__usercall sub_10023360@<eax>(_DWORD *result@<eax>, _DWORD *a2@<ecx>, _DWORD *a3@<ebx>)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx

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
      v3 += 2;
      v4 += 2;
    }
    while ( v3 != a3 );
    return v4;
  }
  return result;
}
