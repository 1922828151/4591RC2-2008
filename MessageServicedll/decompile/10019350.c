/*
 * func-name: sub_10019350
 * func-address: 0x10019350
 * callers: 0x10018e70
 * callees: 0x10019440, 0x100294f2
 */

int __usercall sub_10019350@<eax>(_DWORD *a1@<ebx>)
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
  sub_10019440(a1 + 4);
  result = 1;
  a1[8] = 1;
  a1[9] = 1;
  return result;
}
