/*
 * func-name: sub_100ECF20
 * func-address: 0x100ecf20
 * callers: 0x100093d6
 * callees: 0x1000108c, 0x1000194c, 0x10004665, 0x10005aa1, 0x10005ccc, 0x10005f33, 0x10015af5, 0x10017c29, 0x102c9d62
 */

void __stdcall sub_100ECF20(int a1)
{
  unsigned int v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  GameClient::GroupManager *v5; // eax
  const struct GameClient::Group *Group; // eax
  char *v7; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  unsigned int v11; // [esp-4h] [ebp-78h]
  const struct GameClient::Group *v12; // [esp+1Ch] [ebp-58h]
  float v13[3]; // [esp+20h] [ebp-54h] BYREF
  _BYTE v14[28]; // [esp+2Ch] [ebp-48h] BYREF
  _BYTE v15[20]; // [esp+48h] [ebp-2Ch] BYREF
  int v16; // [esp+5Ch] [ebp-18h]
  int v17; // [esp+70h] [ebp-4h]

  std::string::string(v15);
  v13[0] = 0.0;
  v13[1] = 0.0;
  v13[2] = 0.0;
  v1 = 0;
  v17 = 0;
  GameClient::GroupManager::Instance();
  GameClient::GroupManager::GetCorpCmd((int)v13, (int)v15);
  if ( v16 )
  {
    if ( (unsigned int)std::string::length(v15) > 0xA )
    {
      v2 = std::string::substr(v15, v14, 0, 8);
      LOBYTE(v17) = 1;
      std::string::operator=(v15, v2);
      LOBYTE(v17) = 0;
      std::string::~string(v14);
      std::string::operator+=(v15, "...");
    }
    sub_10015AF5(a1, (int)v13, (int)v15, -3939342);
  }
  v3 = sub_1000194C(0);
  v4 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 216) )
    {
      v11 = *(_DWORD *)(v3 + 216);
      v5 = GameClient::GroupManager::Instance();
      Group = GameClient::GroupManager::GetGroup(v5, v11);
      v12 = Group;
      if ( Group )
      {
        v7 = (char *)Group + 12;
        if ( sub_1000108C() )
        {
          v8 = 0;
          do
          {
            v9 = *((_DWORD *)v7 + 1);
            if ( !v9 || v1 >= (*((_DWORD *)v7 + 2) - v9) / 84 )
              _invalid_parameter_noinfo();
            if ( *(_DWORD *)(*((_DWORD *)v7 + 1) + v8 + 64) != 6
              && (*(_DWORD *)(v4 + 4) == *((_DWORD *)v12 + 2) || *(_DWORD *)sub_10005CCC(v1) == *(_DWORD *)(v4 + 4)) )
            {
              switch ( *(_DWORD *)(sub_10005CCC(v1) + 64) )
              {
                case 0:
                  std::string::operator=(v15, &unk_10310E64);
                  break;
                case 1:
                  std::string::operator=(v15, &unk_10310E6C);
                  break;
                case 2:
                  std::string::operator=(v15, &unk_10310E74);
                  break;
                case 3:
                  std::string::operator=(v15, &unk_10310E7C);
                  break;
                case 4:
                  std::string::operator=(v15, &unk_10310E84);
                  break;
                case 5:
                  std::string::operator=(v15, &unk_10310E8C);
                  break;
                default:
                  break;
              }
              v10 = sub_10005CCC(v1);
              sub_10015AF5(a1, v10 + 68, (int)v15, -16711936);
            }
            ++v1;
            v8 += 84;
          }
          while ( v1 < sub_1000108C() );
        }
      }
    }
  }
  j_nullsub_74(a1);
  v17 = -1;
  std::string::~string(v15);
}
