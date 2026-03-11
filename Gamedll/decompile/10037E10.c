/*
 * func-name: sub_10037E10
 * func-address: 0x10037e10
 * callers: 0x1000b76c
 * callees: 0x10010820, 0x100114be
 */

void __thiscall sub_10037E10(int this)
{
  GameClient::Robot *v2; // ecx
  int v3; // eax
  int v4; // [esp+8h] [ebp-4h] BYREF

  *(float *)(this + 308) = 1.0;
  *(float *)(this + 312) = 0.0;
  *(_DWORD *)(this + 332) = 0;
  *(_BYTE *)(this + 336) = 0;
  *(_BYTE *)(this + 337) = 0;
  *(_DWORD *)(this + 340) = 0;
  v4 = this + 40;
  sub_10010820((int)&v4);
  v2 = *(GameClient::Robot **)(this + 304);
  v3 = *((_DWORD *)v2 + 90);
  if ( v3 == 2 || v3 == 3 )
  {
    *(_BYTE *)(this + 338) = 0;
  }
  else
  {
    GameClient::Robot::Suicide(v2);
    *(_BYTE *)(this + 338) = 1;
  }
}
