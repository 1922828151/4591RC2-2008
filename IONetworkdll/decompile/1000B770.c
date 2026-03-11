/*
 * func-name: sub_1000B770
 * func-address: 0x1000b770
 * callers: 0x10009dc0, 0x1000acf0, 0x1000ad90, 0x1000ada0, 0x100230b0, 0x1002cfb0, 0x10046710
 * callees: 0x1004e870
 */

int __usercall sub_1000B770@<eax>(_DWORD *a1@<esi>)
{
  int v1; // eax
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  int v7; // edi
  int v8; // edx
  int result; // eax

  while ( a1[4] )
  {
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
  v7 = a1[2];
  while ( v7 )
  {
    v8 = a1[1];
    --v7;
    if ( *(_DWORD *)(v8 + 4 * v7) )
      operator delete(*(_DWORD *)(v8 + 4 * v7));
  }
  result = a1[1];
  if ( result )
    result = operator delete(a1[1]);
  a1[1] = 0;
  a1[2] = 0;
  return result;
}
