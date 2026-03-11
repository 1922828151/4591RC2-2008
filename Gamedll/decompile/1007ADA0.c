/*
 * func-name: ??4GroupManager@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1007ada0
 * callers: 0x100110a4
 * callees: 0x1000362a, 0x1000634d, 0x10006a0a, 0x10009610, 0x1000b5e6, 0x1000e205, 0x10010e92, 0x10011699
 */

int __thiscall GameClient::GroupManager::operator=(int this, _DWORD *a2)
{
  _BYTE v4[8]; // [esp+8h] [ebp-8h] BYREF

  if ( (_DWORD *)(this + 4) != a2 + 1 )
    sub_10009610((int)(a2 + 1));
  if ( (_DWORD *)(this + 44) != a2 + 11 )
    sub_1000634D((int)(a2 + 11));
  if ( (_DWORD *)(this + 84) != a2 + 21 )
    sub_10010E92((int)(a2 + 21));
  if ( (_DWORD *)(this + 124) != a2 + 31 )
    sub_1000E205((int)(a2 + 31));
  sub_10006A0A((int)(a2 + 41));
  *(_DWORD *)(this + 180) = a2[45];
  *(_DWORD *)(this + 184) = a2[46];
  *(_DWORD *)(this + 188) = a2[47];
  *(_DWORD *)(this + 192) = a2[48];
  std::string::operator=(this + 196, a2 + 49);
  if ( (_DWORD *)(this + 224) != a2 + 56 )
  {
    sub_10011699((int)v4, this + 224, **(_DWORD **)(this + 228), this + 224, *(_DWORD *)(this + 228));
    sub_1000362A((int)(a2 + 56));
  }
  if ( (_DWORD *)(this + 236) != a2 + 59 )
    sub_1000B5E6((int)(a2 + 59));
  return this;
}
