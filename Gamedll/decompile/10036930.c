/*
 * func-name: sub_10036930
 * func-address: 0x10036930
 * callers: 0x1000db75
 * callees: 0x10001d02, 0x100024fa
 */

float *__thiscall sub_10036930(int this, float *a2, float a3, float a4)
{
  float *v5; // eax
  float v6; // ecx
  int v7; // edx
  float v8; // eax
  double v9; // st7
  int v10; // ecx
  float *result; // eax
  float v12; // edx
  float v13; // ecx
  float v14; // [esp+4h] [ebp-18h] BYREF
  float v15; // [esp+8h] [ebp-14h]
  float v16; // [esp+Ch] [ebp-10h]
  float v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  float v19; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + 8) == this + 240 )
  {
    v5 = *(float **)(this + 304);
    v6 = v5[6];
    v7 = *((_DWORD *)v5 + 7);
    v8 = v5[8];
    v15 = 0.0;
    v17 = v6;
    v16 = 0.0;
    v18 = v7;
    v19 = v8;
    sub_10001D02();
    v9 = 0.0 * a3 + v17 + (float)0.0;
    v14 = v9;
    sub_10001D02();
    v10 = *(_DWORD *)(this + 304);
    v16 = v9 * a3 + v19 + (float)0.0;
    v15 = a4;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v10 + 36))(v10, &v14);
    GameClient::Robot::Move(*(GameClient::Robot **)(this + 304), 0);
    result = a2;
    v12 = v15;
    *a2 = v14;
    v13 = v16;
    a2[1] = v12;
    a2[2] = v13;
  }
  else
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  return result;
}
