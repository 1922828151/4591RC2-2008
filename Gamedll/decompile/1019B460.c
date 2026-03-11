/*
 * func-name: ?WriteSnapshot@WorldObject@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x1019b460
 * callers: 0x1000cee1
 * callees: 0x10008d87, 0x1000aff6, 0x1000e575, 0x1000fa6a, 0x10015db6
 */

bool __thiscall GameClient::WorldObject::WriteSnapshot(GameClient::WorldObject *this, struct BinStream *a2)
{
  struct BinStream *v2; // ebx
  bool result; // al
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  struct BinStream *v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // esi
  int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  GameClient::FlyweightManager *v22; // eax
  struct GameClient::Aura *v23; // eax
  int v24; // eax
  unsigned int v25; // edx
  struct BinStream *v26; // esi
  int v27; // eax
  int v28; // ecx
  struct BinStream *v29; // eax
  GameClient::FlyweightManager *v30; // eax
  unsigned int v31; // [esp-10h] [ebp-18h]

  v2 = a2;
  result = GameClient::DataObject::WriteSnapshot(this, a2);
  if ( result )
  {
    v5 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v5 + 12) <= *((_DWORD *)a2 + 2) )
    {
      v6 = (_DWORD *)(v5 + *((_DWORD *)a2 + 1));
      *((_DWORD *)this + 6) = *v6;
      *((_DWORD *)this + 7) = v6[1];
      *((_DWORD *)this + 8) = v6[2];
      *((_DWORD *)a2 + 3) += 12;
    }
    v7 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v7 + 64) <= *((_DWORD *)a2 + 2) )
    {
      qmemcpy((char *)this + 36, (const void *)(v7 + *((_DWORD *)a2 + 1)), 0x40u);
      *((_DWORD *)a2 + 3) += 64;
    }
    v8 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v8 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 4) = *(_DWORD *)(v8 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v9 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v9 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 27) = *(_DWORD *)(v9 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v10 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v10 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 28) = *(_DWORD *)(v10 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v11 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v11 + 1) <= *((_DWORD *)a2 + 2) )
    {
      *((_BYTE *)this + 116) = *(_BYTE *)(v11 + *((_DWORD *)a2 + 1));
      ++*((_DWORD *)a2 + 3);
    }
    v12 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v12 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 35) = *(_DWORD *)(v12 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v13 = *((_DWORD *)a2 + 3);
    if ( (unsigned int)(v13 + 4) <= *((_DWORD *)a2 + 2) )
    {
      *((_DWORD *)this + 34) = *(_DWORD *)(v13 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) += 4;
    }
    v14 = *((_DWORD *)a2 + 3);
    v15 = v14 + 4;
    if ( (unsigned int)(v14 + 4) > *((_DWORD *)a2 + 2) )
    {
      v16 = a2;
    }
    else
    {
      v16 = *(struct BinStream **)(v14 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v15;
    }
    if ( (int)v16 > 0 )
    {
      a2 = v16;
      v17 = (unsigned int)v16;
      v18 = (unsigned int)v16;
      do
      {
        v19 = *((_DWORD *)v2 + 3);
        v20 = *((_DWORD *)v2 + 2);
        if ( v19 + 4 <= v20 )
        {
          v17 = *(_DWORD *)(v19 + *((_DWORD *)v2 + 1));
          *((_DWORD *)v2 + 3) = v19 + 4;
        }
        v21 = *((_DWORD *)v2 + 3);
        if ( v21 + 4 <= v20 )
        {
          v18 = *(_DWORD *)(v21 + *((_DWORD *)v2 + 1));
          *((_DWORD *)v2 + 3) = v21 + 4;
        }
        v22 = GameClient::FlyweightManager::Instance();
        v23 = GameClient::FlyweightManager::NewAura(v22, v17, v18, v2);
        GameClient::WorldObject::AddAura(this, v23);
        a2 = (struct BinStream *)((char *)a2 - 1);
      }
      while ( a2 );
    }
    v24 = *((_DWORD *)v2 + 3);
    v25 = *((_DWORD *)v2 + 2);
    if ( v24 + 4 > v25 )
    {
      v26 = a2;
    }
    else
    {
      v26 = *(struct BinStream **)(v24 + *((_DWORD *)v2 + 1));
      *((_DWORD *)v2 + 3) = v24 + 4;
    }
    if ( v26 != (struct BinStream *)-1 )
    {
      v27 = *((_DWORD *)v2 + 3);
      v28 = v27 + 4;
      if ( v27 + 4 > v25 )
      {
        v29 = a2;
      }
      else
      {
        v29 = *(struct BinStream **)(v27 + *((_DWORD *)v2 + 1));
        *((_DWORD *)v2 + 3) = v28;
      }
      v31 = (unsigned int)v29;
      v30 = GameClient::FlyweightManager::Instance();
      *((_DWORD *)this + 36) = GameClient::FlyweightManager::NewSkill(v30, (unsigned int)v26, v31, v2);
    }
    return 1;
  }
  return result;
}
