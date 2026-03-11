/*
 * func-name: sub_1001D830
 * func-address: 0x1001d830
 * callers: 0x1001b360, 0x10025c70
 * callees: 0x1001dd70, 0x1001e4a0
 */

int __userpurge sub_1001D830@<eax>(_DWORD *a1@<esi>, int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // edi
  int result; // eax
  unsigned int v6; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF

  v2 = a1[1];
  if ( v2 )
    v3 = (int)(a1[2] - v2) / 12;
  else
    v3 = 0;
  if ( v2 && v3 < (int)(a1[3] - v2) / 12 )
  {
    v4 = a1[2];
    LOBYTE(v7) = 0;
    result = sub_1001E4A0(v4, 1);
    a1[2] = v4 + 12;
  }
  else
  {
    v6 = a1[2];
    if ( v2 > v6 )
      invalid_parameter_noinfo();
    return sub_1001DD70(&v7, a2, a1, v6);
  }
  return result;
}
