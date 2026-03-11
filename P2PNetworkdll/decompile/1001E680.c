/*
 * func-name: sub_1001E680
 * func-address: 0x1001e680
 * callers: 0x1001e800
 * callees: none
 */

BOOL __cdecl sub_1001E680(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // zf

  v2 = (*(int (__cdecl **)(_DWORD, int))(a1 + 364))(*(_DWORD *)(a1 + 368), a2);
  if ( (v2 & 0xFFFF0000) != 0 )
    return 1;
  v3 = v2 >> 8;
  if ( v2 >> 8 > 223 )
  {
    if ( v3 == 255 )
    {
      if ( v2 == 65534 )
        return 1;
      v4 = v2 == 0xFFFF;
      goto LABEL_9;
    }
  }
  else
  {
    if ( v3 >= 216 )
      return 1;
    if ( !v3 )
    {
      v4 = byte_10028950[v2] == 0;
LABEL_9:
      if ( v4 )
        return 1;
    }
  }
  return v2 < 0;
}
