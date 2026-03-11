/*
 * func-name: sub_10020D60
 * func-address: 0x10020d60
 * callers: 0x10020c10, 0x10020e70
 * callees: 0x1001e800, 0x100234ec
 */

int __usercall sub_10020D60@<eax>(_DWORD *a1@<esi>, int a2)
{
  int (__cdecl *v2)(int, int, _BYTE *); // edx
  _DWORD *v3; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  void (__cdecl *v7)(int); // edx
  int v8; // [esp-Ch] [ebp-424h]
  _BYTE v9[1024]; // [esp+8h] [ebp-410h] BYREF
  int v10; // [esp+408h] [ebp-10h]
  int v11; // [esp+40Ch] [ebp-Ch]
  void (__cdecl *v12)(int); // [esp+410h] [ebp-8h]

  v2 = (int (__cdecl *)(int, int, _BYTE *))a1[29];
  if ( !v2 )
    return 18;
  memset(v9, 0xFFu, sizeof(v9));
  v8 = a1[55];
  v11 = 0;
  v10 = 0;
  v12 = 0;
  if ( !v2(v8, a2, v9) )
  {
LABEL_9:
    if ( v12 )
      v12(v10);
    return 18;
  }
  v3 = malloc(0x774u);
  a1[53] = v3;
  if ( v3 )
  {
    v5 = sub_1001E800(v3, (int)v9, v11, v10);
    if ( v5 )
    {
      v6 = v10;
      v7 = v12;
      a1[30] = v5;
      a1[54] = v6;
      a1[56] = v7;
      return 0;
    }
    goto LABEL_9;
  }
  if ( v12 )
    v12(v10);
  return 1;
}
