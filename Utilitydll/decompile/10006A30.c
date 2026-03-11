/*
 * func-name: sub_10006A30
 * func-address: 0x10006a30
 * callers: 0x100059a0, 0x10005a90
 * callees: 0x10018e1c, 0x10018e28, 0x10018e2d
 */

void __usercall sub_10006A30(_DWORD *a1@<edi>)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // esi
  unsigned int i; // edx
  _DWORD *v6; // eax

  v1 = operator new(a1[1] * *a1, (const struct std::nothrow_t *)&unk_10030D40);
  if ( v1 )
  {
    v2 = operator new(8u, (const struct std::nothrow_t *)&unk_10030D40);
    if ( v2 )
    {
      *v2 = 0;
      v2[1] = 0;
    }
    else
    {
      v2 = 0;
    }
    if ( v2 )
    {
      v2[1] = a1[10];
      a1[10] = v2;
      *v1 = 0;
      *v1 = 0;
      v3 = v1;
      v4 = (_DWORD *)((char *)v1 + *a1);
      for ( i = 1; i < a1[1]; v3 = v6 )
      {
        v6 = v4;
        v4 = (_DWORD *)((char *)v4 + *a1);
        *v6 = v3;
        ++i;
      }
      a1[2] = v3;
    }
    else
    {
      operator delete[](v1);
    }
  }
}
