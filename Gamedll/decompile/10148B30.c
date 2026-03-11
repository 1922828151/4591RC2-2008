/*
 * func-name: sub_10148B30
 * func-address: 0x10148b30
 * callers: 0x1000225c
 * callees: 0x10001b04, 0x10001b6d, 0x10005ad3, 0x100077ed, 0x10007d8d, 0x1000a3a8, 0x1000b7e4, 0x1000bf05, 0x1000ed13, 0x1001168f, 0x10013647, 0x10015bef, 0x10015e0b, 0x10015eab, 0x10016a4f, 0x1001a5d2, 0x102c0ed0
 */

int __thiscall sub_10148B30(int this, Outpop::Utility::Ref_Object *a2)
{
  Outpop::Utility::Ref_Object *v3; // ebp
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int *v11; // eax
  _DWORD *v12; // ebp
  bool v13; // zf
  GameClient::RobotManager *v14; // eax
  GameClient::Robot *Robot; // eax
  void *v16; // edi
  int v17; // esi
  void *v18; // ebx
  int v20; // [esp+4h] [ebp-5Ch]
  int v21; // [esp+4h] [ebp-5Ch]
  int v22; // [esp+8h] [ebp-58h]
  int v23; // [esp+8h] [ebp-58h]
  int v24; // [esp+20h] [ebp-40h] BYREF
  int v25[2]; // [esp+24h] [ebp-3Ch] BYREF
  int v26; // [esp+2Ch] [ebp-34h] BYREF
  int v27; // [esp+30h] [ebp-30h]
  int v28; // [esp+34h] [ebp-2Ch]
  _BYTE v29[28]; // [esp+38h] [ebp-28h] BYREF
  int v30; // [esp+5Ch] [ebp-4h]

  v3 = a2;
  v4 = *(_DWORD *)(this + 8);
  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 18);
    if ( v5 )
    {
      v22 = v5 + 220;
      v20 = sub_10005AD3(0);
      v6 = sub_10005AD3(0);
      sub_10001B6D(v6, v20, v22);
      goto LABEL_9;
    }
    std::string::string(v29, &unk_10313D4D);
    v30 = 0;
    v21 = sub_10005AD3(0);
    v7 = sub_10005AD3(0);
LABEL_8:
    sub_10001B6D(v7, v21, (int)v29);
    v30 = -1;
    std::string::~string(v29);
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(v4 + 160) )
    goto LABEL_12;
  if ( *(_BYTE *)(v4 + 161) )
  {
    std::string::string(v29, &unk_10313D4E);
    v30 = 1;
    v21 = sub_102C0ED0(&v26);
    v7 = this + 12;
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_BYTE *)(v4 + 160) && sub_1000BF05() )
    sub_1001A5D2(0);
LABEL_12:
  v8 = sub_10016A4F(*(_DWORD *)(this + 132));
  if ( !v8 )
    goto LABEL_26;
  v9 = *(_DWORD *)(this + 16);
  v10 = *(_DWORD *)(this + 20);
  v26 = *(_DWORD *)(this + 12);
  v27 = v9;
  v28 = v10;
  if ( v3 )
  {
    v11 = (int *)sub_10005AD3(0);
    v26 = *v11;
    v27 = v11[1];
    v12 = (_DWORD *)((char *)v3 + 76);
    v13 = *v12 == -1;
    v28 = v11[2];
    if ( !v13 )
    {
      sub_100077ED((int)&a2, 9, 53, COERCE_INT(0.0), 1, 512);
      v24 = *(_DWORD *)(this + 4);
      v30 = 2;
      sub_10015E0B(this + 152);
      sub_10001B04((int)&v24);
      sub_10001B04(this + 136);
      sub_10015EAB((int)v12);
      sub_1000B7E4(this + 160);
      sub_1000B7E4((int)&v26);
      sub_10015BEF(this + 140);
      sub_10015BEF(this + 144);
      j_nullsub_44((int)&a2);
      v23 = *(_DWORD *)(v8 + 292);
      v14 = GameClient::RobotManager::Instance();
      Robot = GameClient::RobotManager::GetRobot(v14, v23);
      if ( Robot )
        GameClient::Robot::AddScaleSign(Robot, (const struct Vector *)&v26, 0.25, 200.0);
      v30 = -1;
      goto LABEL_24;
    }
    if ( *(int *)(v4 + 144) <= 0 )
      goto LABEL_26;
    sub_100077ED((int)&a2, 9, 53, COERCE_INT(0.0), 1, 512);
    v25[0] = *(_DWORD *)(this + 4);
    v30 = 3;
    v24 = -1;
    sub_10015E0B(this + 152);
    sub_10001B04((int)v25);
    sub_10001B04(this + 136);
    sub_10001B04((int)&v24);
    sub_1000B7E4(this + 160);
    sub_1000B7E4((int)&v26);
    sub_10015BEF(this + 140);
    sub_10015BEF(this + 144);
    j_nullsub_44((int)&a2);
  }
  else
  {
    if ( !*(_BYTE *)(v4 + 160) || !*(_BYTE *)(v4 + 161) )
      goto LABEL_26;
    sub_100077ED((int)&a2, 9, 53, COERCE_INT(0.0), 1, 512);
    v24 = *(_DWORD *)(this + 4);
    v30 = 4;
    v25[0] = -1;
    sub_10015E0B(this + 152);
    sub_10001B04((int)&v24);
    sub_10001B04(this + 136);
    sub_10001B04((int)v25);
    sub_1000B7E4(this + 160);
    sub_1000B7E4((int)&v26);
    sub_10015BEF(this + 140);
    sub_10015BEF(this + 144);
    j_nullsub_44((int)&a2);
  }
  v30 = -1;
LABEL_24:
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
LABEL_26:
  *(_BYTE *)(this + 112) = 0;
  v16 = *(void **)(this + 124);
  v17 = this + 116;
  if ( *(_DWORD *)(v17 + 4) > (unsigned int)v16 )
    _invalid_parameter_noinfo();
  v18 = *(void **)(v17 + 4);
  if ( (unsigned int)v18 > *(_DWORD *)(v17 + 8) )
    _invalid_parameter_noinfo();
  return sub_10007D8D((int)v25, v17, v18, v17, v16);
}
