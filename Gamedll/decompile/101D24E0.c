/*
 * func-name: ?Update@Skill@GameClient@@UAEXM@Z_0
 * func-address: 0x101d24e0
 * callers: 0x1000497b
 * callees: 0x1000194c, 0x10004421, 0x100077ed, 0x10009070, 0x1000b7e4, 0x1000bf05, 0x10010519, 0x10010c76, 0x10014669, 0x10015eab, 0x100163b0, 0x10018acf, 0x1001a5d2, 0x102c0ed0, 0x102c9ea8
 */

void __thiscall GameClient::Skill::Update(GameClient::Skill *this, float a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // ebx
  unsigned __int8 (__thiscall *v6)(GameClient::Skill *); // edx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  float v10; // edx
  int v11; // edi
  GameClient::Robot *v12; // eax
  GameClient::Robot *v13; // edi
  int v14; // eax
  GameClient::Establishment *v15; // eax
  GameClient::Establishment *v16; // edi
  int v17; // eax
  int v18; // ecx
  _DWORD *v19; // ecx
  double v20; // st7
  int *v21; // eax
  int v22; // edi
  int v23; // eax
  double v24; // st6
  int v25; // eax
  char v26; // bl
  int v27; // eax
  int v28; // [esp+8h] [ebp-80h]
  float v29; // [esp+8h] [ebp-80h]
  float v30; // [esp+20h] [ebp-68h] BYREF
  int v31; // [esp+24h] [ebp-64h] BYREF
  _DWORD v32[2]; // [esp+28h] [ebp-60h] BYREF
  _BYTE v33[12]; // [esp+30h] [ebp-58h] BYREF
  _BYTE v34[48]; // [esp+3Ch] [ebp-4Ch] BYREF
  _BYTE v35[16]; // [esp+6Ch] [ebp-1Ch] BYREF
  int v36; // [esp+84h] [ebp-4h]

  v3 = *((_DWORD *)this + 5);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 4);
    v5 = *((_DWORD *)this + 2);
    if ( v4 )
    {
      if ( v4 == 2 )
      {
        if ( *(_DWORD *)(v3 + 112) == 1 )
        {
          v12 = (GameClient::Robot *)_RTDynamicCast(
                                       v3,
                                       0,
                                       &GameClient::WorldObject `RTTI Type Descriptor',
                                       &GameClient::Robot `RTTI Type Descriptor',
                                       0);
          v13 = v12;
          if ( v12 )
          {
            v30 = *(float *)(v5 + 168) * a2;
            GameClient::Robot::UseEnergy(v12, v30);
            a2 = *(float *)(v5 + 172) * a2;
            GameClient::Robot::UseExEnergy(v13, a2);
          }
        }
        else
        {
          v14 = *(_DWORD *)(v5 + 112);
          if ( v14 == 2 )
          {
            v15 = (GameClient::Establishment *)_RTDynamicCast(
                                                 v3,
                                                 0,
                                                 &GameClient::WorldObject `RTTI Type Descriptor',
                                                 &GameClient::Establishment `RTTI Type Descriptor',
                                                 0);
            v16 = v15;
            if ( !v15 )
              return;
            v30 = *(float *)(v5 + 168) * a2;
            GameClient::Establishment::UseEstabEnergy(v15, v30);
            a2 = *(float *)(v5 + 172) * a2;
            GameClient::Establishment::UseEstabHyperEnergy(v16, a2);
          }
          else if ( v14 == 3 )
          {
            v17 = _RTDynamicCast(
                    v3,
                    0,
                    &GameClient::WorldObject `RTTI Type Descriptor',
                    &GameClient::Equip `RTTI Type Descriptor',
                    0);
            if ( !v17 )
              return;
            a2 = *(float *)(v17 + 188) - *(float *)(v5 + 172) * a2;
            if ( a2 < 0.0 )
              a2 = 0.0;
            *(float *)(v17 + 188) = a2;
          }
        }
        v18 = *((_DWORD *)this + 141);
        if ( v18 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 40))(v18) )
        {
          v19 = (_DWORD *)*((_DWORD *)this + 5);
          v20 = *((float *)this + 142);
          v31 = v19[6];
          v32[0] = v19[7];
          v21 = (int *)*((_DWORD *)this + 141);
          v32[1] = v19[8];
          v22 = *v21;
          v29 = v20;
          v23 = (*(int (__stdcall **)(_BYTE *, _DWORD))(*v19 + 44))(v33, LODWORD(v29));
          (*(void (__thiscall **)(_DWORD, _DWORD *, int))(v22 + 16))(*((_DWORD *)this + 141), v32, v23);
        }
      }
      else if ( v4 == 3 && *((float *)this + 16) > 0.0 )
      {
        a2 = *((float *)this + 16) - a2;
        v24 = a2;
        *((float *)this + 16) = a2;
        if ( v24 < 0.0 )
          *((float *)this + 16) = 0.0;
      }
    }
    else
    {
      v6 = *(unsigned __int8 (__thiscall **)(GameClient::Skill *))(*(_DWORD *)this + 24);
      *((float *)this + 14) = *((float *)this + 14) + a2;
      if ( v6(this) )
      {
        if ( *(float *)(v5 + 144) <= (double)*((float *)this + 14) )
        {
          v7 = *((_DWORD *)this + 121);
          *((_DWORD *)this + 4) = 1;
          if ( v7 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 40))(v7) )
              (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 121) + 44))(*((_DWORD *)this + 121));
          }
        }
      }
      else
      {
        v8 = *(_DWORD *)(v5 + 112);
        if ( v8 == 1 )
        {
          *(_BYTE *)(*((_DWORD *)this + 5) + 920) = 0;
        }
        else if ( v8 == 3 )
        {
          v9 = _RTDynamicCast(
                 *((_DWORD *)this + 5),
                 0,
                 &GameClient::WorldObject `RTTI Type Descriptor',
                 &GameClient::Item `RTTI Type Descriptor',
                 0);
          if ( v9 )
            *(_BYTE *)(v9 + 184) = 0;
        }
        *((_DWORD *)this + 4) = 3;
        if ( sub_1000194C(0) )
        {
          sub_100077ED((int)&a2, 9, 172, COERCE_INT(0.0), 1, 512);
          v10 = *((float *)this + 3);
          v11 = *((_DWORD *)this + 5) + 24;
          v36 = 0;
          v30 = v10;
          v28 = sub_102C0ED0(&v31);
          sub_10015EAB((int)&v30);
          sub_1000B7E4(v11);
          sub_1000B7E4(v28);
          v36 = -1;
          if ( a2 != 0.0 )
            Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(a2));
        }
      }
    }
    if ( sub_1000BF05() )
    {
      if ( *(_BYTE *)(v5 + 505) )
      {
        v25 = *((_DWORD *)this + 5);
        if ( v25 )
        {
          if ( *(_DWORD *)(v5 + 112) == 1 )
          {
            v26 = *(_BYTE *)(v25 + 700);
            if ( v26 == (unsigned __int8)sub_100163B0() )
            {
              v27 = sub_100163B0();
              LOBYTE(v27) = (_BYTE)v27 == 0;
              sub_1001A5D2(v27);
            }
          }
        }
      }
      if ( (unsigned __int8)sub_100163B0() )
      {
        sub_10014669(v34);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _BYTE *, _DWORD))(**((_DWORD **)this + 5) + 88))(
               *((_DWORD *)this + 5),
               *((_DWORD *)this + 2) + 368,
               v34,
               0) )
        {
          sub_10010519((int)v34, (int)v35);
        }
        else
        {
          sub_10010519(*((_DWORD *)this + 5) + 36, *((_DWORD *)this + 5) + 24);
        }
      }
    }
  }
}
