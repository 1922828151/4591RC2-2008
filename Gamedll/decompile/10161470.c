/*
 * func-name: ?WriteSnapshot@Item@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10161470
 * callers: 0x1000e1f6
 * callees: 0x1000aff6, 0x1000e9b2, 0x1000fa6a
 */

bool __thiscall GameClient::Item::WriteSnapshot(GameClient::Item *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  unsigned int v5; // edx
  struct BinStream *v6; // ebx
  int v7; // eax
  struct BinStream *v8; // edi
  GameClient::FlyweightManager *v9; // eax
  int v10; // eax
  unsigned int v11; // edx
  int v12; // eax
  GameClient::FlyweightManager *v13; // eax
  int v14; // eax

  result = GameClient::Equip::WriteSnapshot(this, a2);
  if ( result )
  {
    v4 = *((_DWORD *)a2 + 3);
    v5 = *((_DWORD *)a2 + 2);
    if ( v4 + 4 > v5 )
    {
      v6 = a2;
    }
    else
    {
      v6 = *(struct BinStream **)(v4 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v4 + 4;
    }
    if ( v6 == (struct BinStream *)-1 )
    {
      v8 = a2;
    }
    else
    {
      v7 = *((_DWORD *)a2 + 3);
      if ( v7 + 4 > v5 )
      {
        v8 = a2;
      }
      else
      {
        v8 = *(struct BinStream **)(v7 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v7 + 4;
      }
      v9 = GameClient::FlyweightManager::Instance();
      *((_DWORD *)this + 192) = GameClient::FlyweightManager::NewSkill(v9, (unsigned int)v6, (unsigned int)v8, a2);
    }
    v10 = *((_DWORD *)a2 + 3);
    v11 = *((_DWORD *)a2 + 2);
    if ( v10 + 4 <= v11 )
    {
      v6 = *(struct BinStream **)(v10 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v10 + 4;
    }
    if ( v6 != (struct BinStream *)-1 )
    {
      v12 = *((_DWORD *)a2 + 3);
      if ( v12 + 4 <= v11 )
      {
        v8 = *(struct BinStream **)(v12 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v12 + 4;
      }
      v13 = GameClient::FlyweightManager::Instance();
      *((_DWORD *)this + 193) = GameClient::FlyweightManager::NewSkill(v13, (unsigned int)v6, (unsigned int)v8, a2);
    }
    v14 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v14 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 194) = *(_DWORD *)(v14 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    return 1;
  }
  return result;
}
