/*
 * func-name: sub_10015CD0
 * func-address: 0x10015cd0
 * callers: 0x10015230
 * callees: 0x10015f60, 0x10016550
 */

int __userpurge sub_10015CD0@<eax>(_DWORD *a1@<esi>, int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // edi
  int result; // eax
  unsigned int v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v2 = a1[1];
  if ( v2 )
    v3 = (int)(a1[2] - v2) / 108;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a1[3] - v2) / 108 )
  {
    v4 = a1[2];
    LOBYTE(v7) = 0;
    result = sub_10016550(v4, 1);
    a1[2] = v4 + 108;
  }
  else
  {
    v6 = a1[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_10015F60(&v7, a2, a1, v6);
  }
  return result;
}
