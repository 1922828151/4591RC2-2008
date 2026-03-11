/*
 * func-name: sub_100014A0
 * func-address: 0x100014a0
 * callers: none
 * callees: none
 */

char __thiscall sub_100014A0(int this, float *a2)
{
  void (__stdcall *v2)(float *); // eax
  float v4[3]; // [esp+4h] [ebp-Ch] BYREF

  *(float *)(this + 376) = *a2;
  *(float *)(this + 380) = a2[1];
  *(float *)(this + 384) = a2[2];
  if ( *(_DWORD *)(this + 272) )
  {
    v2 = *(void (__stdcall **)(float *))(**(_DWORD **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 272) + 80))(*(_DWORD *)(this + 272))
                                       + 156);
    v4[0] = *a2 * 0.800000011920929;
    v4[1] = a2[1] * 0.800000011920929;
    v4[2] = 0.800000011920929 * a2[2];
    v2(v4);
  }
  return 1;
}
