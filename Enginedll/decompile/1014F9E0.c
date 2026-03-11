/*
 * func-name: sub_1014F9E0
 * func-address: 0x1014f9e0
 * callers: 0x1014c730
 * callees: 0x10075e80, 0x1014e9b0, 0x1014ec10
 */

char __thiscall sub_1014F9E0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  GUISystem *v4; // ecx
  _DWORD *v5; // edi
  int v6; // ebp
  void (__cdecl *v7)(); // esi
  int v8; // ebx
  struct ControlFactory *ControlFactory; // eax
  int v10; // esi
  int v12; // [esp-4h] [ebp-1Ch]
  _DWORD *v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h]

  v3 = this + 1;
  sub_1014E9B0(this + 1, &v13, a2);
  v5 = v13;
  v6 = v3[1];
  if ( v13 && v13 == v3 )
  {
    v7 = invalid_parameter_noinfo;
  }
  else
  {
    v7 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
  }
  v8 = v14;
  if ( v14 == v6 )
    return 0;
  if ( !v5 )
    v7();
  if ( v8 == v5[1] )
    v7();
  v12 = *(_DWORD *)(v8 + 40);
  ControlFactory = GUISystem::GetControlFactory(v4);
  v10 = sub_1014EC10(ControlFactory, v12);
  if ( !v10 )
    return 0;
  if ( v8 == v5[1] )
    invalid_parameter_noinfo();
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 4))(v10, a3, *(_DWORD *)(v8 + 48));
  return 1;
}
