/*
 * func-name: ?OnBegin@EstabStateChangedObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a2fe0
 * callers: 0x1000196a
 * callees: 0x1000adc6, 0x1000dafd
 */

void __thiscall GameClient::EstabStateChangedObserver::OnBegin(
        GameClient::EstabStateChangedObserver *this,
        struct Event *a2)
{
  unsigned int v2; // esi
  struct BinStream *Stream; // eax
  int v4; // ecx
  GameClient::EstabManager *v5; // eax
  struct GameClient::Establishment *Establishment; // esi
  struct BinStream *v7; // eax
  int v8; // ecx

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
    if ( (unsigned int)(v8 + 1) <= *((_DWORD *)v7 + 2) )
    {
      LOBYTE(a2) = *(_BYTE *)(v8 + *((_DWORD *)v7 + 1));
      *((_DWORD *)v7 + 3) = v8 + 1;
    }
    (*(void (__thiscall **)(struct GameClient::Establishment *, struct Event *))(*(_DWORD *)Establishment + 148))(
      Establishment,
      a2);
  }
}
