/*
 * func-name: sub_1018EE30
 * func-address: 0x1018ee30
 * callers: 0x10009e12
 * callees: 0x10001221, 0x10002162, 0x10002275, 0x10003017, 0x100064b5, 0x1000832d, 0x10009d13, 0x1000a3a8, 0x1000b5c3, 0x1000d5f8, 0x1000ed13, 0x1000f5e7, 0x1001436c, 0x100157cb, 0x10016a4f, 0x102c9d62
 */

void __stdcall sub_1018EE30(Event *a1)
{
  char Owner; // al
  int v2; // ebx
  GameClient::RobotManager *v3; // eax
  struct GameClient::Robot *Robot; // edi
  double v5; // st7
  CKillingInfoUI *v6; // eax
  GameClient::RobotManager *v7; // eax
  struct GameClient::Robot *v8; // eax
  struct GameClient::Robot *v9; // edi
  GameClient::RobotManager *v10; // eax
  struct GameClient::Robot *v11; // esi
  char v12; // [esp-2Ch] [ebp-DCh] BYREF
  int v13; // [esp-28h] [ebp-D8h]
  int v14; // [esp-24h] [ebp-D4h]
  int v15; // [esp-20h] [ebp-D0h]
  int v16; // [esp-1Ch] [ebp-CCh]
  int v17; // [esp-18h] [ebp-C8h]
  int v18; // [esp-14h] [ebp-C4h]
  int v19; // [esp-10h] [ebp-C0h]
  int v20; // [esp-Ch] [ebp-BCh]
  int v21; // [esp-8h] [ebp-B8h]
  int v22; // [esp-4h] [ebp-B4h]
  int v23; // [esp+0h] [ebp-B0h]
  int v24; // [esp+4h] [ebp-ACh]
  int v25; // [esp+8h] [ebp-A8h]
  int v26; // [esp+Ch] [ebp-A4h]
  CKillingInfoUI *v27; // [esp+20h] [ebp-90h] BYREF
  unsigned int v28; // [esp+24h] [ebp-8Ch] BYREF
  float v29; // [esp+28h] [ebp-88h]
  float v30; // [esp+2Ch] [ebp-84h]
  float v31; // [esp+30h] [ebp-80h]
  float v32; // [esp+34h] [ebp-7Ch]
  int v33; // [esp+38h] [ebp-78h] BYREF
  char Buffer[100]; // [esp+3Ch] [ebp-74h] BYREF
  int v35; // [esp+ACh] [ebp-4h]

  Owner = Event::GetOwner(a1);
  v2 = sub_10016A4F(Owner);
  if ( v2 )
  {
    v26 = *(int *)(v2 + 292);
    v3 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v3, v26);
    if ( Robot )
    {
      switch ( Event::GetSubID(a1) )
      {
        case 0x1408u:
          Event::GetStream(a1);
          sub_10002162((int)&v27);
          sprintf(Buffer, "%d", v27);
          *(float *)&v26 = 0.0;
          *(float *)&v25 = 0.0;
          v24 = 0;
          *(float *)&v23 = 5.0;
          v29 = 1.0;
          v28 = (unsigned int)&v12;
          v32 = 1.0;
          *(float *)&v19 = 1.0;
          v30 = 0.0;
          *(float *)&v20 = 0.0;
          v31 = 0.0;
          *(float *)&v21 = 0.0;
          *(float *)&v22 = 1.0;
          std::string::string(&v12, Buffer);
          v35 = 0;
          goto LABEL_5;
        case 0x1409u:
          Event::GetStream(a1);
          sub_1000B5C3((int)&v27);
          v5 = *(float *)&v27;
          *(float *)(v2 + 300) = *(float *)&v27;
          *(float *)&v26 = v5;
          GameClient::Robot::UpdateMalice(Robot, *(float *)&v26);
          if ( *(float *)&v27 > 0.0 )
          {
            Event::GetStream(a1);
            sub_10002162((int)&v27);
            sprintf(Buffer, "%d", v27);
            *(float *)&v26 = 0.0;
            *(float *)&v25 = 0.0;
            v24 = 0;
            *(float *)&v23 = 5.0;
            v29 = 1.0;
            v28 = (unsigned int)&v12;
            v32 = 1.0;
            *(float *)&v19 = 1.0;
            v30 = 0.0;
            *(float *)&v20 = 0.0;
            v31 = 0.0;
            *(float *)&v21 = 0.0;
            *(float *)&v22 = 1.0;
            std::string::string(&v12, Buffer);
            v35 = 1;
LABEL_5:
            sub_10009D13();
            v35 = -1;
            sub_10002275(
              v12,
              v13,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22,
              *(float *)&v23,
              v24,
              *(float *)&v25,
              v26);
          }
          break;
        case 0x140Au:
          Event::GetStream(a1);
          sub_10002162((int)&v27);
          v6 = v27;
          *((_DWORD *)Robot + 231) += v27;
          sprintf(Buffer, "+%d", v6);
          *(float *)&v26 = 0.0;
          *(float *)&v25 = 0.0;
          v24 = 0;
          *(float *)&v23 = 0.0;
          v29 = 0.58999997;
          *(float *)&v19 = 0.58999997;
          v30 = 0.38999999;
          *(float *)&v20 = 0.38999999;
          v31 = 0.078000002;
          *(float *)&v21 = 0.078000002;
          v32 = 1.0;
          *(float *)&v22 = 1.0;
          v28 = (unsigned int)&v12;
          std::string::string(&v12, Buffer);
          v35 = 2;
          sub_1000832D();
          v35 = -1;
          sub_100157CB(v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
          break;
        case 0x140Du:
          Event::GetStream(a1);
          sub_1001436C((int)&v33);
          sub_1000F5E7((int)&v28);
          GameClient::Robot::IntoDefenceZone(v33, v28);
          break;
        case 0x141Fu:
          Event::GetStream(a1);
          sub_1001436C((int)&v33);
          sub_1001436C((int)&v27);
          sub_1001436C((int)&v28);
          v26 = (int)v27;
          v7 = GameClient::RobotManager::Instance();
          v8 = GameClient::RobotManager::GetRobot(v7, v26);
          v26 = v33;
          v9 = v8;
          v10 = GameClient::RobotManager::Instance();
          v11 = GameClient::RobotManager::GetRobot(v10, v26);
          if ( v11 )
          {
            *(float *)&v27 = 0.0;
            sub_1000D5F8(21, (int)&v27);
            if ( *(float *)&v27 != 0.0 )
            {
              if ( v9 )
                CKillingInfoUI::AddKillingInfo(v27, *((_DWORD *)v9 + 4), *((_DWORD *)v11 + 4), v28);
              else
                CKillingInfoUI::AddKillingInfo(v27, 0xFFFFFFFF, *((_DWORD *)v11 + 4), v28);
            }
          }
          break;
        default:
          return;
      }
    }
  }
}
