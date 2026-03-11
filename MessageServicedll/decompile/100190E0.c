/*
 * func-name: sub_100190E0
 * func-address: 0x100190e0
 * callers: 0x100183b0
 * callees: 0x10012b60, 0x100294f2
 */

int __usercall sub_100190E0@<eax>(_DWORD *a1@<ebx>)
{
  _DWORD **v1; // ecx
  _DWORD *v2; // eax
  bool v3; // zf
  _DWORD *v4; // edi
  int result; // eax
  int v6[3]; // [esp+8h] [ebp-Ch] BYREF

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
  v6[1] = a1[2];
  v6[0] = (int)(a1 + 1);
  sub_10012B60(v6, (int)(a1 + 4));
  result = 1;
  a1[8] = 1;
  a1[9] = 1;
  return result;
}
