/*
 * func-name: ?OnBegin@CtlEsabHeartPosObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x1019d670
 * callers: 0x10006a05
 * callees: 0x10008e04, 0x1000adc6, 0x1000dafd
 */

void __thiscall GameClient::CtlEsabHeartPosObserver::OnBegin(
        GameClient::CtlEsabHeartPosObserver *this,
        struct Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  struct Event *v5; // ecx
  GameClient::EstabManager *v6; // eax
  GameClient::ControlledEstab *Establishment; // edi
  struct BinStream *v8; // eax
  int v9; // edx
  float *v10; // ecx
  unsigned int v11; // [esp-4h] [ebp-18h]
  float v12; // [esp+8h] [ebp-Ch] BYREF
  float v13; // [esp+Ch] [ebp-8h]
  float v14; // [esp+10h] [ebp-4h]

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
  v11 = (unsigned int)v5;
  v6 = GameClient::EstabManager::Instance();
  Establishment = GameClient::EstabManager::GetEstablishment(v6, v11);
  if ( Establishment )
  {
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
    v8 = Event::GetStream(a2);
    v9 = *((_DWORD *)v8 + 3);
    if ( (unsigned int)(v9 + 12) <= *((_DWORD *)v8 + 2) )
    {
      v10 = (float *)(v9 + *((_DWORD *)v8 + 1));
      v12 = *v10;
      v13 = v10[1];
      v14 = v10[2];
      *((_DWORD *)v8 + 3) += 12;
    }
    GameClient::ControlledEstab::SetCorrectPos(Establishment, (const struct Vector *)&v12);
  }
}
