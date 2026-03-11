/*
 * func-name: sub_100D30F0
 * func-address: 0x100d30f0
 * callers: 0x10019b41
 * callees: none
 */

void __thiscall sub_100D30F0(int this, int a2)
{
  float *v3; // eax
  float *v4; // eax
  float v5; // [esp+4h] [ebp-18h] BYREF
  float v6; // [esp+8h] [ebp-14h]
  float v7; // [esp+Ch] [ebp-10h]
  _BYTE v8[12]; // [esp+10h] [ebp-Ch] BYREF
  float v9; // [esp+20h] [ebp+4h]

  if ( *(_DWORD *)(this + 4) )
  {
    v3 = (float *)NxHelper::ToNxVec3(&v5, a2);
    *(float *)(this + 76) = *v3;
    *(float *)(this + 80) = v3[1];
    *(float *)(this + 84) = v3[2];
    v4 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 4) + 40))(*(_DWORD *)(this + 4), v8);
    v5 = *(float *)(this + 76) - *v4;
    v6 = *(float *)(this + 80) - v4[1];
    v7 = *(float *)(this + 84) - v4[2];
    *(float *)(this + 88) = v5;
    *(float *)(this + 92) = v6;
    *(float *)(this + 96) = v7;
    v9 = *(float *)(this + 92) * *(float *)(this + 92)
       + *(float *)(this + 88) * *(float *)(this + 88)
       + *(float *)(this + 96) * *(float *)(this + 96);
    if ( v9 <= 225.0 )
    {
      *(float *)(this + 68) = 0.5;
      *(float *)(this + 88) = *(float *)(this + 88) * 2.0;
      *(float *)(this + 92) = *(float *)(this + 92) * 2.0;
      *(float *)(this + 96) = 2.0 * *(float *)(this + 96);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 24))(*(_DWORD *)(this + 4), this + 76);
      *(float *)(this + 96) = 0.0;
      *(float *)(this + 92) = 0.0;
      *(float *)(this + 88) = 0.0;
    }
  }
}
