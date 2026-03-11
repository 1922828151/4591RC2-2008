/*
 * func-name: sub_10001EE0
 * func-address: 0x10001ee0
 * callers: none
 * callees: none
 */

char __thiscall sub_10001EE0(int this, float a2)
{
  int v2; // ecx
  int v3; // eax
  float v5; // [esp+8h] [ebp+4h]

  *(float *)(this + 380) = a2;
  v2 = *(_DWORD *)(this + 272);
  if ( v2 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 80))(v2);
    v5 = a2 * 0.800000011920929;
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)v3 + 168))(LODWORD(v5));
  }
  return 1;
}
