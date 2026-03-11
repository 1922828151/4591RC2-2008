/*
 * func-name: sub_10035A60
 * func-address: 0x10035a60
 * callers: 0x1000779d
 * callees: 0x10001dfc, 0x100029cd, 0x1000a984, 0x10016a4f, 0x102c9dbc
 */

void __thiscall sub_10035A60(int this, float *a2)
{
  int v3; // eax
  int v4; // eax
  float v6; // [esp+8h] [ebp-24h]
  float v7; // [esp+Ch] [ebp-20h]
  float v8; // [esp+10h] [ebp-1Ch]
  float v9; // [esp+14h] [ebp-18h]
  float v10; // [esp+18h] [ebp-14h]
  float v11; // [esp+1Ch] [ebp-10h]
  float v12; // [esp+30h] [ebp+4h]
  float v13; // [esp+30h] [ebp+4h]

  v3 = sub_10016A4F(*(_DWORD *)(this + 144));
  if ( !v3 )
    goto LABEL_2;
  if ( *(_DWORD *)(this + 144) )
  {
    v4 = sub_10001DFC(*(_DWORD *)(v3 + 292));
    if ( !v4 )
    {
LABEL_2:
      *(_DWORD *)(this + 4) = 0;
      return;
    }
    v6 = *(float *)(v4 + 24) - a2[6];
    v7 = 0.0 - 0.0;
    v8 = *(float *)(v4 + 32) - a2[8];
    v12 = v7 * v7 + v6 * v6 + v8 * v8;
    v13 = sqrt(v12);
    if ( *(float *)(this + 148) - a2[82] * *(float *)(this + 36) > v13 )
    {
      sub_1000A984();
      if ( v13 < 1.0 )
      {
        v6 = 1.0;
        v7 = 0.0;
        v8 = 1.0;
      }
      sub_100029CD();
      v9 = -v6;
      v10 = -v7;
      v11 = -v8;
      *(float *)(this + 20) = *(float *)(this + 20) + v9;
      *(float *)(this + 24) = *(float *)(this + 24) + v10;
      *(float *)(this + 28) = *(float *)(this + 28) + v11;
    }
  }
}
