/*
 * func-name: sub_1023B480
 * func-address: 0x1023b480
 * callers: 0x100119b9
 * callees: 0x10001460, 0x10003260, 0x10003b02, 0x10008f8f, 0x10009bab, 0x1000ee71, 0x10012634, 0x10014443, 0x100151a9, 0x100168ec, 0x10016ca2, 0x10018fcf, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

void __thiscall sub_1023B480(
        int this,
        int a2,
        char *a3,
        unsigned int a4,
        struct GameClient::FRobotBody::RobotPartModel *a5)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void *v11; // eax
  void *v12; // ecx
  void *v13; // eax
  int v14; // ecx
  void *v15; // edi
  int v16; // eax
  unsigned int v17; // ebx
  char *v18; // eax
  _BYTE *v19; // ecx
  int v20; // eax
  char *v21; // ebx
  void *v22; // [esp-Ch] [ebp-7Ch]
  int v23; // [esp-8h] [ebp-78h]
  int v24; // [esp-8h] [ebp-78h]
  int v25[5]; // [esp+0h] [ebp-70h] BYREF
  void *v26; // [esp+14h] [ebp-5Ch]
  int v27; // [esp+18h] [ebp-58h]
  unsigned int v28; // [esp+1Ch] [ebp-54h]
  int v29; // [esp+20h] [ebp-50h]
  _BYTE v30[56]; // [esp+24h] [ebp-4Ch] BYREF
  int *v31; // [esp+60h] [ebp-10h]
  int v32; // [esp+6Ch] [ebp-4h]

  v31 = v25;
  v25[4] = this;
  GameClient::FRobotBody::RobotPartModel::RobotPartModel((GameClient::FRobotBody::RobotPartModel *)v30, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v32 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 56;
  v28 = v7;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 56;
    else
      v8 = 0;
    if ( 76695844 - v8 < a4 )
      sub_100151A9(v25[0], v25[1]);
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 56;
    else
      v9 = 0;
    if ( v28 >= a4 + v9 )
    {
      v19 = *(_BYTE **)(this + 8);
      v29 = v19 - a3;
      v26 = v19;
      if ( (v19 - a3) / 56 >= a4 )
      {
        v21 = &v19[-56 * a4];
        v27 = 56 * a4;
        *(_DWORD *)(this + 8) = sub_10012634(v21, (int)v19, v19);
        sub_1000EE71((int)a3, (int)v21, (int)v26);
        sub_10003B02((int)a3, (int)&a3[v27], (int)v30);
      }
      else
      {
        v27 = 56 * a4;
        sub_10012634(a3, (int)v19, &a3[56 * a4]);
        v23 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 56;
        v22 = *(void **)(this + 8);
        LOBYTE(v32) = 3;
        sub_10014443(v22, v23, v30);
        v20 = v27;
        *(_DWORD *)(this + 8) += v27;
        v24 = *(_DWORD *)(this + 8) - v20;
        v32 = 0;
        sub_10003B02((int)a3, v24, (int)v30);
      }
    }
    else
    {
      if ( 76695844 - (v28 >> 1) >= v28 )
        v28 += v28 >> 1;
      else
        v28 = 0;
      if ( v6 )
        v10 = (*(_DWORD *)(this + 8) - v6) / 56;
      else
        v10 = 0;
      if ( v28 < a4 + v10 )
        v28 = a4 + sub_10018FCF();
      v11 = (void *)sub_100168EC(v28);
      v12 = *(void **)(this + 4);
      LOBYTE(v29) = 0;
      v26 = v11;
      v27 = (int)v11;
      LOBYTE(v32) = 1;
      v27 = sub_10016CA2(v12, (int)a3, v11);
      v13 = (void *)sub_10014443((void *)v27, a4, v30);
      v14 = *(_DWORD *)(this + 8);
      LOBYTE(v29) = 0;
      v27 = (int)v13;
      sub_10016CA2(a3, v14, v13);
      v15 = *(void **)(this + 4);
      v16 = 0;
      v32 = 0;
      if ( v15 )
        v16 = (*(_DWORD *)(this + 8) - (int)v15) / 56;
      v17 = v16 + a4;
      if ( v15 )
      {
        sub_10008F8F(v15, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      v18 = (char *)v26;
      *(_DWORD *)(this + 12) = (char *)v26 + 56 * v28;
      *(_DWORD *)(this + 8) = &v18[56 * v17];
      *(_DWORD *)(this + 4) = v18;
    }
  }
  v32 = -1;
  GameClient::FRobotBody::RobotPartModel::~RobotPartModel((GameClient::FRobotBody::RobotPartModel *)v30);
}
