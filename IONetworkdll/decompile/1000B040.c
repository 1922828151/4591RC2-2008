/*
 * func-name: sub_1000B040
 * func-address: 0x1000b040
 * callers: 0x1000be70, 0x10033cf0, 0x10047c70
 * callees: none
 */

unsigned int __usercall sub_1000B040@<eax>(_DWORD *a1@<esi>)
{
  Outpop::Utility::Ref_Object *v1; // ecx
  int v2; // edx
  unsigned int result; // eax

  if ( a1[4] )
  {
    v1 = *(Outpop::Utility::Ref_Object **)(*(_DWORD *)(a1[1] + 4 * (a1[3] >> 2)) + 4 * (a1[3] & 3));
    if ( v1 )
      Outpop::Utility::Ref_Object::release(v1);
    v2 = a1[2];
    result = ++a1[3];
    if ( 4 * v2 <= result )
      a1[3] = 0;
    if ( a1[4]-- == 1 )
      a1[3] = 0;
  }
  return result;
}
