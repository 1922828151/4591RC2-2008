/*
 * func-name: sub_10035730
 * func-address: 0x10035730
 * callers: 0x10013b3d
 * callees: 0x100024fa, 0x100029cd, 0x102c17b0, 0x102c1be0, 0x102c2990
 */

void __thiscall sub_10035730(float *this, GameClient::Robot *a2)
{
  float *v3; // esi
  GameClient::Robot *v4; // esi
  float v5; // eax
  float v6; // ecx
  unsigned int v7; // ecx
  float v8; // [esp+8h] [ebp-8Ch] BYREF
  float v9; // [esp+Ch] [ebp-88h]
  float v10; // [esp+10h] [ebp-84h]
  float v11[16]; // [esp+14h] [ebp-80h] BYREF
  _BYTE v12[64]; // [esp+54h] [ebp-40h] BYREF

  v3 = this + 2;
  sub_100029CD();
  if ( 0.0 == *v3 && 0.0 == v3[1] && 0.0 == v3[2] )
  {
    v4 = a2;
  }
  else
  {
    sub_102C2990(v11, (int)v3);
    v4 = a2;
    (*(void (__thiscall **)(GameClient::Robot *, float *))(*(_DWORD *)a2 + 40))(a2, v11);
  }
  sub_100029CD();
  qmemcpy(
    v11,
    (const void *)(*(int (__thiscall **)(int, _BYTE *))(*((_DWORD *)v4 + 37) + 12))((int)v4 + 148, v12),
    sizeof(v11));
  sub_102C17B0(v11);
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  sub_102C1BE0(this + 5, &v8);
  v5 = v9;
  v6 = v10;
  this[5] = v8;
  this[6] = v5;
  this[7] = v6;
  v7 = 0;
  if ( this[5] <= 0.25 )
  {
    if ( this[5] < -0.25 )
      v7 = 4;
  }
  else
  {
    v7 = 8;
  }
  if ( this[7] <= 0.25 )
  {
    if ( this[7] < -0.25 )
      v7 |= 2u;
    GameClient::Robot::Move(a2, v7);
  }
  else
  {
    GameClient::Robot::Move(a2, v7 | 1);
  }
}
