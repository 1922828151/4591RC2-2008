/*
 * func-name: ?LoadResource@DamageEquip@GameClient@@UAE_NXZ_0
 * func-address: 0x1014e090
 * callers: 0x1000712b
 * callees: 0x1000194c, 0x1000a3a8, 0x1000ed13, 0x10011540, 0x1001371e, 0x102c0ed0
 */

bool __thiscall GameClient::DamageEquip::LoadResource(GameClient::DamageEquip *this)
{
  bool result; // al
  int v3; // edi
  float *v4; // eax
  double v5; // st7
  int v6; // ecx
  int v7; // eax
  GameClient::RobotManager *v8; // eax
  struct GameClient::Robot *Robot; // eax
  int v10; // ecx
  bool v11; // zf
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // [esp-4h] [ebp-80h]
  int v16; // [esp+Ch] [ebp-70h]
  float v17; // [esp+20h] [ebp-5Ch]
  float v18; // [esp+24h] [ebp-58h]
  float v19; // [esp+28h] [ebp-54h]
  float v20; // [esp+2Ch] [ebp-50h]
  _BYTE v21[12]; // [esp+30h] [ebp-4Ch] BYREF
  _BYTE v22[48]; // [esp+3Ch] [ebp-40h] BYREF
  int v23; // [esp+6Ch] [ebp-10h]
  int v24; // [esp+70h] [ebp-Ch]
  int v25; // [esp+74h] [ebp-8h]

  result = GameClient::Item::LoadResource(this);
  if ( !result )
    return result;
  v3 = *((_DWORD *)this + 2);
  v4 = (float *)sub_102C0ED0(v21);
  v17 = (float)*(int *)(v3 + 2200);
  v18 = *v4 * v17;
  v19 = v4[1] * v17;
  v5 = v17 * v4[2];
  *((float *)this + 202) = v18;
  v6 = *((_DWORD *)this + 45);
  *((float *)this + 203) = v19;
  v20 = v5;
  *((float *)this + 204) = v20;
  *(_BYTE *)(v6 + 816) = 1;
  if ( (*(_BYTE *)(v3 + 2252) & 0x10) != 0 )
    goto LABEL_13;
  v7 = sub_1000194C(0);
  if ( !v7 )
    goto LABEL_14;
  v16 = *(_DWORD *)(v7 + 292);
  v8 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v8, v16);
  if ( !Robot )
    goto LABEL_14;
  v10 = *(_DWORD *)(v3 + 2252);
  if ( (v10 & 1) == 0 || *((_DWORD *)Robot + 3) != *((_DWORD *)this + 201) )
  {
    if ( (v10 & 4) != 0 && *((_DWORD *)Robot + 27) == *((_DWORD *)this + 27) )
    {
      *(_BYTE *)(*((_DWORD *)this + 45) + 816) = 0;
      goto LABEL_14;
    }
    if ( (v10 & 8) == 0 || *((_DWORD *)Robot + 27) == *((_DWORD *)this + 27) )
      goto LABEL_14;
LABEL_13:
    *(_BYTE *)(*((_DWORD *)this + 45) + 816) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(*((_DWORD *)this + 45) + 816) = 0;
LABEL_14:
  if ( *(_BYTE *)(v3 + 2208) )
  {
    v11 = *((_DWORD *)this + 200) == 0;
    *((_BYTE *)this + 820) = 0;
    if ( v11 )
    {
      sub_1001371E((int)this + 36);
      v12 = *((_DWORD *)this + 8);
      v13 = *((_DWORD *)this + 6);
      v24 = *((_DWORD *)this + 7);
      v15 = *(unsigned __int8 *)(v3 + 2208);
      v25 = v12;
      v23 = v13;
      v14 = NxPhysics::Instance(*((_DWORD *)this + 45), *((_DWORD *)this + 3), v3 + 2212, v22, v15);
      *((_DWORD *)this + 200) = NxPhysics::CreateBoxActor(v14);
      return 1;
    }
  }
  else
  {
    *((_BYTE *)this + 820) = 1;
  }
  return 1;
}
