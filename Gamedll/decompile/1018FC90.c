/*
 * func-name: sub_1018FC90
 * func-address: 0x1018fc90
 * callers: 0x1000ace5
 * callees: 0x10001221, 0x10004d81, 0x10005ddf, 0x1000a3a8, 0x1000b5c3, 0x1000cf86, 0x1000d5f8, 0x1000ed13, 0x10011bbc, 0x10012378, 0x1001436c, 0x10017eb3, 0x10018e71
 */

void __stdcall sub_1018FC90(float a1)
{
  Event *v1; // edi
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  float v5; // ecx
  GameClient::RobotManager *v6; // eax
  struct GameClient::Robot *Robot; // esi
  double v8; // st7
  GameClient::RobotManager *v9; // eax
  struct GameClient::Robot *v10; // edi
  int v11; // edi
  int v12; // eax
  float v13; // [esp+0h] [ebp-78h]
  int v14; // [esp+4h] [ebp-74h]
  float v15; // [esp+4h] [ebp-74h]
  int v16; // [esp+4h] [ebp-74h]
  int v17; // [esp+8h] [ebp-70h]
  float v18; // [esp+10h] [ebp-68h] BYREF
  float v19; // [esp+14h] [ebp-64h] BYREF
  int v20; // [esp+18h] [ebp-60h] BYREF
  unsigned int v21[2]; // [esp+1Ch] [ebp-5Ch] BYREF
  float v22[2]; // [esp+24h] [ebp-54h] BYREF
  int v23[3]; // [esp+2Ch] [ebp-4Ch] BYREF
  _BYTE v24[64]; // [esp+38h] [ebp-40h] BYREF

  v1 = (Event *)LODWORD(a1);
  Stream = Event::GetStream((Event *)LODWORD(a1));
  v3 = *((_DWORD *)Stream + 3);
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = a1;
  }
  else
  {
    v5 = *(float *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  v14 = LODWORD(v5);
  v6 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v6, v14);
  if ( Robot )
  {
    switch ( Event::GetSubID(v1) )
    {
      case 0x13F2u:
        Event::GetStream(v1);
        sub_1000B5C3((int)&v19);
        sub_1000B5C3((int)&v18);
        sub_1001436C((int)&v20);
        sub_1001436C((int)v21);
        sub_10005DDF((int)&a1);
        v15 = v18;
        v8 = v19;
        *((float *)Robot + 89) = a1;
        v13 = v8;
        GameClient::Robot::Asphyxia(Robot, v13, v15);
        v16 = v20;
        v9 = GameClient::RobotManager::Instance();
        v10 = GameClient::RobotManager::GetRobot(v9, v16);
        a1 = 0.0;
        sub_1000D5F8(21, (int)&a1);
        if ( a1 != 0.0 )
        {
          if ( v10 )
            CKillingInfoUI::AddKillingInfo(
              (CKillingInfoUI *)LODWORD(a1),
              *((_DWORD *)v10 + 4),
              *((_DWORD *)Robot + 4),
              v21[0]);
          else
            CKillingInfoUI::AddKillingInfo((CKillingInfoUI *)LODWORD(a1), 0xFFFFFFFF, *((_DWORD *)Robot + 4), v21[0]);
        }
        break;
      case 0x13F3u:
        Event::GetStream(v1);
        sub_1000B5C3((int)v21);
        sub_1000B5C3((int)&a1);
        *((float *)Robot + 81) = a1;
        GameClient::Robot::Dead(Robot, *(float *)v21);
        break;
      case 0x13F4u:
        *(float *)&v21[1] = 0.0;
        v22[0] = 0.0;
        v22[1] = 0.0;
        *(float *)v23 = 0.0;
        *(float *)&v23[1] = 0.0;
        *(float *)&v23[2] = 0.0;
        Event::GetStream(v1);
        sub_10017EB3((int)v23);
        sub_10017EB3(v17);
        (*(void (__thiscall **)(struct GameClient::Robot *, float *))(*(_DWORD *)Robot + 36))(Robot, v22);
        v11 = *(_DWORD *)Robot;
        v12 = sub_10018E71(v24, (int)v23);
        (*(void (__thiscall **)(struct GameClient::Robot *, int))(v11 + 40))(Robot, v12);
        GameClient::Robot::Relive(Robot);
        break;
      case 0x13F5u:
        GameClient::Robot::Revived(Robot);
        break;
      default:
        return;
    }
  }
}
