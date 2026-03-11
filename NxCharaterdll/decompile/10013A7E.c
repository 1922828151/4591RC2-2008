/*
 * func-name: sub_10013A7E
 * func-address: 0x10013a7e
 * callers: 0x1000b6dd
 * callees: 0x1000a47c, 0x1000b554, 0x10017c08, 0x1001814a
 */

int __cdecl sub_10013A7E(int a1, int a2, struct localeinfo_struct *a3)
{
  int v3; // eax
  _BYTE v6[4]; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+18h] [ebp-1Ch]
  char v9; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+20h] [ebp-14h]
  _BYTE v11[12]; // [esp+24h] [ebp-10h] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a3);
  v10 = __strgtold12_l(v11, v6, a2, 0, 0, 0, 0, v7);
  v3 = sub_10017C08(v11, a1);
  if ( (v10 & 3) != 0 )
  {
    if ( (v10 & 1) != 0 )
      goto LABEL_8;
    if ( (v10 & 2) != 0 )
      goto LABEL_3;
  }
  else
  {
    if ( v3 == 1 )
    {
LABEL_3:
      if ( v9 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 3;
    }
    if ( v3 == 2 )
    {
LABEL_8:
      if ( v9 )
        *(_DWORD *)(v8 + 112) &= ~2u;
      return 4;
    }
  }
  if ( v9 )
    *(_DWORD *)(v8 + 112) &= ~2u;
  return 0;
}
