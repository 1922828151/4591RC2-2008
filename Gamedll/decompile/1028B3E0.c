/*
 * func-name: ?RefreshData@CStatusUI@@AAEXPAVWorldObject@GameClient@@@Z_0
 * func-address: 0x1028b3e0
 * callers: 0x10002c02
 * callees: 0x100029cd, 0x1000516e, 0x10011a4f, 0x102c0ed0, 0x102c9d62, 0x102c9db6, 0x102c9dbc, 0x102c9fe0
 */

void __userpurge CStatusUI::RefreshData(CREStatic **this@<ecx>, int a2@<ebx>, struct GameClient::WorldObject *a3)
{
  float *v4; // eax
  struct Game *v5; // eax
  double v6; // st7
  float v7; // [esp+14h] [ebp-50h] BYREF
  float v8; // [esp+18h] [ebp-4Ch]
  float v9; // [esp+1Ch] [ebp-48h]
  float v10; // [esp+20h] [ebp-44h]
  float v11; // [esp+24h] [ebp-40h] BYREF
  float v12; // [esp+28h] [ebp-3Ch]
  float v13; // [esp+2Ch] [ebp-38h]
  float v14; // [esp+30h] [ebp-34h] BYREF
  float v15; // [esp+34h] [ebp-30h]
  float v16; // [esp+38h] [ebp-2Ch]
  wchar_t Buffer[2]; // [esp+3Ch] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp-24h]
  int v19; // [esp+44h] [ebp-20h]
  int v20; // [esp+48h] [ebp-1Ch]
  int v21; // [esp+4Ch] [ebp-18h]
  int v22; // [esp+50h] [ebp-14h]
  int v23; // [esp+54h] [ebp-10h]
  int v24; // [esp+58h] [ebp-Ch]
  int v25; // [esp+5Ch] [ebp-8h]
  int v26; // [esp+60h] [ebp-4h]

  if ( a3 )
  {
    v16 = 0.0;
    *(_DWORD *)Buffer = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v4 = (float *)(*(int (__thiscall **)(struct GameClient::WorldObject *, float *, int))(*(_DWORD *)a3 + 44))(
                    a3,
                    &v7,
                    a2);
    v7 = v4[1] * v4[1] + *v4 * *v4 + v4[2] * v4[2];
    v7 = sqrt(v7);
    sub_10011A4F(Buffer, (size_t)&unk_103235C4, (int)(v7 * 3.599999904632568));
    CREStatic::SetText(this[1006], Buffer);
    v14 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    *(_DWORD *)Buffer = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v5 = Game::Instance();
    World::GetLogicCoordOffset(*((World **)v5 + 25), (struct Vector *)&v14);
    sub_10011A4F(Buffer, (size_t)&unk_103235D0, (int)(*((float *)a3 + 7) + v15));
    CREStatic::SetText(this[1007], Buffer);
    sub_102C0ED0(&v11);
    v9 = v12;
    v8 = v11;
    v10 = v13;
    sub_100029CD();
    v9 = 0.0;
    sub_100029CD();
    v7 = v11 * v8 + v12 * v9 + v10 * v13;
    v7 = acos(v7);
    v6 = v7;
    if ( v12 < 0.0 )
      v6 = -v6;
    v7 = fabs(v12);
    if ( v7 < 0.001 )
      v6 = 0.0;
    sub_10011A4F(Buffer, (size_t)&unk_103235DC, (int)(v6 / 3.141592741012573 * 180.0));
    CREStatic::SetText(this[1008], Buffer);
  }
}
