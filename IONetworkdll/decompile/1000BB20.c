/*
 * func-name: sub_1000BB20
 * func-address: 0x1000bb20
 * callers: 0x1000be70
 * callees: none
 */

void __usercall sub_1000BB20(_DWORD *a1@<esi>)
{
  int v1; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  Outpop::Utility::Ref_Object *v5; // ecx

  v1 = a1[4];
  if ( v1 )
  {
    v2 = a1[2];
    v3 = v1 + a1[3] - 1;
    v4 = v3 >> 2;
    if ( v2 <= v3 >> 2 )
      v4 -= v2;
    v5 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(a1[1] + 4 * v4) + 4 * (v3 & 3));
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
    if ( a1[4]-- == 1 )
      a1[3] = 0;
  }
}
