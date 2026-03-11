/*
 * func-name: sub_100D31F0
 * func-address: 0x100d31f0
 * callers: 0x1001419b
 * callees: 0x102c9dbc
 */

void __thiscall sub_100D31F0(int this, int a2)
{
  float *v3; // ebx
  double v4; // st7
  int v5; // ecx
  _BYTE v6[36]; // [esp+4h] [ebp-24h] BYREF
  float v7; // [esp+2Ch] [ebp+4h]
  float v8; // [esp+2Ch] [ebp+4h]
  float v9; // [esp+2Ch] [ebp+4h]
  float v10; // [esp+2Ch] [ebp+4h]
  float v11; // [esp+2Ch] [ebp+4h]
  float v12; // [esp+2Ch] [ebp+4h]
  float v13; // [esp+2Ch] [ebp+4h]
  float v14; // [esp+2Ch] [ebp+4h]
  float v15; // [esp+2Ch] [ebp+4h]
  float v16; // [esp+2Ch] [ebp+4h]
  float v17; // [esp+2Ch] [ebp+4h]
  float v18; // [esp+2Ch] [ebp+4h]
  float v19; // [esp+2Ch] [ebp+4h]

  if ( *(_DWORD *)(this + 4) )
  {
    v3 = (float *)(this + 100);
    qmemcpy((void *)(this + 100), (const void *)NxHelper::ToNxMat33(v6, a2), 0x24u);
    v4 = *(float *)(this + 100) + *(float *)(this + 116);
    v7 = *(float *)(this + 132) + v4;
    if ( v7 < 0.0 )
    {
      v5 = *v3 < (double)*(float *)(this + 116);
      if ( v3[4 * v5] < (double)*(float *)(this + 132) )
        v5 = 2;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v14 = *(float *)(this + 116) - (*(float *)(this + 100) + *(float *)(this + 132)) + 1.0;
          v15 = sqrt(v14);
          *(float *)(this + 140) = v15 * 0.5;
          v16 = 0.5 / v15;
          *(float *)(this + 144) = (*(float *)(this + 128) + *(float *)(this + 120)) * v16;
          *(float *)(this + 136) = (*(float *)(this + 112) + *(float *)(this + 104)) * v16;
          *(float *)(this + 148) = v16 * (*(float *)(this + 108) - *(float *)(this + 124));
        }
        else
        {
          v11 = *(float *)(this + 132) - v4 + 1.0;
          v12 = sqrt(v11);
          *(float *)(this + 144) = v12 * 0.5;
          v13 = 0.5 / v12;
          *(float *)(this + 136) = (*(float *)(this + 124) + *(float *)(this + 108)) * v13;
          *(float *)(this + 140) = (*(float *)(this + 128) + *(float *)(this + 120)) * v13;
          *(float *)(this + 148) = v13 * (*(float *)(this + 112) - *(float *)(this + 104));
        }
        *(float *)(this + 72) = 0.5;
      }
      else
      {
        v17 = *(float *)(this + 100) - (*(float *)(this + 132) + *(float *)(this + 116)) + 1.0;
        v18 = sqrt(v17);
        *(float *)(this + 136) = v18 * 0.5;
        v19 = 0.5 / v18;
        *(float *)(this + 140) = (*(float *)(this + 112) + *(float *)(this + 104)) * v19;
        *(float *)(this + 144) = (*(float *)(this + 124) + *(float *)(this + 108)) * v19;
        *(float *)(this + 148) = v19 * (*(float *)(this + 128) - *(float *)(this + 120));
        *(float *)(this + 72) = 0.5;
      }
    }
    else
    {
      v8 = v7 + 1.0;
      v9 = sqrt(v8);
      *(float *)(this + 148) = v9 * 0.5;
      v10 = 0.5 / v9;
      *(float *)(this + 136) = (*(float *)(this + 128) - *(float *)(this + 120)) * v10;
      *(float *)(this + 140) = (*(float *)(this + 108) - *(float *)(this + 124)) * v10;
      *(float *)(this + 144) = v10 * (*(float *)(this + 112) - *(float *)(this + 104));
      *(float *)(this + 72) = 0.5;
    }
  }
}
