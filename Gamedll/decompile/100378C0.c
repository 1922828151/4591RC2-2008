/*
 * func-name: sub_100378C0
 * func-address: 0x100378c0
 * callers: 0x10013bc4
 * callees: 0x100024fa, 0x100029cd, 0x100108fc, 0x102c2990, 0x102c9dbc
 */

void __thiscall sub_100378C0(int this, float a2)
{
  float *v3; // edi
  int v4; // eax
  float v5; // [esp+0h] [ebp-58h]
  float v6; // [esp+4h] [ebp-54h]
  float v7; // [esp+8h] [ebp-50h]
  _BYTE v8[64]; // [esp+18h] [ebp-40h] BYREF
  float v9; // [esp+5Ch] [ebp+4h]
  float v10; // [esp+5Ch] [ebp+4h]
  float v11; // [esp+5Ch] [ebp+4h]

  v9 = a2 + *(float *)(this + 360);
  *(float *)(this + 360) = v9;
  if ( *(float *)(this + 356) <= (double)v9 )
  {
    v3 = *(float **)(this + 304);
    *(float *)(this + 360) = 0.0;
    v5 = *(float *)(this + 344) - v3[6];
    v6 = *(float *)(this + 348) - 0.0;
    v7 = *(float *)(this + 352) - v3[8];
    v10 = v6 * v6 + v5 * v5 + v7 * v7;
    v11 = sqrt(v10);
    if ( v3[82] * *(float *)(this + 356) <= v11 )
    {
      sub_100029CD();
      *(float *)(this + 364) = v5;
      *(float *)(this + 368) = v6;
      *(float *)(this + 372) = v7;
      if ( 0.0 != *(float *)(this + 364) || 0.0 != *(float *)(this + 368) || 0.0 != *(float *)(this + 372) )
      {
        sub_102C2990(v8, this + 364);
        (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 304) + 40))(*(_DWORD *)(this + 304), v8);
        GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 1u);
      }
    }
    else
    {
      GameClient::Robot::Move((GameClient::Robot *)v3, 0);
      v4 = *(_DWORD *)(this + 296);
      if ( v4 )
      {
        *(_DWORD *)(this + 296) = v4 - 1;
        if ( v4 == 1 )
          *(_DWORD *)(this + 292) = 0;
      }
      *(_DWORD *)(this + 12) = *(_DWORD *)sub_100108FC();
    }
  }
}
