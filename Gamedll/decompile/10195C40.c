/*
 * func-name: ?UpdateInput@Weapon@GameClient@@UAEXXZ_0
 * func-address: 0x10195c40
 * callers: 0x10012625
 * callees: 0x10001b04, 0x10004377, 0x1000516e, 0x100077ed, 0x10009a84, 0x1000abff, 0x1000bf05, 0x1000c5bd, 0x10010519, 0x10013647, 0x10013d13, 0x10014669, 0x100163b0, 0x1001a5d2
 */

void __thiscall GameClient::Weapon::UpdateInput(GameClient::Weapon *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // edi
  int v5; // ecx
  int v6; // edi
  Game *v7; // eax
  bool HasAnyGUIopen; // bl
  Input *v9; // eax
  GameClient::Robot *v10; // ecx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int (__thiscall *v16)(int, int, _BYTE *, _DWORD); // eax
  char v17; // bl
  int v18; // ecx
  int v19; // ecx
  Input *v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  float v25; // eax
  Input *v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // edi
  void *v34; // eax
  int v35; // ecx
  float *v36; // ecx
  int v37; // ecx
  void *v38; // eax
  int v39; // ecx
  void (__stdcall *v40)(_DWORD); // eax
  int v41; // [esp+10h] [ebp-C8h]
  float v42; // [esp+30h] [ebp-A8h] BYREF
  float v43; // [esp+34h] [ebp-A4h] BYREF
  float v44; // [esp+38h] [ebp-A0h] BYREF
  int v45[3]; // [esp+3Ch] [ebp-9Ch] BYREF
  int v46[3]; // [esp+48h] [ebp-90h] BYREF
  _BYTE v47[28]; // [esp+54h] [ebp-84h] BYREF
  _BYTE v48[28]; // [esp+70h] [ebp-68h] BYREF
  _BYTE v49[48]; // [esp+8Ch] [ebp-4Ch] BYREF
  _DWORD v50[4]; // [esp+BCh] [ebp-1Ch] BYREF
  int v51; // [esp+D4h] [ebp-4h]

  v2 = dword_103B67B4;
  if ( (dword_103B6150 & 1) == 0 )
  {
    v3 = *(_DWORD *)(dword_103B67B4 + 8);
    dword_103B6150 |= 1u;
    v4 = dword_103B67B4 + 8;
    if ( !v3 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v3) >> 2) <= 0x42 )
    {
      _invalid_parameter_noinfo();
      v2 = dword_103B67B4;
    }
    dword_103B614C = *(_DWORD *)(*(_DWORD *)v4 + 264);
  }
  if ( (dword_103B6150 & 2) == 0 )
  {
    v5 = *(_DWORD *)(v2 + 8);
    dword_103B6150 |= 2u;
    v6 = v2 + 8;
    if ( !v5 || (unsigned int)((*(_DWORD *)(v2 + 12) - v5) >> 2) <= 0x43 )
      _invalid_parameter_noinfo();
    dword_103B6148 = *(_DWORD *)(*(_DWORD *)v6 + 268);
  }
  v7 = Game::Instance();
  HasAnyGUIopen = Game::HasAnyGUIopen(v7);
  if ( HasAnyGUIopen )
  {
LABEL_36:
    v22 = *((_DWORD *)this + 186);
    if ( v22 == 2 )
    {
      v23 = *((_DWORD *)this + 285);
      if ( v23 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 40))(v23) )
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 285) + 44))(*((_DWORD *)this + 285));
      if ( sub_1000BF05() && (unsigned __int8)sub_100163B0() )
        sub_1001A5D2(0);
      v24 = *(_DWORD *)this;
      if ( *(float *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2184) > (double)*((float *)this + 227) )
      {
        (*(void (__thiscall **)(GameClient::Weapon *))(v24 + 156))(this);
        *((float *)this + 47) = *((float *)this + 47) + *((float *)this + 228);
        *((float *)this + 228) = 0.0;
        *((float *)this + 227) = 0.0;
      }
      else
      {
        (*(void (__thiscall **)(GameClient::Weapon *))(v24 + 128))(this);
      }
    }
    else if ( v22 == 1 )
    {
      (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 156))(this);
      sub_100077ED((int)&v42, 9, 29, COERCE_INT(0.0), 1, 512);
      v25 = *((float *)this + 3);
      v51 = 1;
      v44 = 0.0;
      v43 = v25;
      sub_10001B04((int)&v43);
      sub_10009A84((int)&v44);
      j_nullsub_44((int)&v42);
      v51 = -1;
      if ( v42 != 0.0 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v42));
    }
    if ( !HasAnyGUIopen )
    {
      v26 = (Input *)Input::Instance(dword_103B6148);
      if ( Input::ControlJustPressed(v26) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 124))(this) )
          (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 140))(this);
      }
    }
    goto LABEL_53;
  }
  v9 = (Input *)Input::Instance(dword_103B614C);
  if ( !Input::ControlJustPressed(v9)
    || (v10 = (GameClient::Robot *)*((_DWORD *)this + 37)) == 0
    || !*((_BYTE *)v10 + 700)
    || !GameClient::Robot::CanUseWeapon(v10) )
  {
    v20 = (Input *)Input::Instance(dword_103B614C);
    if ( Input::ControlDown(v20) )
    {
      v21 = *((_DWORD *)this + 37);
      if ( v21 )
      {
        if ( *(_BYTE *)(v21 + 700) )
          goto LABEL_53;
      }
    }
    goto LABEL_36;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 124))(this) )
  {
    v19 = *((_DWORD *)this + 139);
    if ( !v19 || (double)*(int *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2128) <= *((float *)this + 47) )
      goto LABEL_53;
LABEL_32:
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v19 + 36))(0, 0.75);
    goto LABEL_53;
  }
  v11 = *((_DWORD *)this + 185);
  v12 = *((_DWORD *)this + 2);
  if ( *(float *)(160 * v11 + v12 + 2180) > 0.0 )
  {
    v13 = *((_DWORD *)this + 285);
    *((float *)this + 228) = 0.0;
    *((float *)this + 227) = 0.0;
    *((_DWORD *)this + 186) = 2;
    if ( v13 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 40))(v13) )
      (*(void (__stdcall **)(int, _DWORD))(**((_DWORD **)this + 285) + 36))(1, 0.75);
    if ( sub_1000BF05() )
    {
      sub_1001A5D2(1);
      sub_10014669(v49);
      v14 = std::operator+<char>(v47, *((_DWORD *)this + 2) + 2440, &unk_1031541C);
      v15 = *((_DWORD *)this + 45);
      v41 = v14;
      v16 = *(int (__thiscall **)(int, int, _BYTE *, _DWORD))(*(_DWORD *)v15 + 120);
      v51 = 0;
      v17 = v16(v15, v41, v49, 0);
      v51 = -1;
      std::string::~string(v47);
      if ( v17 )
        sub_10010519((int)v49, (int)v50);
      else
        sub_10010519((int)this + 36, (int)this + 24);
    }
    goto LABEL_53;
  }
  if ( *(float *)(32 * (5 * v11 + 70) + v12) <= 0.0 )
  {
    (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 128))(this);
    goto LABEL_53;
  }
  v18 = *((_DWORD *)this + 285);
  *((_DWORD *)this + 186) = 4;
  if ( v18 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 40))(v18) )
  {
    v19 = *((_DWORD *)this + 285);
    goto LABEL_32;
  }
LABEL_53:
  v27 = *((_DWORD *)this + 186);
  if ( v27 == 4 )
  {
    v28 = *((_DWORD *)this + 185);
    if ( *(float *)(32 * (5 * v28 + 70) + *((_DWORD *)this + 2)) >= (double)*((float *)this + 18 * v28 + 191) )
    {
      *((float *)this + 18 * v28 + 191) = GDeltaTime + *((float *)this + 18 * v28 + 191);
      v29 = *((_DWORD *)this + 185);
      v30 = *((_DWORD *)this + 2);
      v31 = 32 * (5 * v29 + 70);
      if ( *(float *)(v31 + v30) < (double)*((float *)this + 18 * v29 + 191) )
      {
        *((float *)this + 18 * v29 + 191) = *(float *)(v31 + v30);
        (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 128))(this);
        v32 = *((_DWORD *)this + 285);
        if ( v32 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v32 + 40))(v32) )
            (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 285) + 44))(*((_DWORD *)this + 285));
        }
      }
      v33 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)(v33 + 2068) )
      {
        v42 = *((float *)this + 18 * *((_DWORD *)this + 185) + 191) * *(float *)(v33 + 2076);
        if ( *(float *)(v33 + 2080) < (double)v42 )
          v42 = *(float *)(v33 + 2080);
        v34 = (void *)std::operator+<char>(v47, v33 + 2048, &unk_10315420);
        *(float *)v45 = 0.0;
        *(float *)&v45[1] = 0.0;
        *(float *)&v45[2] = v42;
        v51 = 2;
        GameClient::AdapterActor::SetNodeSpeed(v34, (int)v45);
        v51 = -1;
        std::string::~string(v47);
        v35 = *((_DWORD *)this + 285);
        if ( v35 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v35 + 40))(v35) )
          {
LABEL_76:
            v40 = *(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 285) + 20);
            v43 = v42 / *(float *)(v33 + 2080);
            v40(LODWORD(v43));
          }
        }
      }
    }
  }
  else if ( !v27 )
  {
    v36 = (float *)((char *)this + 72 * *((_DWORD *)this + 185) + 764);
    if ( *v36 > 0.0 )
    {
      *v36 = *v36 - GDeltaTime;
      if ( *((float *)this + 18 * *((_DWORD *)this + 185) + 191) < 0.0 )
      {
        *((float *)this + 18 * *((_DWORD *)this + 185) + 191) = 0.0;
        v37 = *((_DWORD *)this + 285);
        if ( v37 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v37 + 40))(v37) )
            (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 285) + 44))(*((_DWORD *)this + 285));
        }
      }
      v33 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)(v33 + 2068) )
      {
        v42 = *((float *)this + 18 * *((_DWORD *)this + 185) + 191) * *(float *)(v33 + 2076);
        if ( *(float *)(v33 + 2080) < (double)v42 )
          v42 = *(float *)(v33 + 2080);
        v38 = (void *)std::operator+<char>(v48, v33 + 2048, &unk_10315424);
        *(float *)v46 = 0.0;
        *(float *)&v46[1] = 0.0;
        *(float *)&v46[2] = v42;
        v51 = 3;
        GameClient::AdapterActor::SetNodeSpeed(v38, (int)v46);
        v51 = -1;
        std::string::~string(v48);
        v39 = *((_DWORD *)this + 285);
        if ( v39 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v39 + 40))(v39) )
            goto LABEL_76;
        }
      }
    }
  }
  GameClient::Equip::UpdateInput(this);
}
