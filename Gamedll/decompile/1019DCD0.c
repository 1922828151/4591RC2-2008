/*
 * func-name: ?OnBegin@CtlEsabHeartRotObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x1019dcd0
 * callers: 0x10014a60
 * callees: 0x10003909, 0x1000adc6, 0x1000dafd, 0x10014669
 */

void __thiscall GameClient::CtlEsabHeartRotObserver::OnBegin(
        GameClient::CtlEsabHeartRotObserver *this,
        struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  struct Event *v5; // ecx
  GameClient::EstabManager *v6; // eax
  GameClient::ControlledEstab *Establishment; // ebx
  struct BinStream *v8; // eax
  int v9; // ecx
  unsigned int v10; // [esp-4h] [ebp-50h]
  _BYTE v11[64]; // [esp+Ch] [ebp-40h] BYREF

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
  v10 = (unsigned int)v5;
  v6 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v6, v10);
  if ( Establishment )
  {
    sub_10014669(v11);
    v8 = Event::GetStream(a2);
    v9 = *((_DWORD *)v8 + 3);
    if ( (unsigned int)(v9 + 64) <= *((_DWORD *)v8 + 2) )
    {
      qmemcpy(v11, (const void *)(v9 + *((_DWORD *)v8 + 1)), sizeof(v11));
      *((_DWORD *)v8 + 3) += 64;
    }
    GameClient::ControlledEstab::SetCorrectRotation(Establishment, (const struct Matrix *)v11);
  }
}
