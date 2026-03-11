/*
 * func-name: ?OnReadVarComplete@FRobotFramework@GameClient@@UAEXXZ_0
 * func-address: 0x1023d750
 * callers: 0x100163d3
 * callees: 0x1000bc3a, 0x1000d224, 0x1000f5f1, 0x10012e3b, 0x100132dc, 0x10016ee1, 0x102c9d98
 */

void __thiscall GameClient::FRobotFramework::OnReadVarComplete(GameClient::FRobotFramework *this)
{
  int v2; // eax
  int v3; // ebp
  int v4; // edi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  void *v12; // ebp
  int v13; // eax
  int v14; // ebp
  void *v15; // ebx
  GameClient::CombinRobot *v16; // eax
  int v17; // ebx
  int *v18; // eax
  int v19; // [esp-38h] [ebp-64h] BYREF
  int v20; // [esp-34h] [ebp-60h]
  int v21; // [esp-30h] [ebp-5Ch]
  int v22; // [esp-2Ch] [ebp-58h]
  int v23; // [esp-28h] [ebp-54h]
  int v24; // [esp-24h] [ebp-50h]
  int v25; // [esp-20h] [ebp-4Ch]
  int v26; // [esp-1Ch] [ebp-48h]
  int v27; // [esp-18h] [ebp-44h]
  int v28; // [esp-14h] [ebp-40h]
  int v29; // [esp-10h] [ebp-3Ch]
  int v30; // [esp-Ch] [ebp-38h]
  int v31; // [esp-8h] [ebp-34h]
  void *v32; // [esp-4h] [ebp-30h]
  int v33; // [esp+14h] [ebp-18h]
  _DWORD v34[2]; // [esp+18h] [ebp-14h] BYREF
  int v35; // [esp+28h] [ebp-4h]

  v2 = *((_DWORD *)this + 111);
  v3 = 0;
  if ( v2 )
    v4 = (*((_DWORD *)this + 112) - v2) / 28;
  else
    v4 = 0;
  v34[0] = &v19;
  sub_1000F5F1(v19, v20);
  sub_100132DC(v4, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, (int)v32);
  v5 = 0;
  v33 = 0;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 111);
    v34[0] = v3;
    if ( !v6 || v5 >= (*((_DWORD *)this + 112) - v6) / 28 )
      break;
    v7 = *((_DWORD *)this + 111);
    if ( !v7 || v5 >= (*((_DWORD *)this + 112) - v7) / 28 )
      _invalid_parameter_noinfo();
    v8 = *((_DWORD *)this + 107);
    v9 = v33 + *((_DWORD *)this + 111);
    if ( !v8 || v5 >= (*((_DWORD *)this + 108) - v8) / 56 )
      _invalid_parameter_noinfo();
    std::string::operator=(v34[0] + *((_DWORD *)this + 107), v9);
    v10 = *((_DWORD *)this + 115);
    if ( !v10 || v5 >= (*((_DWORD *)this + 116) - v10) / 28 )
      _invalid_parameter_noinfo();
    v11 = *((_DWORD *)this + 107);
    v12 = (void *)(v33 + *((_DWORD *)this + 115));
    if ( !v11 || v5 >= (*((_DWORD *)this + 108) - v11) / 56 )
      _invalid_parameter_noinfo();
    v13 = *((_DWORD *)this + 107);
    v32 = v12;
    v14 = v34[0];
    std::string::operator=(v13 + v34[0] + 28, v32);
    v33 += 28;
    ++v5;
    v3 = v14 + 56;
  }
  if ( *((_DWORD *)this + 76) )
  {
    sub_10016EE1((int)v34, (int)this + 284);
    v15 = dword_103B5DF4;
    if ( !v34[0] || (_UNKNOWN *)v34[0] != &unk_103B5DF0 )
      _invalid_parameter_noinfo();
    if ( (void *)v34[1] == v15 )
    {
      v16 = (GameClient::CombinRobot *)operator new(0x714u);
      v34[0] = v16;
      v35 = 0;
      if ( v16 )
        v17 = GameClient::CombinRobot::CombinRobot(v16, 0);
      else
        v17 = 0;
      v35 = -1;
      v18 = (int *)sub_10012E3B((char *)this + 284);
      v32 = (char *)this + 284;
      *v18 = v17;
      sub_10012E3B(v32);
      GameClient::CombinRobot::LoadTMPModel((char *)this + 284, (int)this + 312, (int)this + 340);
    }
  }
}
