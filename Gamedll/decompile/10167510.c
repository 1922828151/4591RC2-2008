/*
 * func-name: sub_10167510
 * func-address: 0x10167510
 * callers: 0x10015dd4
 * callees: 0x10006a19, 0x10009d68, 0x1000a984, 0x1000b203, 0x1000bebf, 0x1000f885, 0x10018e71
 */

struct GameClient::Skill *__userpurge sub_10167510@<eax>(int a1@<edi>, Event *a2)
{
  Event *v2; // ebx
  char Owner; // al
  struct GameClient::Skill *result; // eax
  struct BinStream *Stream; // eax
  int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  int v9; // edx
  float *v10; // ecx
  int v11; // edx
  int v12; // esi
  int *v13; // ecx
  int v14; // edx
  float v15; // ecx
  GameClient::SkillManager *v16; // eax
  GameClient::WorldObject **v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // eax
  GameClient::Robot *v20; // edi
  const struct Matrix *v21; // eax
  GameClient::WorldObject *v22; // edi
  struct BinStream *v23; // eax
  GameClient::WorldObject *v24; // ecx
  int v25; // eax
  float *v26; // eax
  double v27; // st7
  double v28; // st7
  char *v29; // edx
  GameClient::WorldObject *v30; // ebx
  void (__thiscall **v31)(GameClient::WorldObject *, int); // edi
  int v32; // eax
  GameClient::WorldObject *v33; // ebx
  void (__thiscall **v34)(GameClient::WorldObject *, int); // edi
  int v35; // eax
  GameClient::WorldObject *v36; // edi
  struct BinStream *v37; // eax
  GameClient::WorldObject *v38; // ebx
  void (__thiscall **v39)(GameClient::WorldObject *, int); // edi
  int v40; // eax
  float v41; // [esp+8h] [ebp-168h] BYREF
  float v42; // [esp+Ch] [ebp-164h]
  float v43; // [esp+10h] [ebp-160h]
  int v44; // [esp+14h] [ebp-15Ch] BYREF
  int v45; // [esp+18h] [ebp-158h] BYREF
  float v46; // [esp+1Ch] [ebp-154h]
  float v47; // [esp+20h] [ebp-150h]
  float v48; // [esp+24h] [ebp-14Ch]
  float v49; // [esp+28h] [ebp-148h]
  unsigned int v50; // [esp+2Ch] [ebp-144h]
  char v51[64]; // [esp+30h] [ebp-140h] BYREF
  char v52[68]; // [esp+70h] [ebp-100h] BYREF
  char v53; // [esp+B4h] [ebp-BCh] BYREF
  char v54; // [esp+F4h] [ebp-7Ch] BYREF
  char v55[64]; // [esp+130h] [ebp-40h] BYREF

  v2 = a2;
  Owner = Event::GetOwner(a2);
  result = (struct GameClient::Skill *)sub_10009D68(Owner);
  if ( result )
  {
    v41 = 0.0;
    v42 = 0.0;
    v43 = 0.0;
    *(float *)&v44 = 0.0;
    *(float *)&v45 = 0.0;
    v46 = 0.0;
    Stream = Event::GetStream(a2);
    v6 = *((_DWORD *)Stream + 3);
    v7 = *((_DWORD *)Stream + 2);
    if ( v6 + 4 > v7 )
    {
      v8 = v50;
    }
    else
    {
      v8 = *(_DWORD *)(v6 + *((_DWORD *)Stream + 1));
      *((_DWORD *)Stream + 3) = v6 + 4;
    }
    v9 = *((_DWORD *)Stream + 3);
    if ( v9 + 12 <= v7 )
    {
      v10 = (float *)(v9 + *((_DWORD *)Stream + 1));
      v41 = *v10;
      v42 = v10[1];
      v43 = v10[2];
      *((_DWORD *)Stream + 3) += 12;
    }
    v11 = *((_DWORD *)Stream + 3);
    v12 = v11 + 12;
    if ( (unsigned int)(v11 + 12) <= *((_DWORD *)Stream + 2) )
    {
      v13 = (int *)(v11 + *((_DWORD *)Stream + 1));
      v44 = *v13;
      v14 = v13[1];
      v15 = *((float *)v13 + 2);
      v45 = v14;
      v46 = v15;
      *((_DWORD *)Stream + 3) = v12;
    }
    v16 = GameClient::SkillManager::Instance();
    result = GameClient::SkillManager::GetSkill(v16, v8);
    v17 = (GameClient::WorldObject **)result;
    if ( result )
    {
      v18 = Event::GetSubID(a2) - 5010;
      if ( !v18 )
      {
        (*(void (__thiscall **)(GameClient::WorldObject *, float *))(*(_DWORD *)v17[5] + 36))(v17[5], &v41);
        v38 = v17[5];
        v39 = (void (__thiscall **)(GameClient::WorldObject *, int))(*(_DWORD *)v38 + 40);
        v40 = sub_10018E71(v55, (int)&v44);
        (*v39)(v38, v40);
        return (struct GameClient::Skill *)(*(int (__thiscall **)(GameClient::WorldObject *, unsigned int))(*(_DWORD *)v17[5] + 72))(
                                             v17[5],
                                             v8);
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        result = (struct GameClient::Skill *)(v19 - 1);
        if ( !result )
        {
          v20 = v17[5];
          if ( *((_DWORD *)v20 + 28) == 1 && !GameClient::WorldObject::IsLocal(v17[5]) )
          {
            v21 = (const struct Matrix *)sub_10018E71(v51, (int)&v44);
            GameClient::Robot::MoveTo(v20, (const struct Vector *)&v41, v21);
          }
          v22 = *v17;
          v23 = Event::GetStream(a2);
          (*((void (__thiscall **)(GameClient::WorldObject **, struct BinStream *))v22 + 3))(v17, v23);
          (*(void (__thiscall **)(GameClient::WorldObject *, unsigned int))(*(_DWORD *)v17[5] + 80))(v17[5], v8);
          return (struct GameClient::Skill *)(*((int (__thiscall **)(GameClient::WorldObject **))*v17 + 12))(v17);
        }
        return result;
      }
      v24 = v17[5];
      v25 = *((_DWORD *)v24 + 28);
      if ( v25 == 1 )
      {
        if ( GameClient::WorldObject::IsLocal(v24) )
        {
          v26 = (float *)v17[5];
          v27 = v26[6];
          v26 += 6;
          v47 = v27 - v41;
          v48 = v26[1] - v42;
          v28 = v26[2] - v43;
          v49 = v28;
          sub_1000A984();
          if ( v28 <= 2.0 )
            goto LABEL_27;
        }
        (*(void (__thiscall **)(GameClient::WorldObject *, float *, int))(*(_DWORD *)v17[5] + 36))(v17[5], &v41, a1);
        v29 = &v54;
      }
      else
      {
        if ( v25 != 2 )
        {
LABEL_27:
          v36 = *v17;
          v37 = Event::GetStream(v2);
          (*((void (__thiscall **)(GameClient::WorldObject **, struct BinStream *))v36 + 3))(v17, v37);
          (*(void (__thiscall **)(GameClient::WorldObject *, unsigned int))(*(_DWORD *)v17[5] + 76))(v17[5], v8);
          return (struct GameClient::Skill *)(*((int (__thiscall **)(GameClient::WorldObject **, GameClient::WorldObject *))*v17
                                              + 11))(
                                               v17,
                                               v17[5]);
        }
        if ( *((_DWORD *)v24 + 37) )
        {
          (*(void (__thiscall **)(GameClient::WorldObject *, float *))(*(_DWORD *)v24 + 36))(v24, &v41);
          v30 = v17[5];
          v31 = (void (__thiscall **)(GameClient::WorldObject *, int))(*(_DWORD *)v30 + 40);
          v32 = sub_10018E71(v52, (int)&v44);
          (*v31)(v30, v32);
LABEL_26:
          v2 = a2;
          goto LABEL_27;
        }
        (*(void (__thiscall **)(GameClient::WorldObject *, float *, int))(*(_DWORD *)v24 + 36))(v24, &v41, a1);
        v29 = &v53;
      }
      v33 = v17[5];
      v34 = (void (__thiscall **)(GameClient::WorldObject *, int))(*(_DWORD *)v33 + 40);
      v35 = sub_10018E71(v29, (int)&v45);
      (*v34)(v33, v35);
      goto LABEL_26;
    }
  }
  return result;
}
