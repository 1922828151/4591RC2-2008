/*
 * func-name: ?OnBegin@SyncEstabInfoObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a2f00
 * callers: 0x10004048
 * callees: 0x1000adc6, 0x1000dafd
 */

void __thiscall GameClient::SyncEstabInfoObserver::OnBegin(GameClient::SyncEstabInfoObserver *this, struct Event *a2)
{
  unsigned int v2; // esi
  struct BinStream *Stream; // eax
  int v4; // ecx
  GameClient::EstabManager *v5; // eax
  struct GameClient::Establishment *Establishment; // ebp
  struct BinStream *v7; // eax
  int v8; // ecx
  int v9; // edx
  char v10; // cl
  struct BinStream *v11; // eax
  int v12; // ecx
  unsigned int v13; // edi
  int v14; // edx
  struct Event *v15; // ecx
  int v16; // edx
  int v17; // esi
  struct Event *v18; // edx
  int v19; // esi
  struct BinStream *v20; // eax
  int v21; // ecx

  v2 = -1;
  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v4 + 4) <= *((_DWORD *)Stream + 2) )
  {
    v2 = *(_DWORD *)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4 + 4;
  }
  v5 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v5, v2);
  if ( Establishment )
  {
    v7 = Event::GetStream(a2);
    v8 = *((_DWORD *)v7 + 3);
    v9 = v8 + 1;
    if ( (unsigned int)(v8 + 1) > *((_DWORD *)v7 + 2) )
    {
      v10 = (char)a2;
    }
    else
    {
      v10 = *(_BYTE *)(v8 + *((_DWORD *)v7 + 1));
      *((_DWORD *)v7 + 3) = v9;
    }
    *((_BYTE *)Establishment + 348) = v10;
    if ( v10 )
    {
      v11 = Event::GetStream(a2);
      v12 = *((_DWORD *)v11 + 3);
      v13 = *((_DWORD *)v11 + 2);
      v14 = v12 + 4;
      if ( v12 + 4 > v13 )
      {
        v15 = a2;
      }
      else
      {
        v15 = *(struct Event **)(v12 + *((_DWORD *)v11 + 1));
        *((_DWORD *)v11 + 3) = v14;
      }
      v16 = *((_DWORD *)v11 + 3);
      v17 = v16 + 4;
      if ( v16 + 4 > v13 )
      {
        v18 = a2;
      }
      else
      {
        v18 = *(struct Event **)(v16 + *((_DWORD *)v11 + 1));
        *((_DWORD *)v11 + 3) = v17;
      }
      *((_DWORD *)Establishment + 88) = v15;
      *((_DWORD *)Establishment + 89) = v18;
    }
    v19 = 0;
    v20 = Event::GetStream(a2);
    v21 = *((_DWORD *)v20 + 3);
    if ( (unsigned int)(v21 + 4) <= *((_DWORD *)v20 + 2) )
    {
      v19 = *(_DWORD *)(v21 + *((_DWORD *)v20 + 1));
      *((_DWORD *)v20 + 3) = v21 + 4;
    }
    *((_DWORD *)Establishment + 90) = v19;
  }
}
