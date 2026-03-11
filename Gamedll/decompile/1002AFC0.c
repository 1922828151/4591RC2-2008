/*
 * func-name: sub_1002AFC0
 * func-address: 0x1002afc0
 * callers: 0x1000dda0
 * callees: none
 */

void __cdecl sub_1002AFC0(float a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v7; // [esp+10h] [ebp-10h]
  float v8; // [esp+14h] [ebp-Ch]
  float v9; // [esp+1Ch] [ebp-4h]
  float v10; // [esp+1Ch] [ebp-4h]
  float v11; // [esp+1Ch] [ebp-4h]

  if ( SkyController::Instance )
  {
    v9 = a6 / 255.0;
    v8 = v9;
    v10 = a5 / 255.0;
    v7 = v10;
    v11 = a4 / 255.0;
    SkyController::FadeFog(SkyController::Instance, a1, a2, a3, v11, v7, v8, a7);
  }
}
