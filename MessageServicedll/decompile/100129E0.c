/*
 * func-name: sub_100129E0
 * func-address: 0x100129e0
 * callers: 0x1000cb90, 0x1000cc20, 0x1000ccb0, 0x10011fa0, 0x10012060, 0x10015210, 0x10015310
 * callees: 0x10012a40
 */

int __usercall sub_100129E0@<eax>(_DWORD *a1@<ebx>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  _DWORD *v4; // eax
  int result; // eax
  void *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v2 = a2[1];
  if ( v2 )
    v3 = (int)(a2[2] - v2) >> 2;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a2[3] - v2) >> 2 )
  {
    v4 = (_DWORD *)a2[2];
    *v4 = *a1;
    result = (int)(v4 + 1);
    a2[2] = result;
  }
  else
  {
    v6 = (void *)a2[2];
    if ( v2 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    return sub_10012A40((int)&v7, (int)a1, (int)a2, v6);
  }
  return result;
}
