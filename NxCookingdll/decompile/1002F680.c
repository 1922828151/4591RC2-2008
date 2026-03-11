/*
 * func-name: sub_1002F680
 * func-address: 0x1002f680
 * callers: 0x1002f7f0
 * callees: 0x100043e0, 0x10004610, 0x100137c0, 0x10036680
 */

int __thiscall sub_1002F680(int this)
{
  long double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st4
  int v6; // eax
  long double v7; // st4
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // rtt
  double v12; // st7
  double v13; // st5
  double v14; // rt0
  float v16; // [esp+4h] [ebp-18h] BYREF
  float v17; // [esp+8h] [ebp-14h]
  float v18; // [esp+Ch] [ebp-10h]
  float v19; // [esp+10h] [ebp-Ch] BYREF
  float v20; // [esp+14h] [ebp-8h]
  float v21; // [esp+18h] [ebp-4h]

  sub_10004610(&v19, &v16, *(_DWORD *)(this + 4), *(float **)(this + 12));
  v2 = pow(2.0, -22.0);
  v3 = v16;
  *(float *)(this + 168) = v16;
  v4 = v17;
  if ( v17 >= v3 )
    v5 = v17;
  else
    v5 = v3;
  *(float *)(this + 168) = v5;
  if ( v18 >= v5 )
    v5 = v18;
  v6 = *(_DWORD *)(this + 176);
  v7 = v2 * v5;
  v8 = v18;
  *(float *)(this + 168) = v7;
  if ( v6 != 255 )
  {
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( *(float *)(this + 180) >= 0.0 )
        {
          v4 = *(float *)(this + 180);
          v17 = *(float *)(this + 180);
        }
        else
        {
          v20 = *(float *)(this + 180);
        }
      }
      else if ( v6 == 2 )
      {
        if ( *(float *)(this + 180) >= 0.0 )
        {
          v12 = v4;
          v13 = *(float *)(this + 180);
          v18 = *(float *)(this + 180);
          v14 = v13;
          v4 = v12;
          v8 = v14;
        }
        else
        {
          v21 = *(float *)(this + 180);
        }
      }
    }
    else if ( *(float *)(this + 180) >= 0.0 )
    {
      v9 = v4;
      v10 = *(float *)(this + 180);
      v16 = *(float *)(this + 180);
      v11 = v10;
      v4 = v9;
      v3 = v11;
    }
    else
    {
      v19 = *(float *)(this + 180);
    }
  }
  *(float *)(this + 128) = v19;
  *(float *)(this + 132) = v20;
  *(float *)(this + 136) = v21;
  *(float *)(this + 140) = v3;
  *(float *)(this + 144) = v4;
  *(float *)(this + 148) = v8;
  sub_100137C0(this);
  return sub_100043E0((float *)(this + 152), *(_DWORD *)(this + 4), *(_DWORD *)(this + 12));
}
