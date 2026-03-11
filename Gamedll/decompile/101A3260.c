/*
 * func-name: ?OnBegin@SyncSeatRotationObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a3260
 * callers: 0x1001418c
 * callees: 0x1000adc6, 0x1000dafd
 */

void __thiscall GameClient::SyncSeatRotationObserver::OnBegin(
        GameClient::SyncSeatRotationObserver *this,
        struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // edx
  struct Event *v6; // ecx
  int v7; // edx
  struct Event *v8; // edi
  GameClient::EstabManager *v9; // eax
  struct GameClient::Establishment *Establishment; // esi
  struct BinStream *v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // [esp-4h] [ebp-1Ch]
  float v16; // [esp+Ch] [ebp-Ch] BYREF
  float v17; // [esp+10h] [ebp-8h]
  float v18; // [esp+14h] [ebp-4h]

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = *((_DWORD *)Stream + 2);
  v5 = v3 + 4;
  if ( v3 + 4 > v4 )
  {
    v6 = a2;
  }
  else
  {
    v6 = *(struct Event **)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5;
  }
  v7 = *((_DWORD *)Stream + 3);
  if ( v7 + 4 > v4 )
  {
    v8 = a2;
  }
  else
  {
    v8 = *(struct Event **)(v7 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v7 + 4;
  }
  v15 = (unsigned int)v6;
  v9 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v9, v15);
  if ( Establishment )
  {
    v16 = 0.0;
    v17 = 0.0;
    v18 = 0.0;
    v11 = Event::GetStream(a2);
    v12 = *((_DWORD *)v11 + 3);
    if ( (unsigned int)(v12 + 4) <= *((_DWORD *)v11 + 2) )
    {
      v16 = *(float *)(v12 + *((_DWORD *)v11 + 1));
      *((_DWORD *)v11 + 3) += 4;
    }
    v13 = *((_DWORD *)v11 + 3);
    if ( (unsigned int)(v13 + 4) <= *((_DWORD *)v11 + 2) )
    {
      v17 = *(float *)(v13 + *((_DWORD *)v11 + 1));
      *((_DWORD *)v11 + 3) += 4;
    }
    v14 = *((_DWORD *)v11 + 3);
    if ( (unsigned int)(v14 + 4) <= *((_DWORD *)v11 + 2) )
    {
      v18 = *(float *)(v14 + *((_DWORD *)v11 + 1));
      *((_DWORD *)v11 + 3) += 4;
    }
    (*(void (__thiscall **)(struct GameClient::Establishment *, struct Event *, float *))(*(_DWORD *)Establishment + 136))(
      Establishment,
      v8,
      &v16);
  }
}
