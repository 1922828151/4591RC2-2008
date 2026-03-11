/*
 * func-name: sub_100418D6
 * func-address: 0x100418d6
 * callers: 0x10037742
 * callees: 0x10034ca4, 0x100375b9, 0x100459b6, 0x1004643a
 */

int __cdecl sub_100418D6(int a1, int a2, struct localeinfo_struct *a3)
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
  v3 = sub_100459B6(v11, a1);
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
