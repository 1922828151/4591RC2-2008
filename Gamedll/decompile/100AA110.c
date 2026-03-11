/*
 * func-name: ?setColor@LightBeam@@QAEXK@Z_0
 * func-address: 0x100aa110
 * callers: 0x10014ee8
 * callees: 0x102c9fe0
 */

void __thiscall LightBeam::setColor(LightBeam *this, unsigned int a2)
{
  unsigned int v3; // edi
  int v4; // ebp
  int v5; // eax
  float v6; // [esp+4h] [ebp-Ch]
  signed int v7; // [esp+14h] [ebp+4h]
  float v8; // [esp+14h] [ebp+4h]
  float v9; // [esp+14h] [ebp+4h]

  *((_DWORD *)this + 62) = a2;
  v3 = 0;
  v6 = (float)HIBYTE(a2);
  v7 = 0;
  if ( *((int *)this + 61) > 0 )
  {
    v4 = 0;
    do
    {
      v8 = (double)v7 + *((float *)this + 71);
      v5 = *((_DWORD *)this + 47);
      v9 = v8 - (double)(*((_DWORD *)this + 61) * (int)(v8 / (double)*((int *)this + 61)));
      if ( !v5 || v3 >= (*((_DWORD *)this + 48) - v5) / 24 )
        _invalid_parameter_noinfo();
      ++v3;
      v4 += 24;
      *(_DWORD *)(*((_DWORD *)this + 47) + v4 - 8) = *((unsigned __int8 *)this + 248)
                                                   | ((*((unsigned __int8 *)this + 249)
                                                     | ((*((unsigned __int8 *)this + 250)
                                                       | ((unsigned int)(__int64)(v6
                                                                                - v9
                                                                                / (double)*((int *)this + 61)
                                                                                * v6
                                                                                * *((float *)this + 63)) << 8)) << 8)) << 8);
      v7 = v3;
    }
    while ( (signed int)v3 < *((_DWORD *)this + 61) );
  }
}
