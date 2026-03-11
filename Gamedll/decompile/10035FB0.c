/*
 * func-name: sub_10035FB0
 * func-address: 0x10035fb0
 * callers: 0x100146dc
 * callees: 0x10001d02, 0x100029cd
 */

int __thiscall sub_10035FB0(int this, int a2)
{
  int result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  bool v7; // zf
  double v8; // st6
  double v9; // st7
  float v10; // [esp+4h] [ebp-24h]
  float v11; // [esp+4h] [ebp-24h]
  float v12; // [esp+4h] [ebp-24h]
  float v13; // [esp+8h] [ebp-20h]
  float v14; // [esp+8h] [ebp-20h]
  float v15; // [esp+Ch] [ebp-1Ch]
  float v16; // [esp+Ch] [ebp-1Ch]
  float v17; // [esp+Ch] [ebp-1Ch]
  float v18; // [esp+10h] [ebp-18h]
  float v19; // [esp+10h] [ebp-18h]
  float v20; // [esp+14h] [ebp-14h]
  float v21; // [esp+18h] [ebp-10h]
  float v22; // [esp+18h] [ebp-10h]
  float v23; // [esp+1Ch] [ebp-Ch]
  float v24; // [esp+1Ch] [ebp-Ch]
  float v25; // [esp+1Ch] [ebp-Ch]
  float v26; // [esp+20h] [ebp-8h]
  float v27; // [esp+20h] [ebp-8h]
  float v28; // [esp+24h] [ebp-4h]
  float v29; // [esp+24h] [ebp-4h]
  float v30; // [esp+24h] [ebp-4h]

  if ( *(float *)(this + 72) <= (double)*(float *)(this + 68) )
  {
    *(float *)(this + 68) = 0.0;
    v12 = *(float *)(a2 + 24);
    v17 = *(float *)(a2 + 32);
    sub_10001D02();
    v19 = 0.0 * *(float *)(this + 64) + v12;
    sub_10001D02();
    v7 = *(_BYTE *)(this + 116) == 0;
    v8 = 0.0 * *(float *)(this + 64) + v17;
    v9 = v17;
    *(float *)(this + 52) = v19;
    *(float *)(this + 56) = 0.0;
    v22 = v8;
    *(float *)(this + 60) = v22;
    if ( !v7 )
    {
      v24 = *(float *)(this + 52) - v12;
      v26 = *(float *)(this + 56) - 0.0;
      v29 = *(float *)(this + 60) - v9;
      sub_100029CD();
      *(float *)(this + 8) = *(float *)(this + 8) + v24;
      *(float *)(this + 12) = *(float *)(this + 12) + v26;
      *(float *)(this + 16) = *(float *)(this + 16) + v29;
      v9 = v17;
    }
    v25 = *(float *)(this + 52) - v12;
    v27 = *(float *)(this + 56) - 0.0;
    v30 = *(float *)(this + 60) - v9;
    result = sub_100029CD();
    *(float *)(this + 20) = *(float *)(this + 20) + v25;
    *(float *)(this + 24) = v27 + *(float *)(this + 24);
    *(float *)(this + 28) = *(float *)(this + 28) + v30;
  }
  else
  {
    *(float *)(this + 68) = *(float *)(this + 68) + 1.0;
    v23 = *(float *)(a2 + 24);
    v28 = *(float *)(a2 + 32);
    v10 = *(float *)(this + 52) - v23;
    v13 = *(float *)(this + 56) - 0.0;
    v15 = *(float *)(this + 60) - v28;
    v18 = *(float *)(this + 124) - v23;
    v20 = *(float *)(this + 128) - 0.0;
    v21 = *(float *)(this + 132) - v28;
    v11 = v18 + v10;
    v14 = v20 + v13;
    v16 = v21 + v15;
    result = sub_100029CD();
    v4 = v16;
    v5 = v14;
    v6 = v11;
    if ( *(_BYTE *)(this + 116) )
    {
      *(float *)(this + 8) = *(float *)(this + 8) + v6;
      *(float *)(this + 12) = *(float *)(this + 12) + v5;
      *(float *)(this + 16) = v4 + *(float *)(this + 16);
    }
    *(float *)(this + 20) = v6 + *(float *)(this + 20);
    *(float *)(this + 24) = v5 + *(float *)(this + 24);
    *(float *)(this + 28) = v4 + *(float *)(this + 28);
  }
  return result;
}
