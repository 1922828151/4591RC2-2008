/*
 * func-name: sub_1018FEA0
 * func-address: 0x1018fea0
 * callers: 0x10007ae5
 * callees: 0x10006a19, 0x1000a3a8, 0x1000b203, 0x1000b5c3, 0x1000bebf, 0x1000ed13, 0x1000f885, 0x1001436c, 0x10017eb3, 0x10018e71
 */

struct GameClient::Robot *__userpurge sub_1018FEA0@<eax>(int a1@<ebx>, int a2@<ebp>, Event *a3)
{
  struct BinStream *Stream; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  GameClient::RobotManager *v7; // eax
  struct GameClient::Robot *result; // eax
  struct GameClient::Robot *v9; // esi
  int v10; // edi
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  GameClient::SkillManager *v14; // eax
  unsigned int *Skill; // ebx
  struct BinStream *v16; // eax
  const struct Matrix *v17; // eax
  GameClient::SkillManager *v18; // eax
  struct GameClient::Skill *v19; // eax
  struct GameClient::Skill *v20; // ebx
  int v21; // ebp
  struct BinStream *v22; // eax
  double v23; // st7
  int v24; // ecx
  float v25; // edx
  unsigned int v26; // [esp-8h] [ebp-F0h]
  unsigned int v27; // [esp-8h] [ebp-F0h]
  int v28; // [esp-4h] [ebp-ECh]
  float v29; // [esp+8h] [ebp-E0h] BYREF
  unsigned int v30; // [esp+Ch] [ebp-DCh] BYREF
  int v31; // [esp+10h] [ebp-D8h] BYREF
  float v32; // [esp+14h] [ebp-D4h]
  int v33; // [esp+18h] [ebp-D0h] BYREF
  int v34; // [esp+1Ch] [ebp-CCh] BYREF
  float v35; // [esp+20h] [ebp-C8h] BYREF
  float v36; // [esp+24h] [ebp-C4h] BYREF
  _BYTE v37[68]; // [esp+28h] [ebp-C0h] BYREF
  _BYTE v38[64]; // [esp+6Ch] [ebp-7Ch] BYREF
  _BYTE v39[60]; // [esp+ACh] [ebp-3Ch] BYREF

  Stream = Event::GetStream(a3);
  v4 = *((_DWORD *)Stream + 3);
  v5 = v4 + 4;
  if ( (unsigned int)(v4 + 4) > *((_DWORD *)Stream + 2) )
  {
    v6 = LODWORD(v36);
  }
  else
  {
    v6 = *(_DWORD *)(v4 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v5;
  }
  v28 = v6;
  v7 = GameClient::RobotManager::Instance();
  result = GameClient::RobotManager::GetRobot(v7, v28);
  v9 = result;
  if ( result )
  {
    result = (struct GameClient::Robot *)(Event::GetSubID(a3) - 5113);
    switch ( (unsigned int)result )
    {
      case 0u:
        *(float *)&v33 = 0.0;
        *(float *)&v34 = 0.0;
        v35 = 0.0;
        *(float *)&v30 = 0.0;
        *(float *)&v31 = 0.0;
        v32 = 0.0;
        Event::GetStream(a3);
        sub_10017EB3((int)&v29);
        sub_10017EB3(a2);
        sub_1001436C(a1);
        (*(void (__thiscall **)(struct GameClient::Robot *, float *))(*(_DWORD *)v9 + 36))(v9, &v35);
        v12 = *(_DWORD *)v9;
        v13 = sub_10018E71(v38, (int)&v31);
        (*(void (__thiscall **)(struct GameClient::Robot *, int))(v12 + 40))(v9, v13);
        v26 = v30;
        v14 = GameClient::SkillManager::Instance();
        Skill = (unsigned int *)GameClient::SkillManager::GetSkill(v14, v26);
        if ( Skill )
        {
          v30 = *Skill;
          v16 = Event::GetStream(a3);
          (*(void (__thiscall **)(unsigned int *, struct BinStream *))(v30 + 12))(Skill, v16);
        }
        result = (struct GameClient::Robot *)(*(int (__thiscall **)(struct GameClient::Robot *))(*(_DWORD *)v9 + 76))(v9);
        break;
      case 1u:
        *(float *)&v30 = 0.0;
        *(float *)&v31 = 0.0;
        v32 = 0.0;
        *(float *)&v33 = 0.0;
        *(float *)&v34 = 0.0;
        v35 = 0.0;
        Event::GetStream(a3);
        sub_10017EB3((int)&v33);
        sub_10017EB3((int)&v29);
        sub_1001436C(a2);
        if ( !GameClient::WorldObject::IsLocal(v9) )
        {
          v17 = (const struct Matrix *)sub_10018E71(v39, (int)&v34);
          GameClient::Robot::MoveTo(v9, (const struct Vector *)&v31, v17);
        }
        v27 = v30;
        v18 = GameClient::SkillManager::Instance();
        v19 = GameClient::SkillManager::GetSkill(v18, v27);
        v20 = v19;
        if ( v19 )
        {
          v21 = *(_DWORD *)v19;
          v22 = Event::GetStream(a3);
          (*(void (__thiscall **)(struct GameClient::Skill *, struct BinStream *))(v21 + 12))(v20, v22);
        }
        result = (struct GameClient::Robot *)(*(int (__thiscall **)(struct GameClient::Robot *, unsigned int))(*(_DWORD *)v9 + 80))(
                                               v9,
                                               v30);
        break;
      case 0xBu:
        *(float *)&v30 = 0.0;
        *(float *)&v31 = 0.0;
        v32 = 0.0;
        *(float *)&v33 = 0.0;
        *(float *)&v34 = 0.0;
        v35 = 0.0;
        Event::GetStream(a3);
        sub_1001436C((int)&v30);
        sub_10017EB3((int)&v33);
        sub_10017EB3(a2);
        (*(void (__thiscall **)(struct GameClient::Robot *, int *))(*(_DWORD *)v9 + 36))(v9, &v31);
        v10 = *(_DWORD *)v9;
        v11 = sub_10018E71(v37, (int)&v33);
        (*(void (__thiscall **)(struct GameClient::Robot *, int))(v10 + 40))(v9, v11);
        result = (struct GameClient::Robot *)(*(int (__thiscall **)(struct GameClient::Robot *, float))(*(_DWORD *)v9 + 72))(
                                               v9,
                                               COERCE_FLOAT(LODWORD(v29)));
        break;
      case 0x13u:
        *(float *)&v30 = 0.0;
        *(float *)&v31 = 0.0;
        v32 = 0.0;
        Event::GetStream(a3);
        sub_1000B5C3((int)&v29);
        sub_1000B5C3((int)&v36);
        sub_10017EB3((int)&v30);
        result = (struct GameClient::Robot *)v30;
        *((float *)v9 + 82) = v29;
        v23 = v36;
        v24 = v31;
        v25 = v32;
        *((float *)v9 + 83) = v36;
        *((float *)v9 + 189) = v23;
        *((_DWORD *)v9 + 188) = result;
        *((_DWORD *)v9 + 189) = v24;
        *((float *)v9 + 190) = v25;
        break;
      default:
        return result;
    }
  }
  return result;
}
