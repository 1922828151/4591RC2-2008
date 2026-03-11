/*
 * func-name: ?Update@Establishment@GameClient@@UAEXM@Z_0
 * func-address: 0x101a3340
 * callers: 0x10007ff9
 * callees: 0x1000194c, 0x10002f7c, 0x10005ad3, 0x10009e03, 0x1000a3a8, 0x1000ae2a, 0x1000bf05, 0x1000ed13, 0x10010839, 0x10010ebf, 0x10011577, 0x10012107, 0x100163b0, 0x1001a5d2, 0x102c23d0, 0x102c9dbc
 */

void __thiscall GameClient::Establishment::Update(GameClient::Establishment *this, float a2)
{
  int v3; // eax
  int v4; // eax
  GameClient::RobotManager *v5; // eax
  float *Robot; // eax
  float *v7; // eax
  unsigned int i; // ebx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int j; // ebx
  int v14; // ecx
  _DWORD *v15; // esi
  int v16; // ecx
  int v17; // ecx
  _DWORD *v18; // eax
  unsigned int k; // esi
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // ebp
  int v31; // [esp+0h] [ebp-78h]
  bool v32; // [esp+16h] [ebp-62h]
  bool v33; // [esp+17h] [ebp-61h]
  float v34; // [esp+18h] [ebp-60h]
  float v35; // [esp+18h] [ebp-60h]
  float v36; // [esp+18h] [ebp-60h]
  float v37; // [esp+18h] [ebp-60h]
  _DWORD *v38; // [esp+1Ch] [ebp-5Ch]
  float v39; // [esp+20h] [ebp-58h] BYREF
  float v40; // [esp+24h] [ebp-54h]
  float v41; // [esp+28h] [ebp-50h]
  _BYTE v42[12]; // [esp+2Ch] [ebp-4Ch] BYREF
  _DWORD v43[16]; // [esp+38h] [ebp-40h] BYREF

  v3 = *((_DWORD *)this + 49);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 50) - v3) >> 2 )
    {
      v4 = sub_1000194C(0);
      if ( v4 )
      {
        v31 = *(_DWORD *)(v4 + 292);
        v5 = GameClient::RobotManager::Instance();
        Robot = (float *)GameClient::RobotManager::GetRobot(v5, v31);
        if ( Robot )
        {
          v39 = *((float *)this + 6) - Robot[6];
          v40 = *((float *)this + 7) - Robot[7];
          v41 = *((float *)this + 8) - Robot[8];
          v34 = v40 * v40 + v39 * v39 + v41 * v41;
          v35 = sqrt(v34);
          v32 = v35 < 20.0;
          v7 = (float *)(*(int (__thiscall **)(GameClient::Establishment *, float *))(*(_DWORD *)this + 44))(this, &v39);
          v36 = v7[1] * v7[1] + *v7 * *v7 + v7[2] * v7[2];
          v37 = sqrt(v36);
          v33 = *(float *)(*((_DWORD *)this + 2) + 468) < (double)v37;
          for ( i = 0; ; ++i )
          {
            while ( 1 )
            {
              v9 = *((_DWORD *)this + 61);
              if ( !v9 || i >= (*((_DWORD *)this + 62) - v9) >> 2 )
                goto LABEL_19;
              if ( sub_1000BF05() )
                break;
LABEL_18:
              ++i;
            }
            if ( !v32 || v33 || *(_DWORD *)(*(_DWORD *)sub_10010839(i) + 76) != -1 || *((_BYTE *)this + 372) )
            {
              if ( (unsigned __int8)sub_100163B0() )
                sub_1001A5D2(0);
              goto LABEL_18;
            }
            if ( !(unsigned __int8)sub_100163B0() )
              sub_1001A5D2(1);
            sub_10002F7C((int)this + 36);
            v10 = sub_10005AD3(i);
            v11 = sub_10009E03((int)&v39, v10);
            v12 = sub_10012107((int)v42, v11);
            sub_1000AE2A(v12);
          }
        }
      }
    }
  }
LABEL_19:
  for ( j = 0; ; ++j )
  {
    v14 = *((_DWORD *)this + 49);
    if ( !v14 || j >= (*((_DWORD *)this + 50) - v14) >> 2 )
      break;
    v15 = *(_DWORD **)(*((_DWORD *)this + 49) + 4 * j);
    v16 = *((_DWORD *)this + 53);
    if ( v16 )
    {
      if ( j < (*((_DWORD *)this + 54) - v16) >> 2 )
      {
        v38 = *(_DWORD **)(*((_DWORD *)this + 53) + 4 * j);
        if ( v38 )
        {
          qmemcpy(v15 + 28, (const void *)sub_102C23D0(v43), 0x40u);
          v15[25] = v38[53];
          v15[26] = v38[54];
          v15[27] = v38[55];
        }
      }
    }
    v17 = *((_DWORD *)this + 57);
    if ( v17 )
    {
      if ( j < (*((_DWORD *)this + 58) - v17) >> 2 )
      {
        v18 = *(_DWORD **)(*((_DWORD *)this + 57) + 4 * j);
        if ( v18 )
        {
          v15[48] = v18[53];
          v15[49] = v18[54];
          v15[50] = v18[55];
          qmemcpy(v15 + 51, (const void *)sub_102C23D0(v43), 0x40u);
        }
      }
    }
    GameClient::Seat::Update((GameClient::Seat *)v15, a2);
  }
  for ( k = 0; ; ++k )
  {
    v20 = *((_DWORD *)this + 65);
    if ( !v20 || k >= (*((_DWORD *)this + 66) - v20) >> 2 )
      break;
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 65) + 4 * k) + 20))(LODWORD(a2));
  }
  if ( *((_DWORD *)this + 98)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 98) + 16))(*((_DWORD *)this + 98)) )
  {
    v21 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 98) + 24))(*((_DWORD *)this + 98)) - 1;
    if ( v21 )
    {
      if ( v21 == 2 )
        GameClient::Establishment::SwitchEstabState(4);
    }
    else
    {
      GameClient::Establishment::SwitchEstabState(2);
    }
  }
  v22 = *((_DWORD *)this + 75);
  if ( v22 && !*(_BYTE *)(v22 + 816) )
  {
    v23 = *((_DWORD *)this + 6);
    v24 = *((_DWORD *)this + 8);
    qmemcpy(v43, (char *)this + 36, sizeof(v43));
    v43[13] = *((_DWORD *)this + 7);
    v25 = *((_DWORD *)this + 75);
    v43[12] = v23;
    v43[14] = v24;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v25 + 136))(v25, v43);
  }
  v26 = *((_DWORD *)this + 77);
  if ( v26 && !*(_BYTE *)(v26 + 816) )
  {
    v27 = *((_DWORD *)this + 7);
    v28 = *((_DWORD *)this + 8);
    qmemcpy(v43, (char *)this + 36, sizeof(v43));
    v29 = *((_DWORD *)this + 6);
    v30 = *((_DWORD *)this + 77);
    v43[12] = v29;
    v43[13] = v27;
    v43[14] = v28;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v30 + 136))(v30, v43);
  }
}
