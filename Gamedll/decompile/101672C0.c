/*
 * func-name: sub_101672C0
 * func-address: 0x101672c0
 * callers: 0x1001541f
 * callees: 0x10001dfc, 0x10001fd7, 0x10008d87, 0x1000aff6, 0x10012837, 0x1001436c, 0x10015db6, 0x10016441
 */

void __userpurge sub_101672C0(int a1@<edi>, Event *a2, int a3)
{
  Event *v3; // esi
  GameClient::AuraManager *v4; // eax
  struct BinStream *v5; // eax
  int v6; // ecx
  int v7; // edx
  Event *v8; // ecx
  GameClient::WorldObject *v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // eax
  GameClient::FlyweightManager *v12; // eax
  struct GameClient::Aura *v13; // eax
  unsigned int v14; // [esp-10h] [ebp-18h]
  unsigned int v15; // [esp-Ch] [ebp-14h]
  struct BinStream *v16; // [esp-8h] [ebp-10h]
  struct BinStream *Stream; // [esp-4h] [ebp-Ch]
  unsigned int v19; // [esp+4h] [ebp-4h] BYREF

  v3 = a2;
  if ( Event::GetSubID(a2) == 5008 )
  {
    Stream = Event::GetStream(v3);
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::WriteSynaData(v4, Stream);
  }
  else
  {
    v5 = Event::GetStream(v3);
    v6 = *((_DWORD *)v5 + 3);
    v7 = v6 + 4;
    if ( (unsigned int)(v6 + 4) > *((_DWORD *)v5 + 2) )
    {
      v8 = a2;
    }
    else
    {
      v8 = *(Event **)(v6 + *((_DWORD *)v5 + 1));
      *((_DWORD *)v5 + 3) = v7;
    }
    v9 = (GameClient::WorldObject *)sub_10001DFC((int)v8);
    if ( v9 )
    {
      v10 = Event::GetSubID(v3) - 5006;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 124 )
          {
            Event::GetStream(v3);
            sub_1001436C(a1);
            (*(void (__thiscall **)(GameClient::WorldObject *, int))(*(_DWORD *)v9 + 68))(v9, a3);
          }
        }
        else
        {
          Event::GetStream(v3);
          sub_1001436C((int)&a2);
          GameClient::WorldObject::RemoveAura(v9, (unsigned int)a2);
        }
      }
      else
      {
        Event::GetStream(v3);
        sub_1001436C((int)&v19);
        sub_1001436C((int)&a2);
        v16 = Event::GetStream(v3);
        v15 = (unsigned int)a2;
        v14 = v19;
        v12 = GameClient::FlyweightManager::Instance();
        v13 = GameClient::FlyweightManager::NewAura(v12, v14, v15, v16);
        GameClient::WorldObject::AddAura(v9, v13);
      }
    }
  }
}
