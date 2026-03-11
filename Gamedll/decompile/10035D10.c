/*
 * func-name: sub_10035D10
 * func-address: 0x10035d10
 * callers: 0x1001252b
 * callees: 0x100029cd, 0x10009a75
 */

int __thiscall sub_10035D10(int this, int a2)
{
  int result; // eax
  bool v4; // zf
  float v5; // [esp+4h] [ebp-24h]
  float v6; // [esp+Ch] [ebp-1Ch]
  float v7; // [esp+1Ch] [ebp-Ch]
  float v8; // [esp+1Ch] [ebp-Ch]
  float v9; // [esp+1Ch] [ebp-Ch]
  float v10; // [esp+1Ch] [ebp-Ch]
  float v11; // [esp+20h] [ebp-8h]
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+20h] [ebp-8h]
  float v14; // [esp+20h] [ebp-8h]
  float v15; // [esp+24h] [ebp-4h]
  float v16; // [esp+24h] [ebp-4h]
  float v17; // [esp+24h] [ebp-4h]
  float v18; // [esp+24h] [ebp-4h]

  v6 = *(float *)(a2 + 32);
  v5 = *(float *)(a2 + 24);
  if ( *(float *)(this + 72) >= (double)*(float *)(this + 68) )
  {
    v4 = *(_BYTE *)(this + 116) == 0;
    *(float *)(this + 68) = *(float *)(this + 68) + GDeltaTime;
    if ( !v4 )
    {
      v9 = *(float *)(this + 52) - v5;
      v13 = *(float *)(this + 56) - 0.0;
      v17 = *(float *)(this + 60) - v6;
      sub_100029CD();
      *(float *)(this + 8) = v9 + *(float *)(this + 8);
      *(float *)(this + 12) = *(float *)(this + 12) + v13;
      *(float *)(this + 16) = *(float *)(this + 16) + v17;
    }
    v10 = *(float *)(this + 52) - v5;
    v14 = *(float *)(this + 56) - 0.0;
    v18 = *(float *)(this + 60) - v6;
    result = sub_100029CD();
    *(float *)(this + 20) = v10 + *(float *)(this + 20);
    *(float *)(this + 24) = v14 + *(float *)(this + 24);
    *(float *)(this + 28) = *(float *)(this + 28) + v18;
  }
  else
  {
    *(float *)(this + 68) = 0.0;
    sub_10009A75();
    if ( *(_BYTE *)(this + 116) )
    {
      v7 = *(float *)(this + 52) - v5;
      v11 = *(float *)(this + 56) - 0.0;
      v15 = *(float *)(this + 60) - v6;
      sub_100029CD();
      *(float *)(this + 8) = v7 + *(float *)(this + 8);
      *(float *)(this + 12) = *(float *)(this + 12) + v11;
      *(float *)(this + 16) = *(float *)(this + 16) + v15;
    }
    v8 = *(float *)(this + 52) - v5;
    v12 = *(float *)(this + 56) - 0.0;
    v16 = *(float *)(this + 60) - v6;
    result = sub_100029CD();
    *(float *)(this + 20) = *(float *)(this + 20) + v8;
    *(float *)(this + 24) = *(float *)(this + 24) + v12;
    *(float *)(this + 28) = v16 + *(float *)(this + 28);
  }
  return result;
}
