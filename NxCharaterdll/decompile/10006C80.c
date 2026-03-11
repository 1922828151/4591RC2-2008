/*
 * func-name: sub_10006C80
 * func-address: 0x10006c80
 * callers: 0x10005510
 * callees: none
 */

void __cdecl sub_10006C80(_DWORD *a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  _DWORD v5[2]; // [esp+4h] [ebp-8h] BYREF

  if ( a1[8] )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a2 + 44) + 4);
    v5[0] = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    v4 = a1[8];
    v5[1] = v3;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 4))(v4, v5);
  }
}
