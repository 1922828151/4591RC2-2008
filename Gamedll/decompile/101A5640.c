/*
 * func-name: ?OnBegin@UpdateEstabArmorObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101a5640
 * callers: 0x1000c752
 * callees: 0x100069f1, 0x100077e3, 0x1000adc6, 0x1000dafd, 0x102c9d50
 */

void __thiscall GameClient::UpdateEstabArmorObserver::OnBegin(
        GameClient::UpdateEstabArmorObserver *this,
        struct Event *a2)
{
  Event *v2; // esi
  struct BinStream *Stream; // eax
  int v4; // ecx
  int v5; // edx
  struct Event *v6; // ecx
  GameClient::EstabManager *v7; // eax
  struct BinStream *v8; // eax
  int v9; // ecx
  int v10; // edx
  struct Event *v11; // ecx
  struct Event *v12; // edi
  struct BinStream *v13; // eax
  int v14; // ecx
  double v15; // st7
  unsigned int v16; // [esp-4h] [ebp-38h]
  int v17; // [esp+18h] [ebp-1Ch] BYREF
  void *v18; // [esp+1Ch] [ebp-18h]
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h]
  int v21; // [esp+30h] [ebp-4h]

  v2 = a2;
  Stream = Event::GetStream(a2);
  v4 = *((_DWORD *)Stream + 3);
  v5 = v4 + 4;
  if ( (unsigned int)(v4 + 4) > *((_DWORD *)Stream + 2) )
  {
    v6 = a2;
  }
  else
  {
    v6 = *(struct Event **)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5;
  }
  v16 = (unsigned int)v6;
  v7 = GameClient::EstabManager::Instance();
  if ( GameClient::EstabManager::GetEstablishment(v7, v16) )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v8 = Event::GetStream(v2);
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
    if ( (int)v11 > 0 )
    {
      v12 = v11;
      do
      {
        v13 = Event::GetStream(v2);
        v14 = *((_DWORD *)v13 + 3);
        if ( (unsigned int)(v14 + 4) <= *((_DWORD *)v13 + 2) )
        {
          v15 = *(float *)(v14 + *((_DWORD *)v13 + 1));
          *((_DWORD *)v13 + 3) = v14 + 4;
          *(float *)&a2 = v15;
        }
        sub_100077E3(&v17, (int)&a2);
        v12 = (struct Event *)((char *)v12 - 1);
      }
      while ( v12 );
    }
    GameClient::Establishment::UpdateArmor((int)&v17);
    if ( v18 )
      operator delete(v18);
  }
}
