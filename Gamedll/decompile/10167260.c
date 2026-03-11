/*
 * func-name: sub_10167260
 * func-address: 0x10167260
 * callers: 0x10019907
 * callees: 0x10001dfc, 0x100084f4, 0x1000aff6, 0x1001933f
 */

int __stdcall sub_10167260(Event *a1)
{
  struct BinStream *Stream; // eax
  int v2; // ecx
  unsigned int v3; // esi
  int result; // eax
  GameClient::FlyweightManager *v6; // eax
  unsigned int v7; // [esp-8h] [ebp-Ch]

  Stream = Event::GetStream(a1);
  v2 = *((_DWORD *)Stream + 3);
  if ( (unsigned int)(v2 + 4) > *((_DWORD *)Stream + 2) )
  {
    v3 = (unsigned int)a1;
  }
  else
  {
    v3 = *(_DWORD *)(v2 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v2 + 4;
  }
  result = sub_10001DFC(v3);
  if ( result )
  {
    if ( (*(_DWORD *)(result + 104))-- == 1 )
    {
      v7 = *(_DWORD *)(result + 4);
      v6 = GameClient::FlyweightManager::Instance();
      GameClient::FlyweightManager::DeleteInstance(v6, v7, v3);
      return sub_1001933F(v3);
    }
  }
  return result;
}
