/*
 * func-name: sub_10038260
 * func-address: 0x10038260
 * callers: 0x10014f06
 * callees: 0x10001dfc, 0x100024fa, 0x100028c4, 0x100029cd, 0x1000423c, 0x1000a3a8, 0x1000a830, 0x1000a984, 0x1000ceeb, 0x100127c9, 0x10013e2b, 0x102c2990, 0x102c9d50, 0x102c9dbc, 0x102c9ea8
 */

void __thiscall sub_10038260(int this, float a2)
{
  double v3; // st7
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // ebx
  float v11; // edi
  _DWORD *v12; // eax
  GameClient::Robot *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  float v20; // ecx
  float v21; // edx
  float *v22; // eax
  float v23; // edx
  float v24; // eax
  double v25; // st7
  int v26; // edx
  float v27; // [esp+14h] [ebp-98h] BYREF
  float v28; // [esp+18h] [ebp-94h]
  float v29; // [esp+1Ch] [ebp-90h]
  float v30; // [esp+20h] [ebp-8Ch] BYREF
  int v31; // [esp+24h] [ebp-88h]
  int v32; // [esp+28h] [ebp-84h]
  float v33; // [esp+2Ch] [ebp-80h] BYREF
  void *v34; // [esp+30h] [ebp-7Ch]
  float v35; // [esp+34h] [ebp-78h]
  int v36; // [esp+38h] [ebp-74h]
  int v37[3]; // [esp+3Ch] [ebp-70h] BYREF
  _DWORD v38[5]; // [esp+48h] [ebp-64h] BYREF
  _BYTE v39[68]; // [esp+5Ch] [ebp-50h] BYREF
  int v40; // [esp+A8h] [ebp-4h]

  v27 = a2 + *(float *)(this + 408);
  v3 = v27;
  *(float *)(this + 408) = v27;
  if ( *(float *)(this + 404) > v3 )
    return;
  v4 = *(_DWORD **)(this + 304);
  *(float *)(this + 408) = 0.0;
  v5 = v4[90];
  if ( v5 == 2 )
  {
    v6 = v4[57];
    if ( v6 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6);
    GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 0);
    *(_DWORD *)(this + 12) = this + 40;
    return;
  }
  if ( v5 != 1 )
  {
    if ( !*(_DWORD *)(this + 400) )
    {
      v38[0] = v4[6];
      v38[1] = v4[7];
      v8 = v4[8];
      *(float *)&v38[3] = 100.0;
      v38[2] = v8;
      *(float *)&v38[4] = 3.4028235e38;
      v34 = 0;
      v35 = 0.0;
      v36 = 0;
      v40 = 0;
      GameClient::RobotManager::Instance();
      sub_1000A830((int)v38, (int)&v33);
      sub_1000CEEB((int)&v27);
      v9 = sub_100028C4((int)&v30);
      if ( (unsigned __int8)sub_100127C9(v9) )
      {
        v10 = v27;
        v11 = v28;
        while ( 1 )
        {
          if ( v10 == 0.0 )
            _invalid_parameter_noinfo();
          if ( LODWORD(v11) >= *(_DWORD *)(LODWORD(v10) + 8) )
            _invalid_parameter_noinfo();
          v12 = *(_DWORD **)LODWORD(v11);
          v13 = *(GameClient::Robot **)(this + 304);
          if ( *(_DWORD *)(*(_DWORD *)LODWORD(v11) + 12) == *((_DWORD *)v13 + 3) )
            goto LABEL_22;
          if ( *(_DWORD *)(v12[5] + 48) == *(_DWORD *)(*(_DWORD *)(this + 300) + 48) )
            break;
          if ( !v12[90] )
          {
            *(_DWORD *)(this + 400) = v12[3];
            goto LABEL_28;
          }
          v10 = v27;
LABEL_23:
          if ( LODWORD(v11) >= *(_DWORD *)(LODWORD(v10) + 8) )
            _invalid_parameter_noinfo();
          LODWORD(v11) += 4;
          v28 = v11;
          v14 = sub_100028C4((int)&v30);
          if ( !(unsigned __int8)sub_100127C9(v14) )
            goto LABEL_28;
        }
        v10 = v27;
LABEL_22:
        GameClient::Robot::Move(v13, 0);
        goto LABEL_23;
      }
LABEL_28:
      v40 = -1;
      if ( v34 )
        operator delete(v34);
    }
    v15 = sub_10001DFC(*(_DWORD *)(this + 400));
    v16 = _RTDynamicCast(
            v15,
            0,
            &GameClient::WorldObject `RTTI Type Descriptor',
            &GameClient::Robot `RTTI Type Descriptor',
            0);
    if ( v16 )
    {
      if ( *(_DWORD *)(v16 + 360) != 2 )
      {
        v20 = *(float *)(v16 + 24);
        v21 = *(float *)(v16 + 28);
        v29 = *(float *)(v16 + 32);
        v22 = (float *)(*(_DWORD *)(this + 304) + 24);
        v27 = v20;
        v33 = *v22;
        v28 = v21;
        v23 = v22[1];
        v24 = v22[2];
        v30 = v20 - v33;
        v34 = (void *)LODWORD(v23);
        v35 = v24;
        *(float *)v37 = v30;
        *(float *)&v31 = v28 - v23;
        v37[1] = v31;
        *(float *)&v32 = v29 - v24;
        v37[2] = v32;
        sub_100029CD();
        if ( !(unsigned __int8)sub_10013E2B() )
        {
          sub_102C2990(v39, (int)v37);
          (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 304) + 40))(*(_DWORD *)(this + 304), v39);
        }
        v27 = *(float *)&v31 * *(float *)&v31 + v30 * v30 + *(float *)&v32 * *(float *)&v32;
        v27 = sqrt(v27);
        v25 = v27;
        if ( v27 > 40.0 )
        {
          GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 1u);
          return;
        }
        sub_1000A984();
        if ( v25 < 10.0 )
        {
          sub_1000423C();
          GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 2u);
          return;
        }
        sub_1000423C();
        v26 = rand() % 125 + 1;
        if ( v26 >= 1 )
        {
          if ( v26 < 50 )
            return;
          if ( v26 < 75 )
          {
            GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 4u);
            return;
          }
          if ( v26 < 100 )
          {
            GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 8u);
            return;
          }
        }
LABEL_34:
        GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 0);
        return;
      }
      v19 = *(_DWORD *)(this + 304);
      *(_DWORD *)(this + 400) = 0;
      v18 = *(_DWORD *)(v19 + 228);
    }
    else
    {
      v17 = *(_DWORD *)(this + 304);
      *(_DWORD *)(this + 400) = 0;
      v18 = *(_DWORD *)(v17 + 228);
    }
    if ( v18 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 132))(v18);
    goto LABEL_34;
  }
  v7 = v4[57];
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 132))(v7);
  GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 0);
}
