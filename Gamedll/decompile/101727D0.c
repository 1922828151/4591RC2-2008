/*
 * func-name: ?GetEyesLocation@Robot@GameClient@@QAEABVVector@@XZ_0
 * func-address: 0x101727d0
 * callers: 0x10012c79
 * callees: none
 */

const struct Vector *__thiscall GameClient::Robot::GetEyesLocation(GameClient::Robot *this)
{
  int v1; // eax
  double v2; // st7
  double v3; // st7
  float v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+4h] [ebp-Ch]
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  if ( !*((_BYTE *)this + 700) )
  {
    v1 = *((_DWORD *)this + 49);
    v5 = 1.0;
    if ( v1 )
    {
      if ( *((_DWORD *)this + 88) == 1 )
        v2 = *(float *)(v1 + 112);
      else
        v2 = *(float *)(v1 + 108);
      v5 = v2;
    }
    v6 = *((float *)this + 6) + 0.0;
    v7 = *((float *)this + 7) + v5;
    v3 = *((float *)this + 8) + 0.0;
    *((float *)this + 144) = v6;
    *((float *)this + 145) = v7;
    v8 = v3;
    *((float *)this + 146) = v8;
  }
  return (GameClient::Robot *)((char *)this + 576);
}
