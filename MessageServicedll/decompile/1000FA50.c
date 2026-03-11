/*
 * func-name: sub_1000FA50
 * func-address: 0x1000fa50
 * callers: 0x1000cb50, 0x1000d4f0, 0x1000ed70
 * callees: 0x1000fb40, 0x10010100
 */

int __userpurge sub_1000FA50@<eax>(_DWORD *a1@<esi>, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int v4; // edi
  int result; // eax
  unsigned int v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v2 = a1[1];
  if ( v2 )
    v3 = (int)(a1[2] - v2) / 116;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a1[3] - v2) / 116 )
  {
    v4 = a1[2];
    LOBYTE(v7) = 0;
    result = sub_10010100(v4, 1);
    a1[2] = v4 + 116;
  }
  else
  {
    v6 = a1[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_1000FB40(&v7, a2, a1, v6);
  }
  return result;
}
