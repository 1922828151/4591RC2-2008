/*
 * func-name: sub_10036F50
 * func-address: 0x10036f50
 * callers: 0x10018fe8
 * callees: 0x100024fa, 0x100029cd, 0x10014669, 0x10018aca, 0x102c13d0, 0x102c2990, 0x102c9dbc
 */

void __thiscall sub_10036F50(int this, float a2)
{
  int v3; // eax
  int v4; // ecx
  float v5; // edx
  float v6; // eax
  double v7; // st7
  double v8; // st7
  int v9; // edx
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  float v16; // [esp+10h] [ebp-DCh]
  float v17; // [esp+10h] [ebp-DCh]
  float v18; // [esp+10h] [ebp-DCh]
  float v19; // [esp+14h] [ebp-D8h]
  int v20; // [esp+14h] [ebp-D8h]
  float v21; // [esp+18h] [ebp-D4h]
  float v22; // [esp+18h] [ebp-D4h]
  float v23; // [esp+1Ch] [ebp-D0h]
  float v24; // [esp+1Ch] [ebp-D0h]
  int v25; // [esp+20h] [ebp-CCh] BYREF
  float v26; // [esp+24h] [ebp-C8h]
  float v27; // [esp+28h] [ebp-C4h]
  int v28[16]; // [esp+2Ch] [ebp-C0h] BYREF
  _BYTE v29[64]; // [esp+6Ch] [ebp-80h] BYREF
  _BYTE v30[64]; // [esp+ACh] [ebp-40h] BYREF

  v16 = a2 + *(float *)(this + 380);
  *(float *)(this + 380) = v16;
  if ( *(float *)(this + 376) <= (double)v16 )
  {
    v3 = *(_DWORD *)(this + 304);
    *(float *)(this + 380) = 0.0;
    qmemcpy(v28, (const void *)(v3 + 36), sizeof(v28));
    v4 = *(int *)(v3 + 24);
    v5 = *(float *)(v3 + 28);
    v6 = *(float *)(v3 + 32);
    v25 = v4;
    v27 = v6;
    v26 = v5;
    v19 = *(float *)&v4 - *(float *)(this + 388);
    v21 = 0.0 - *(float *)(this + 392);
    v23 = v6 - *(float *)(this + 396);
    v17 = v21 * v21 + v19 * v19 + v23 * v23;
    v18 = sqrt(v17);
    if ( *(float *)(this + 384) < (double)v18 )
    {
      *(float *)&v20 = *(float *)(this + 388) - *(float *)&v25;
      v7 = *(float *)(this + 392);
      v25 = v20;
      v22 = v7 - 0.0;
      v8 = *(float *)(this + 396);
      v26 = v22;
      v24 = v8 - v27;
      v27 = v24;
      sub_100029CD();
      sub_102C2990(v29, (int)&v25);
      (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 304) + 40))(*(_DWORD *)(this + 304), v29);
LABEL_4:
      GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 1u);
      return;
    }
    v9 = rand() % 125 + 1;
    if ( v9 <= 24 )
      goto LABEL_4;
    if ( v9 >= 50 )
    {
      if ( v9 >= 75 )
      {
        if ( v9 >= 100 )
        {
          if ( v9 >= 125 )
            goto LABEL_4;
          GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 0);
        }
        else
        {
          sub_10014669(v29);
          sub_102C13D0(3.1415901);
          v14 = **(_DWORD **)(this + 304);
          v15 = sub_10018ACA(v30, (int)v28);
          (*(void (__thiscall **)(_DWORD, int))(v14 + 40))(*(_DWORD *)(this + 304), v15);
          GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 1u);
        }
      }
      else
      {
        sub_10014669(v29);
        sub_102C13D0(-0.78539753);
        v12 = **(_DWORD **)(this + 304);
        v13 = sub_10018ACA(v30, (int)v28);
        (*(void (__thiscall **)(_DWORD, int))(v12 + 40))(*(_DWORD *)(this + 304), v13);
        GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 1u);
      }
    }
    else
    {
      sub_10014669(v29);
      sub_102C13D0(0.78539753);
      v10 = **(_DWORD **)(this + 304);
      v11 = sub_10018ACA(v30, (int)v28);
      (*(void (__thiscall **)(_DWORD, int))(v10 + 40))(*(_DWORD *)(this + 304), v11);
      GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 1u);
    }
  }
}
