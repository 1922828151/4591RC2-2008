/*
 * func-name: sub_10076E10
 * func-address: 0x10076e10
 * callers: 0x10009d9f
 * callees: 0x102c9d50
 */

void __thiscall sub_10076E10(_DWORD *this)
{
  _DWORD **v2; // eax
  _DWORD *v3; // esi
  bool v4; // zf
  Outpop::Utility::Ref_Object *v5; // ecx
  _DWORD *v6; // ebx

  v2 = (_DWORD **)this[1];
  v3 = *v2;
  *v2 = v2;
  *(_DWORD *)(this[1] + 4) = this[1];
  v4 = v3 == (_DWORD *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (Outpop::Utility::Ref_Object *)v3[3];
      v6 = (_DWORD *)*v3;
      if ( v5 )
        Outpop::Utility::Ref_Object::release(v5);
      operator delete(v3);
      v3 = v6;
    }
    while ( v6 != (_DWORD *)this[1] );
  }
}
