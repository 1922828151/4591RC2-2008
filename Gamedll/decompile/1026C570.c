/*
 * func-name: ?SetCurItem@CDropBagUI@@IAEXXZ_0
 * func-address: 0x1026c570
 * callers: 0x10019c40
 * callees: 0x10008409, 0x1000aff6, 0x1000bbea, 0x1000e7c3, 0x10010389, 0x1001241d, 0x10012c29, 0x10014efc, 0x10015834
 */

void __thiscall CDropBagUI::SetCurItem(CDropBagUI *this)
{
  GameClient::FlyweightManager *v2; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  GameClient::ProductManager *v4; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  unsigned int v6; // [esp-4h] [ebp-8h]
  unsigned int v7; // [esp-4h] [ebp-8h]

  if ( *((_DWORD *)this + 993) != -1 )
  {
    v6 = *((_DWORD *)this + 993);
    v2 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v2, v6);
    if ( Flyweight )
    {
      v7 = *((_DWORD *)Flyweight + 27);
      v4 = GameClient::ProductManager::Instance();
      ProductInfo = GameClient::ProductManager::GetProductInfo(v4, v7);
      if ( ProductInfo )
      {
        switch ( *((_DWORD *)ProductInfo + 28) )
        {
          case 1:
            CDropBagUI::SetBody(this, *((_DWORD *)this + 993), ProductInfo);
            break;
          case 2:
            CDropBagUI::SetArmor(this, *((_DWORD *)this + 993), ProductInfo);
            break;
          case 4:
            CDropBagUI::SetEnergy(this, *((_DWORD *)this + 993), ProductInfo);
            break;
          case 8:
            CDropBagUI::SetWeapon(this, *((_DWORD *)this + 992), *((_DWORD *)this + 993), *((_DWORD *)this + 994), 0);
            break;
          case 0x10:
            CDropBagUI::SetSubWeapon(this, *((_DWORD *)this + 992), *((_DWORD *)this + 993), *((_DWORD *)this + 994), 0);
            break;
          default:
            return;
        }
      }
    }
  }
}
