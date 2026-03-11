/*
 * func-name: ?WriteSnapshot@Establishment@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x101a5750
 * callers: 0x1000df8f
 * callees: 0x10003611, 0x10003a6c, 0x10003d82, 0x100095b1, 0x1000aff6, 0x1000cee1, 0x10013a84, 0x10015537, 0x102ca13e
 */

char __thiscall GameClient::Establishment::WriteSnapshot(GameClient::Establishment *this, struct BinStream *a2)
{
  struct BinStream *v2; // ebp
  GameClient::Establishment *v3; // edi
  size_t v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  struct BinStream *v14; // eax
  int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  GameClient::FlyweightManager *v18; // eax
  struct GameClient::DataObject *v19; // eax
  struct GameClient::DataObject *v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  struct BinStream *v26; // eax
  int v27; // eax
  unsigned int v28; // edx
  int v29; // eax
  GameClient::FlyweightManager *v30; // eax
  struct GameClient::Function *v31; // eax
  struct GameClient::Function *v32; // esi
  void (__thiscall *v33)(char *, struct BinStream *); // edx
  unsigned int v34; // eax
  unsigned int v35; // edx
  struct GameClient::Function **v36; // eax
  void *v37; // esi
  unsigned int v39; // [esp-8h] [ebp-2Ch]
  unsigned int v40; // [esp-4h] [ebp-28h]
  int v41; // [esp+10h] [ebp-14h] BYREF
  unsigned int v42; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v43; // [esp+1Ch] [ebp-8h]
  unsigned int v44; // [esp+20h] [ebp-4h] BYREF
  struct BinStream *v45; // [esp+28h] [ebp+4h]

  v2 = a2;
  v3 = this;
  v41 = (int)this;
  GameClient::WorldObject::WriteSnapshot(this, a2);
  (*(void (__thiscall **)(int, struct BinStream *))(*((_DWORD *)v3 + 37) + 4))((int)v3 + 148, a2);
  v4 = sub_10003D82();
  v5 = *((_DWORD *)a2 + 3);
  if ( v5 + v4 <= *((_DWORD *)a2 + 2) )
  {
    memcpy(byte_103B6158, (const void *)(v5 + *((_DWORD *)a2 + 1)), v4);
    byte_103B6158[v4] = 0;
    std::string::operator=((char *)v3 + 400, byte_103B6158);
    *((_DWORD *)a2 + 3) += v4;
  }
  v6 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v6 + 1) <= *((_DWORD *)a2 + 2) )
  {
    *((_BYTE *)v3 + 324) = *(_BYTE *)(v6 + *((_DWORD *)a2 + 1));
    ++*((_DWORD *)a2 + 3);
  }
  v7 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v7 + 12) <= *((_DWORD *)a2 + 2) )
  {
    v8 = (_DWORD *)(v7 + *((_DWORD *)a2 + 1));
    *((_DWORD *)v3 + 82) = *v8;
    *((_DWORD *)v3 + 83) = v8[1];
    *((_DWORD *)v3 + 84) = v8[2];
    *((_DWORD *)a2 + 3) += 12;
  }
  v9 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v9 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((float *)v3 + 85) = *(float *)(v9 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v10 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v10 + 4) <= *((_DWORD *)a2 + 2) )
  {
    *((float *)v3 + 86) = *(float *)(v10 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) += 4;
  }
  v11 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)(v11 + 1) <= *((_DWORD *)a2 + 2) )
  {
    *((_BYTE *)v3 + 372) = *(_BYTE *)(v11 + *((_DWORD *)a2 + 1));
    ++*((_DWORD *)a2 + 3);
  }
  v12 = *((_DWORD *)a2 + 3);
  v13 = v12 + 4;
  if ( (unsigned int)(v12 + 4) > *((_DWORD *)a2 + 2) )
  {
    v14 = a2;
  }
  else
  {
    v14 = *(struct BinStream **)(v12 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v13;
  }
  if ( (int)v14 > 0 )
  {
    a2 = v14;
    do
    {
      v15 = *((_DWORD *)v2 + 3);
      v16 = *((_DWORD *)v2 + 2);
      if ( v15 + 4 <= v16 )
      {
        v43 = *(_DWORD *)(v15 + *((_DWORD *)v2 + 1));
        *((_DWORD *)v2 + 3) = v15 + 4;
      }
      v17 = *((_DWORD *)v2 + 3);
      if ( v17 + 4 <= v16 )
      {
        v42 = *(_DWORD *)(v17 + *((_DWORD *)v2 + 1));
        *((_DWORD *)v2 + 3) = v17 + 4;
      }
      v18 = GameClient::FlyweightManager::Instance();
      v19 = GameClient::FlyweightManager::NewInstance(v18, v43, v42);
      v20 = v19;
      if ( v19 )
      {
        v21 = *((_DWORD *)v3 + 49);
        v44 = (unsigned int)v19;
        if ( v21 )
          v22 = (*((_DWORD *)v3 + 50) - v21) >> 2;
        else
          v22 = 0;
        GameClient::Seat::SetSeatIndex(v20, v22);
        *((_DWORD *)v20 + 22) = v3;
        sub_10003A6C((char *)v3 + 192, (int)&v44);
        (*(void (__thiscall **)(struct GameClient::DataObject *, struct BinStream *))(*(_DWORD *)v20 + 12))(v20, v2);
        *((_DWORD *)v20 + 25) = *((_DWORD *)v3 + 6);
        *((_DWORD *)v20 + 26) = *((_DWORD *)v3 + 7);
        *((_DWORD *)v20 + 27) = *((_DWORD *)v3 + 8);
        qmemcpy((char *)v20 + 112, (char *)v3 + 36, 0x40u);
        v23 = v41;
        *((_BYTE *)v20 + 346) = *(_BYTE *)(v41 + 372);
        v3 = (GameClient::Establishment *)v23;
      }
      a2 = (struct BinStream *)((char *)a2 - 1);
    }
    while ( a2 );
  }
  v24 = *((_DWORD *)v2 + 3);
  v25 = v24 + 4;
  if ( (unsigned int)(v24 + 4) > *((_DWORD *)v2 + 2) )
  {
    v26 = a2;
  }
  else
  {
    v26 = *(struct BinStream **)(v24 + *((_DWORD *)v2 + 1));
    *((_DWORD *)v2 + 3) = v25;
  }
  if ( (int)v26 > 0 )
  {
    v45 = v26;
    do
    {
      v27 = *((_DWORD *)v2 + 3);
      v28 = *((_DWORD *)v2 + 2);
      if ( v27 + 4 <= v28 )
      {
        v43 = *(_DWORD *)(v27 + *((_DWORD *)v2 + 1));
        *((_DWORD *)v2 + 3) = v27 + 4;
      }
      v29 = *((_DWORD *)v2 + 3);
      if ( v29 + 4 <= v28 )
      {
        v44 = *(_DWORD *)(v29 + *((_DWORD *)v2 + 1));
        *((_DWORD *)v2 + 3) = v29 + 4;
      }
      v40 = v44;
      v39 = v43;
      v30 = GameClient::FlyweightManager::Instance();
      v31 = GameClient::FlyweightManager::NewFunction(v30, v39, v40);
      v32 = v31;
      if ( v31 )
      {
        *((_DWORD *)v31 + 7) = v3;
        v33 = *(void (__thiscall **)(char *, struct BinStream *))(*((_DWORD *)v31 + 4) + 12);
        v42 = (unsigned int)v31;
        v33((char *)v31 + 16, v2);
        (*(void (__thiscall **)(struct GameClient::Function *))(*(_DWORD *)v32 + 16))(v32);
        v34 = *((_DWORD *)v3 + 65);
        if ( v34 )
          v35 = (int)(*((_DWORD *)v3 + 66) - v34) >> 2;
        else
          v35 = 0;
        if ( v34 && v35 < (int)(*((_DWORD *)v3 + 67) - v34) >> 2 )
        {
          v36 = (struct GameClient::Function **)*((_DWORD *)v3 + 66);
          *v36 = v32;
          *((_DWORD *)v3 + 66) = v36 + 1;
        }
        else
        {
          v37 = (void *)*((_DWORD *)v3 + 66);
          if ( v34 > (unsigned int)v37 )
            _invalid_parameter_noinfo();
          sub_10003611((int)&v41, (int)v3 + 256, v37, (int)&v42);
        }
      }
      v45 = (struct BinStream *)((char *)v45 - 1);
    }
    while ( v45 );
  }
  return 1;
}
