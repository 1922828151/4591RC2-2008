/*
 * func-name: ?IsMatchEquip@Robot@GameClient@@SA_NPAVFSystemPart@2@0@Z_0
 * func-address: 0x10173a00
 * callers: 0x100103c0
 * callees: 0x1000aff6, 0x1001789b
 */

bool __cdecl GameClient::Robot::IsMatchEquip(struct GameClient::FSystemPart *a1, struct GameClient::FSystemPart *a2)
{
  int v2; // ecx
  bool result; // al
  char v4; // [esp-1Ch] [ebp-30h] BYREF
  int v5; // [esp-18h] [ebp-2Ch]
  int v6; // [esp-14h] [ebp-28h]
  int v7; // [esp-10h] [ebp-24h]
  int v8; // [esp-Ch] [ebp-20h]
  int v9; // [esp-8h] [ebp-1Ch]
  int v10; // [esp-4h] [ebp-18h]
  int v11; // [esp+10h] [ebp-4h]

  result = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( !*((_DWORD *)a1 + 49) )
      {
        v2 = *((_DWORD *)a2 + 49);
        if ( (v2 == 3 || v2 == 4) && *((_DWORD *)a1 + 68) == *((_DWORD *)a2 + 75) )
        {
          if ( !*((_DWORD *)a2 + 73) )
            return 1;
          std::string::string(&v4, (char *)a2 + 272);
          v11 = 0;
          GameClient::FlyweightManager::Instance();
          v11 = -1;
          if ( a1 == (struct GameClient::FSystemPart *)GameClient::FlyweightManager::GetFlyweight(
                                                         v4,
                                                         v5,
                                                         v6,
                                                         v7,
                                                         v8,
                                                         v9,
                                                         v10) )
            return 1;
        }
      }
    }
  }
  return result;
}
