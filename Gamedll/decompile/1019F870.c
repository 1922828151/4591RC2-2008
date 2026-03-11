/*
 * func-name: sub_1019F870
 * func-address: 0x1019f870
 * callers: 0x1000518c
 * callees: none
 */

char __thiscall sub_1019F870(int this)
{
  int v1; // edx
  _DWORD *v2; // eax
  int v3; // esi
  double v4; // st7
  float v6; // [esp+0h] [ebp-28h]
  float v7[3]; // [esp+10h] [ebp-18h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v1 = *(_DWORD *)(this + 20);
  *(float *)(this + 12) = 0.0;
  if ( v1 )
  {
    v2 = *(_DWORD **)(this + 4);
    v7[0] = 0.0;
    v7[1] = 0.0;
    v3 = v2[6];
    v7[2] = 0.0;
    v2 += 6;
    v4 = *(float *)(this + 24);
    v8[0] = v3;
    v6 = v4;
    v8[1] = v2[1];
    v8[2] = v2[2];
    (*(void (__thiscall **)(int, _DWORD *, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 28))(
      v1,
      v8,
      v7,
      LODWORD(v6),
      0,
      0.75);
  }
  return 1;
}
