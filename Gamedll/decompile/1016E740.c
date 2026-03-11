/*
 * func-name: ?RegisterProductInfoFlyweight@ProductManager@GameClient@@QAEXPAVFProductInfo@2@@Z_0
 * func-address: 0x1016e740
 * callers: 0x1000ca4f
 * callees: 0x1001213e, 0x1001a3ca
 */

void __thiscall GameClient::ProductManager::RegisterProductInfoFlyweight(
        GameClient::ProductManager *this,
        struct GameClient::FProductInfo *a2)
{
  struct GameClient::FProductInfo *v2; // ebx
  char *v4; // eax
  struct GameClient::FProductInfo *v5; // esi
  char *v6; // [esp+Ch] [ebp-14h] BYREF
  struct GameClient::FProductInfo *v7; // [esp+10h] [ebp-10h]
  char v8[12]; // [esp+14h] [ebp-Ch] BYREF

  v2 = a2;
  a2 = (struct GameClient::FProductInfo *)*((_DWORD *)a2 + 27);
  sub_1001A3CA((int)&v6, (int)&a2);
  v4 = (char *)this + 8;
  v5 = (struct GameClient::FProductInfo *)*((_DWORD *)this + 3);
  if ( !v6 || v6 != v4 )
    _invalid_parameter_noinfo();
  if ( v7 == v5 )
  {
    v6 = (char *)*((_DWORD *)v2 + 27);
    v7 = v2;
    sub_1001213E((int)v8, (int)&v6);
  }
}
