/*
 * func-name: ?Random@LightBeam@@QAEXMM@Z_0
 * func-address: 0x100aa540
 * callers: 0x10006235
 * callees: none
 */

void __thiscall LightBeam::Random(LightBeam *this, float a2, float a3)
{
  unsigned int v4; // edi
  bool v5; // cc
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  float *v10; // eax
  int v11; // [esp+8h] [ebp-4h]

  v11 = rand();
  v4 = 0;
  v5 = *((_DWORD *)this + 61) <= 0;
  *((float *)this + 75) = (double)v11 / 32767.0 * a2;
  if ( !v5 )
  {
    v6 = 0;
    do
    {
      v7 = *((_DWORD *)this + 47);
      if ( !v7 || v4 >= (*((_DWORD *)this + 48) - v7) / 24 )
        _invalid_parameter_noinfo();
      v8 = *((_DWORD *)this + 47);
      v9 = *((float *)this + 75) + *(float *)(v8 + v6 + 20);
      v10 = (float *)(v8 + v6 + 20);
      ++v4;
      v6 += 24;
      *v10 = v9;
    }
    while ( (signed int)v4 < *((_DWORD *)this + 61) );
  }
  *((float *)this + 76) = (double)rand() / 32767.0 * a3 + 1.0;
}
