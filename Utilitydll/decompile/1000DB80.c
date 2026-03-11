/*
 * func-name: sub_1000DB80
 * func-address: 0x1000db80
 * callers: 0x1000d030, 0x1000dc70
 * callees: 0x1000e010, 0x10018cf2
 */

int __usercall sub_1000DB80@<eax>(_DWORD *a1@<ebx>)
{
  _DWORD **v1; // ecx
  _DWORD *v2; // eax
  bool v3; // zf
  _DWORD *v4; // edi
  int result; // eax

  v1 = (_DWORD **)a1[2];
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(a1[2] + 4) = a1[2];
  v3 = v2 == (_DWORD *)a1[2];
  a1[3] = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != (_DWORD *)a1[2] );
  }
  sub_1000E010(a1 + 4);
  result = 1;
  a1[8] = 1;
  a1[9] = 1;
  return result;
}
