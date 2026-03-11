/*
 * func-name: ?WriteSnapshot@TransformItem@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10194b00
 * callers: 0x1000f777
 * callees: 0x100034b8, 0x1000aff6, 0x1000e1f6
 */

bool __thiscall GameClient::TransformItem::WriteSnapshot(GameClient::TransformItem *this, struct BinStream *a2)
{
  bool result; // al
  int v4; // eax
  unsigned int v5; // edx
  struct BinStream *v6; // edi
  int v7; // eax
  int v8; // ecx
  struct BinStream *v9; // eax
  GameClient::FlyweightManager *v10; // eax
  unsigned int v11; // [esp-10h] [ebp-18h]
  unsigned int v12; // [esp-Ch] [ebp-14h]

  result = GameClient::Item::WriteSnapshot(this, a2);
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
    if ( v6 != (struct BinStream *)-1 )
    {
      v7 = *((_DWORD *)a2 + 3);
      v8 = v7 + 4;
      if ( v7 + 4 > v5 )
      {
        v9 = a2;
      }
      else
      {
        v9 = *(struct BinStream **)(v7 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v8;
      }
      v12 = *((_DWORD *)this + 4);
      v11 = (unsigned int)v9;
      v10 = GameClient::FlyweightManager::Instance();
      *((_DWORD *)this + 195) = GameClient::FlyweightManager::NewWorldObject(v10, (unsigned int)v6, v11, v12, a2);
    }
    return 1;
  }
  return result;
}
