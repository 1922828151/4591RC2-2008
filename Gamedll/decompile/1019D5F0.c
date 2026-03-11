/*
 * func-name: ?OnBegin@CtlEsabStageChangeObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x1019d5f0
 * callers: 0x10017e59
 * callees: 0x1000adc6, 0x1000dafd
 */

void __thiscall GameClient::CtlEsabStageChangeObserver::OnBegin(
        GameClient::CtlEsabStageChangeObserver *this,
        struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  struct Event *v5; // ecx
  GameClient::EstabManager *v6; // eax
  struct GameClient::Establishment *Establishment; // esi
  struct BinStream *v8; // eax
  int v9; // ecx
  int v10; // edx
  struct Event *v11; // ecx
  unsigned int v12; // [esp-4h] [ebp-Ch]

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = a2;
  }
  else
  {
    v5 = *(struct Event **)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  v12 = (unsigned int)v5;
  v6 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v6, v12);
  if ( Establishment )
  {
    v8 = Event::GetStream(a2);
    v9 = *((_DWORD *)v8 + 3);
    v10 = v9 + 4;
    if ( (unsigned int)(v9 + 4) > *((_DWORD *)v8 + 2) )
    {
      v11 = a2;
    }
    else
    {
      v11 = *(struct Event **)(v9 + *((_DWORD *)v8 + 1));
      *((_DWORD *)v8 + 3) = v10;
    }
    if ( *((_DWORD *)Establishment + 114) )
      sub_10004B79((int)v11);
  }
}
