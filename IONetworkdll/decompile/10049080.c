/*
 * func-name: sub_10049080
 * func-address: 0x10049080
 * callers: 0x10046710
 * callees: 0x1003bdc0, 0x1004e870
 */

int __usercall sub_10049080@<eax>(_DWORD *a1@<ebx>)
{
  _DWORD **v1; // ecx
  _DWORD *v2; // eax
  bool v3; // zf
  _DWORD *v4; // edi
  int result; // eax
  int v6[2]; // [esp+8h] [ebp-8h] BYREF

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
  sub_1003BDC0(v6, a1 + 4);
  result = 1;
  a1[8] = 1;
  a1[9] = 1;
  return result;
}
