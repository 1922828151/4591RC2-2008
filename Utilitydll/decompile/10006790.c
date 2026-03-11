/*
 * func-name: sub_10006790
 * func-address: 0x10006790
 * callers: 0x10005380, 0x10005480
 * callees: 0x10007570
 */

int __usercall sub_10006790@<eax>(_DWORD *a1@<ebx>, _DWORD *a2@<esi>)
{
  unsigned int v2; // ecx
  unsigned int v3; // edx
  _DWORD *v4; // eax
  int result; // eax
  void *v6; // edi
  int v7[3]; // [esp+8h] [ebp-Ch] BYREF

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
    return sub_10007570((int)v7, (int)a1, (int)a2, v6);
  }
  return result;
}
