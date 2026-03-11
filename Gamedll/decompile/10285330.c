/*
 * func-name: ?SetCurItem@CRobotRoofUI@@AAEXXZ_0
 * func-address: 0x10285330
 * callers: 0x10017eea
 * callees: 0x10007806, 0x10008f26, 0x1000aff6, 0x10010389, 0x1001241d, 0x10012c29, 0x10016009, 0x100160e0, 0x1001aae1
 */

void __thiscall CRobotRoofUI::SetCurItem(CRobotRoofUI *this)
{
  GameClient::FlyweightManager *v2; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  GameClient::ProductManager *v4; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  struct GameClient::FProductInfo *v8; // [esp-Ch] [ebp-10h]
  unsigned int v9; // [esp-Ch] [ebp-10h]
  unsigned int v10; // [esp-Ch] [ebp-10h]
  unsigned int v11; // [esp-4h] [ebp-8h]
  unsigned int v12; // [esp-4h] [ebp-8h]

  if ( *((_DWORD *)this + 1007) != -1 )
  {
    v11 = *((_DWORD *)this + 1007);
    v2 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v2, v11);
    if ( Flyweight )
    {
      v12 = *((_DWORD *)Flyweight + 27);
      v4 = GameClient::ProductManager::Instance();
      ProductInfo = GameClient::ProductManager::GetProductInfo(v4, v12);
      if ( ProductInfo )
      {
        switch ( *((_DWORD *)ProductInfo + 28) )
        {
          case 1:
            v8 = (struct GameClient::FProductInfo *)*((_DWORD *)this + 1007);
            *((_BYTE *)this + 4018) = 1;
            CRobotRoofUI::SetBody(this, v8, ProductInfo);
            break;
          case 2:
            v9 = *((_DWORD *)this + 1007);
            *((_BYTE *)this + 4018) = 1;
            CRobotRoofUI::SetArmor(this, v9, ProductInfo);
            break;
          case 4:
            v10 = *((_DWORD *)this + 1007);
            *((_BYTE *)this + 4018) = 1;
            CRobotRoofUI::SetEnergy(this, v10, ProductInfo);
            break;
          case 8:
            CRobotRoofUI::SetWeapon(this, *((_DWORD *)this + 1003), *((_DWORD *)this + 1007));
            break;
          case 0x10:
            CRobotRoofUI::SetSubWeapon(this, *((_DWORD *)this + 1003), *((_DWORD *)this + 1007));
            break;
          default:
            break;
        }
        *((_BYTE *)this + 4017) = 1;
        v6 = 0;
        v7 = (_DWORD *)((char *)this + 3916);
        do
        {
          if ( *v7 == -1 )
            break;
          ++v6;
          ++v7;
        }
        while ( v6 < 3 );
      }
    }
  }
}
