/*
 * func-name: sub_1018F740
 * func-address: 0x1018f740
 * callers: 0x1000b677
 * callees: 0x100011ea, 0x10001573, 0x10001b0e, 0x10002162, 0x10002abd, 0x100034b8, 0x10006a19, 0x10006c21, 0x1000742d, 0x100084f4, 0x1000921e, 0x1000a3a8, 0x1000aff6, 0x1000b203, 0x1000b5c3, 0x1000bc80, 0x1000eb9c, 0x1000ed13, 0x1000f885, 0x10011531, 0x1001344e, 0x1001436c, 0x10017369, 0x10017eb3, 0x10018ca0, 0x10018e71, 0x10019623
 */

void __userpurge sub_1018F740(int a1@<ebx>, Event *a2)
{
  struct BinStream *Stream; // eax
  int v3; // ecx
  int v4; // edx
  unsigned int v5; // ecx
  GameClient::RobotManager *v6; // eax
  struct GameClient::Robot *Robot; // esi
  char v8; // bl
  struct BinStream *v9; // eax
  int v10; // ebx
  struct BinStream *v11; // eax
  int v12; // ebx
  int v13; // eax
  GameClient::Item *v14; // ecx
  GameClient::SkillManager *v15; // eax
  struct GameClient::Skill *Skill; // eax
  struct GameClient::Skill *v17; // esi
  int v18; // ebx
  struct BinStream *v19; // eax
  int v20; // ebx
  int v21; // eax
  GameClient::Item *v22; // ecx
  GameClient::SkillManager *v23; // eax
  GameClient::EquipManager *v24; // eax
  float *SystemPart; // esi
  GameClient::EquipManager *v26; // eax
  struct GameClient::SystemPart *v27; // esi
  unsigned int v28; // eax
  GameClient::EquipManager *v29; // eax
  GameClient::Weapon *v30; // eax
  unsigned int v31; // ebx
  struct BinStream *v32; // eax
  unsigned int v33; // edi
  GameClient::FlyweightManager *v34; // eax
  unsigned int v35; // edi
  GameClient::EquipManager *v36; // eax
  struct GameClient::SystemPart *v37; // eax
  GameClient::FlyweightManager *v38; // eax
  unsigned int v39; // [esp-14h] [ebp-C4h]
  unsigned int v40; // [esp-10h] [ebp-C0h]
  unsigned int v41; // [esp-Ch] [ebp-BCh]
  bool v42; // [esp-8h] [ebp-B8h]
  unsigned int v43; // [esp-8h] [ebp-B8h]
  unsigned int v44; // [esp-8h] [ebp-B8h]
  unsigned int v45; // [esp-8h] [ebp-B8h]
  unsigned int v46; // [esp-8h] [ebp-B8h]
  unsigned int v47; // [esp-8h] [ebp-B8h]
  struct BinStream *v48; // [esp-8h] [ebp-B8h]
  int v49; // [esp-4h] [ebp-B4h]
  unsigned int v50; // [esp+8h] [ebp-A8h] BYREF
  unsigned int v51; // [esp+Ch] [ebp-A4h] BYREF
  char v52; // [esp+13h] [ebp-9Dh] BYREF
  bool v53[4]; // [esp+14h] [ebp-9Ch] BYREF
  int v54; // [esp+18h] [ebp-98h] BYREF
  float v55; // [esp+1Ch] [ebp-94h] BYREF
  float v56; // [esp+20h] [ebp-90h]
  int v57; // [esp+24h] [ebp-8Ch] BYREF
  float v58; // [esp+28h] [ebp-88h] BYREF
  float v59; // [esp+2Ch] [ebp-84h]
  _BYTE v60[64]; // [esp+30h] [ebp-80h] BYREF
  _BYTE v61[64]; // [esp+70h] [ebp-40h] BYREF

  Stream = Event::GetStream(a2);
  v3 = *((_DWORD *)Stream + 3);
  v4 = v3 + 4;
  if ( (unsigned int)(v3 + 4) > *((_DWORD *)Stream + 2) )
  {
    v5 = v51;
  }
  else
  {
    v5 = *(_DWORD *)(v3 + *((_DWORD *)Stream + 1));
    *((_DWORD *)Stream + 3) = v4;
  }
  v49 = v5;
  v6 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v6, v49);
  if ( Robot )
  {
    switch ( Event::GetSubID(a2) )
    {
      case 0x13F0u:
        Event::GetStream(a2);
        sub_100011EA((int)v53);
        Event::GetStream(a2);
        sub_100011EA((int)&v52);
        v8 = v52;
        if ( v52 || !GameClient::WorldObject::IsLocal(Robot) )
        {
          v42 = v53[0];
          v9 = Event::GetStream(a2);
          GameClient::Robot::WriteSystemPartSnapshot(Robot, v9, v42);
          if ( v8 )
          {
            if ( GameClient::WorldObject::IsLocal(Robot) )
            {
              v10 = *(_DWORD *)Robot;
              v11 = Event::GetStream(a2);
              (*(void (__thiscall **)(struct GameClient::Robot *, struct BinStream *))(v10 + 16))(Robot, v11);
            }
          }
        }
        break;
      case 0x13F1u:
        Event::GetStream(a2);
        sub_10002162((int)&v50);
        sub_10002162((int)v53);
        GameClient::Robot::SetCurEquip(Robot, v50, *(int *)v53);
        break;
      case 0x13FEu:
        *(float *)&v54 = 0.0;
        v55 = 0.0;
        v56 = 0.0;
        *(float *)&v57 = 0.0;
        v58 = 0.0;
        v59 = 0.0;
        Event::GetStream(a2);
        sub_10017EB3((int)&v57);
        sub_10017EB3((int)&v50);
        sub_1001436C(a1);
        (*(void (__thiscall **)(struct GameClient::Robot *, float *))(*(_DWORD *)Robot + 36))(Robot, &v55);
        v12 = *(_DWORD *)Robot;
        v13 = sub_10018E71(v60, (int)&v57);
        (*(void (__thiscall **)(struct GameClient::Robot *, int))(v12 + 40))(Robot, v13);
        v14 = (GameClient::Item *)*((_DWORD *)Robot + 57);
        if ( v14 )
          GameClient::Item::EnableSkill(v14);
        v43 = v50;
        v15 = GameClient::SkillManager::Instance();
        Skill = GameClient::SkillManager::GetSkill(v15, v43);
        v17 = Skill;
        if ( Skill )
          goto LABEL_15;
        break;
      case 0x13FFu:
        *(float *)&v57 = 0.0;
        v58 = 0.0;
        v59 = 0.0;
        *(float *)&v54 = 0.0;
        v55 = 0.0;
        v56 = 0.0;
        Event::GetStream(a2);
        sub_10017EB3((int)&v54);
        sub_10017EB3((int)&v50);
        sub_1001436C(a1);
        (*(void (__thiscall **)(struct GameClient::Robot *, float *))(*(_DWORD *)Robot + 36))(Robot, &v58);
        v20 = *(_DWORD *)Robot;
        v21 = sub_10018E71(v61, (int)&v54);
        (*(void (__thiscall **)(struct GameClient::Robot *, int))(v20 + 40))(Robot, v21);
        v22 = (GameClient::Item *)*((_DWORD *)Robot + 57);
        if ( v22 )
          GameClient::Item::DisableSkill(v22);
        v44 = v50;
        v23 = GameClient::SkillManager::Instance();
        Skill = GameClient::SkillManager::GetSkill(v23, v44);
        v17 = Skill;
        if ( Skill )
        {
LABEL_15:
          v18 = *(_DWORD *)Skill;
          v19 = Event::GetStream(a2);
          (*(void (__thiscall **)(struct GameClient::Skill *, struct BinStream *))(v18 + 12))(v17, v19);
        }
        break;
      case 0x1400u:
        GameClient::Robot::SpecialUse(Robot);
        break;
      case 0x1401u:
        GameClient::Robot::StopSpecialUse(Robot);
        break;
      case 0x1402u:
        if ( !GameClient::WorldObject::IsLocal(Robot) )
        {
          Event::GetStream(a2);
          sub_1001436C((int)&v50);
          v45 = v50;
          v24 = GameClient::EquipManager::Instance();
          SystemPart = (float *)GameClient::EquipManager::GetSystemPart(v24, v45);
          if ( SystemPart )
          {
            *(float *)&v54 = 0.0;
            v55 = 0.0;
            v56 = 0.0;
            *(float *)&v57 = 0.0;
            v58 = 0.0;
            v59 = 0.0;
            Event::GetStream(a2);
            sub_10002162((int)v53);
            sub_10017EB3((int)&v54);
            sub_10017EB3((int)&v57);
            sub_10002162((int)&v50);
            sub_1000B5C3((int)&v51);
            GameClient::Weapon::Shoot(
              (GameClient::Weapon *)SystemPart,
              *(int *)v53,
              (const struct Vector *)&v54,
              (const struct Vector *)&v57,
              v50);
            SystemPart[47] = *(float *)&v51;
          }
        }
        break;
      case 0x1403u:
        Event::GetStream(a2);
        sub_1001436C((int)&v51);
        sub_10002162((int)&v50);
        v47 = v51;
        v29 = GameClient::EquipManager::Instance();
        v30 = GameClient::EquipManager::GetSystemPart(v29, v47);
        if ( v30 )
          GameClient::Weapon::SwitchWeaponPattern(v30, v50);
        break;
      case 0x1405u:
        Event::GetStream(a2);
        sub_1001436C((int)&v51);
        v46 = v51;
        v26 = GameClient::EquipManager::Instance();
        v27 = GameClient::EquipManager::GetSystemPart(v26, v46);
        if ( v27 )
        {
          Event::GetStream(a2);
          sub_10017369((int)&v51);
          sub_1000B5C3((int)&v50);
          v28 = v51;
          *((float *)v27 + 47) = *(float *)&v50;
          *((_DWORD *)v27 + 186) = v28;
        }
        break;
      case 0x1406u:
        Event::GetStream(a2);
        sub_1001436C((int)&v50);
        sub_1001436C((int)&v51);
        v31 = *((_DWORD *)Robot + 4);
        v32 = Event::GetStream(a2);
        v33 = v51;
        v48 = v32;
        v40 = v51;
        v39 = v50;
        v34 = GameClient::FlyweightManager::Instance();
        GameClient::FlyweightManager::NewWorldObject(v34, v39, v40, v31, v48);
        GameClient::Robot::AddTempEquip(Robot, v33, -1);
        break;
      case 0x1407u:
        Event::GetStream(a2);
        sub_1001436C((int)&v51);
        v35 = v51;
        if ( *(float *)&v51 != NAN )
        {
          GameClient::Robot::RemoveEquip(Robot, v51);
          v36 = GameClient::EquipManager::Instance();
          v37 = GameClient::EquipManager::GetSystemPart(v36, v35);
          if ( v37 )
          {
            v41 = *((_DWORD *)v37 + 1);
            v38 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::DeleteInstance(v38, v41, v35);
          }
        }
        break;
      default:
        return;
    }
  }
}
